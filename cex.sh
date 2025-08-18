#!/bin/bash

# Exit immediately if a command exits with a non-zero status.
set -e

# Check if a filename is provided as an argument.
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi

# Get the source file from the first argument.
SOURCE_FILE=$1
# Get the base name of the file (e.g., "main" from "main.cpp").
BASENAME=$(basename "$SOURCE_FILE" .cpp)
# Define the output executable name.
OUTPUT_FILE="${BASENAME}.out"

# Compile the C++ file.
echo "--- Compiling ${SOURCE_FILE} ---"
g++ -std=c++17 -Wall "${SOURCE_FILE}" -o "${OUTPUT_FILE}"

# Run the compiled program.
echo "--- Running ${OUTPUT_FILE} ---"
./"${OUTPUT_FILE}"
echo "--- Done ---"