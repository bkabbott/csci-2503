#!/bin/bash

# Define global variable, can be used througout bash script
VAR="var is global variable"

function bash_test {
    # Define local variable, only available to this function
    local VAR="var is local variable"
    echo $VAR
}

echo $VAR
bash_test

# Global variable should not change
echo $VAR