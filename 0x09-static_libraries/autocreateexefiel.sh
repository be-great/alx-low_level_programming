#!/bin/bash

# Specify the source files directory
source_dir="./"

# Check if the source directory exists
if [ -d "$source_dir" ]; then
  # Loop through the source files in the directory
  for source_file in "$source_dir"*.c; do
    if [ -f "$source_file" ]; then
      # Extract the filename without extension
      filename_without_extension=$(basename -- "$source_file")
      filename_without_extension="${filename_without_extension%.*}"

      # Compile the source file into an object file with a name like '0-isupper.o'
      gcc -c "$source_file" -o "${filename_without_extension}.o" -I"$source_dir"
    fi
  done
else
  echo "Source directory '$source_dir' not found."
fi
