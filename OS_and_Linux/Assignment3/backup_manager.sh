#!/bin/bash
if [ $# -ne 3 ]; then
    echo "Use <source> <backup> <ext>"
    exit 1
fi
SOURCE_DIR="$1"
BACKUP_DIR="$2"
EXT="$3"
if [ ! -d "$SOURCE_DIR" ]; then
    echo "Error : Source Dir does not exist"
    exit 1
fi
if [ ! -d "$BACKUP_DIR" ]; then 
    mkdir -p "$BACKUP_DIR" || {
    echo "Error : Failed to create Backup Dir"
    exit 1
}
fi
FILES=( "$SOURCE_DIR"/*"$EXT" )
if [ ${#FILES[@]} -eq 1 ] && [ ! -e "${FILES[0]}" ]; then
    echo "No Files with extension  found in Source Dir"
    exit 0
fi
export BACKUP_COUNT=0;
TOTAL_SIZE=0;

echo "Files to be backed up:"
echo 

for file in "${FILES[@]}"; do
    size=$(stat -c %s "$file")
    echo -e "$(basename "$file") \t -  bytes"
done

for file in "${FILES[@]}"; do
    filename=$(basename "$file")
    dest="$BACKUP_DIR/$filename"
    size=$(stat -c %s "$file")
    if [ -e "$dest" ]; then
        if [ "$file" -nt "$dest" ]; then
          cp "$file" "$dest" 
          ((BACKUP_COUNT++)) 
	  ((TOTAL_SIZE+=size)) 
	fi
     else 
	 cp "$file" "$dest" 
	 ((BACKUP_COUNT++))
	 ((TOTAL_SIZE+=size)) 	
     fi 
done 
REPORT="$BACKUP_DIR/backup_report.log"
{
    echo "Backup Report"
    echo "Total Files backed up:   $BACKUP_COUNT "
    echo "Total size backed up :   $TOTAL_SIZE  bytes"
    echo "Backup directory     :   $BACKUP_DIR "
    echo "Backup completed on  :   $(date)"
} > "$REPORT"

echo "BACKUP completed"
echo "REPORT saved at $REPORT "
