#!/bin/bash

result = -1
echo "Enter a number :" && read number1
echo "Enter another number: " && read number2
echo "Enter your opetation [+,-,*,/]: " && read op
#echo $op

if [[($op = "+")]]; then
	echo "The result of $number1 $op $number2 is $((number1 + number2))"
elif [[($op = "-")]]; then
	echo "The result of $number1 $op $number2 is $((number1 - number2))"
elif [[($op = "*")]]; then
	echo "The result of $number1 $op $number2 is $((number1 * number2))"
elif [[($op == "/")]]; then
	echo "The result of $number1 $op $number2 is $((number1 / number2))"
else 
	echo nada
	result = -1
fi


exit 0
