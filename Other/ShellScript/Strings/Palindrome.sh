# // Algorithm

# // 1. 
# // 2. 
# // 3. 


# // Code

echo "enter the string:"
read str
len=${#str}
i=1
rstr=""
while [ $i -le $len ]
do
rstr="${str:$i-1:1}$rstr"
i=$((i+1))
done
echo "reversed String is :$rstr"
if [ "$str" = "$rstr" ]
then
echo "Palindrome"
else
echo "Not palindrome"
fi

# // Output

# $ chmod +x ./Palindrome.sh
# $ ./Palindrome.sh
# enter the string:
# malayalam
# reversed String is:malayalam
# Palindrome