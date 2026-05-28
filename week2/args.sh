#!/bin/bash

# print the number of arguments
echo "$# arguments passed"

echo "Name of script $0"

# print the arguments
for arg in $@;
do
  echo $arg;
done