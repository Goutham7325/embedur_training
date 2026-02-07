#!/bin/bash

ERROR_LOG="errors.log"

#Display help

display_help(){
cat << EOF
Usage: $0 [OPTIONS]
Options:
	-d <directory>   Recursively search a directory for a keyword
	-f <file>        Search for a keyword in a specific file
	-k <keyword>     Keyword to search
	--help           Display help menu
Examples:
	$0 -d logs -k error
	$0 -f script.sh -k TODO
	$0 --help
EOF
}
#Redirection - log error

log_error(){
	echo "ERROR: $1" | tee -a "$ERROR_LOG" >&2
}
 #Validate Inputs

validate_inputs(){
	#check keyword
	if [[ -z "$KEYWORD" || ! "$KEYWORD" =~ ^[a-zA-Z0-9._-]+$ ]]; then
		log_error "Invalid or empty keyword"
		exit 1
	fi

	#check directory
	if [[ -n "$DIRECTORY" && ! -d "$DIRECTORY" ]]; then
		log_error "Directory '$DIRECTORY' does not exist"
		exit 1
	fi

	#check file
	if [[ -n "$FILE" && ! -f "$FILE" ]]; then
		log_error "File '$FILE' does not exist."
		exit 1
	fi
}

#Recursive search

recursive_search(){
	local DIR="$1"
	for ITEM in "$DIR"/*; do
		if [[ -f "$ITEM" ]]; then
			grep -H "$KEYWORD" "$ITEM" 2>>"$ERROR_LOG"
		elif [[ -d "$ITEM" ]]; then
			recursive_search "$ITEM"
		fi
	done
}

#Parse command line arguments

DIRECTORY=""
FILE=""
KEYWORD=""

# --help

if [[ "$1" == "--help" ]]; then
	display_help
	exit 0
fi

while getopts ":d:f:k:" opt; do
	case $opt in
		d) DIRECTORY="$OPTARG" ;;
		f) FILE="$OPTARG" ;;
		k) KEYWORD="$OPTARG" ;;
		*)
		  log_error "Invalid option"
		  display_help
		  exit 1
		  ;;
	esac
done

#Special Parameters

echo "Script Name: $0"
echo "Total Arguments: $#"
echo "All Arguments: $@"

#Validate Inputs

validate_inputs 

#Files search using Here String

if [[ -n "$FILE" ]]; then
	echo "Searching file '$FILE' for keyword '$KEYWORD'..."
	grep "$KEYWORD" <<< "$(cat "$FILE")"
	echo "Exit status: $?"
	exit 0
fi

#Recursively search directory

if [[ -n "$DIRECTORY" ]]; then
    echo "Recursively searching directory '$DIRECTORY' for keyword '$KEYWORD'..."
    recursive_search "$DIRECTORY"
    echo "Exit status: $?"
    exit 0
fi

#Error if no valid arguments

log_error "No valid options provided."
display_help
exit 1
