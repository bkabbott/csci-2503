#!/bin/bash

# Declare array with 5 elements
opsys=( 'Windows 11' 'Linux' 'macOS' 'Android' 'iOS')

# get number of elements in the array
num=${#opsys[@]}

# echo each element in array using iteration
for (( i=0;i<$num;i++ )); do
    echo ${opsys[${i}]}
done
