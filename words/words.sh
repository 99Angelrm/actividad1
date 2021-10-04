#!/bin/bash
read -p "Enter a string separated by spaces: " words
  
IFS=' ' #setting space as delimiter  
read -ra ADDR <<<"$words"
  
for i in "${ADDR[@]}";
do  
echo "$i"  
done  