echo "A: "
read A
echo "B: "
read B
echo "C: "
read C
if [[($A+$B -gt C)]]&&[[($B+$C -gt $A)]]&&[[($C+$A -gt $B)]];
	then
		echo "Valid triangle"
	else
		echo "Invalid triangle"
fi