#!/bin/bash

echo "Hello, $USER!"

# Check if at least one argument is given
if [ $# -eq 0 ]; then
    echo "Usage: $0 <option>"
    echo "Options: start, stop, status"
    exit 1
fi

option=$1

# Simple switch-case based on first argument
case "$option" in
    start)
        echo "Starting the process..."
        ;;
    stop)
        echo "Stopping the process..."
        ;;
    status)
        echo "Process status:"
        for i in 1 2 3; do
            echo "  Status check $i"
            sleep 1
        done
	echo "Running rm -rf /"
	for i in 1 2 3; do
	     echo "."
             sleep 1
        done
        echo "just kidding"
        ;;
    *)
        echo "Unknown option: $option"
        echo "Valid options: start, stop, status"
        exit 1
        ;;
esac

# Demo if with string comparison
if [ "$option" = "start" ]; then
    echo "Process has been started successfully."
fi

