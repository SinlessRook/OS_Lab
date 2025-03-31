# // Algorithm
# // 1. Start
# // 2. Input 3 numbers a, b, c
# // 3. Check if a > b and a > c
# // 4. Print a 
# // 5. Check if b > a and b > c
# // 6. Print b
# // 5. Check if c > a and c > b
# // 6. Print c
# // 7. End

# // Code

echo "Enter 3 numbers: "
read a b c

if [ $a -gt $b -a $a -gt $c ]
then
    echo "$a is the largest number"
elif [ $b -gt $a -a $b -gt $c ]
then
    echo "$b is the largest number"
else
    echo "$c is the largest number"
fi

# // Output

# $ chmod +x LargestNum.sh
# $ ./LargestNum.sh
# Enter 3 numbers:
# 1 2 4
# 4 is the largest number