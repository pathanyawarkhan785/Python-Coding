read -p "enter number : " val

if [ $val -gt 27 ]
then
	echo "greater than 27."
elif [ $val -lt 27 ]
then
	echo "lesser than 27."
else
	echo "equals to 27."
fi
