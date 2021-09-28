#!/bin/bash
factorial=1
echo "Enter a number:"
read input
for i in $(seq 1 $input);
do
    factorial=$((factorial * i))
done
echo "Factorial of $input is: "
echo  $factorial 
exit 0