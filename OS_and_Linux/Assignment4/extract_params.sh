#!/bin/bash
if [ $# -ne 1 ]; then
	echo "Usage: $0 input.txt"
	exit 1
fi
input_file="$1"
output_file="output.txt"
> "$output_file"
frame_time=""
fc_type=""
fc_subtype=""
while IFS= read -r line; do
	if [[ "$line" =~ \"frame.time\" ]]; then
		frame_time=$(echo "$line" | sed -n 's/.*"frame.time"[[:space:]]*:[[:space:]]*"\(.*\)".*/\1/p')
	fi
	if [[ "$line" =~ \"wlan.fc.type\" ]]; then
        	fc_type=$(echo "$line" | sed -n 's/.*"wlan.fc.type"[[:space:]]*:[[:space:]]*"\(.*\)".*/\1/p')
	fi
	if [[ "$line" =~ \"wlan.fc.subtype\" ]]; then
        	fc_subtype=$(echo "$line" | sed -n 's/.*"wlan.fc.subtype"[[:space:]]*:[[:space:]]*"\(.*\)".*/\1/p')
	fi
	if [[ -n "$frame_time" && -n "$fc_type" && -n "$fc_subtype" ]]; then
		{
		echo "\"frame.time\": \"$frame_time\","
		echo "\"wlan.fc.type\": \"$fc_type\","
		echo "\"wlan.fc.subtype\": \"$fc_subtype\""
		} >> "$output_file"

		frame_time=""
		fc_type=""
		fc_subtype=""
	fi
done < "$input_file"
echo "Extraction complete. Output written to $output_file"
