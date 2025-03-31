# // Algorithm

# // 1. 
# // 2. 
# // 3. 


# // Code

# Using for loop
echo "Using for loop"
for ((i=1;i<=10;i+=2))
do
echo -n "$i "	
done
echo

# Using while loop
echo "Using while loop"
i=1
while [ $i -le 10 ]
do
    echo -n "$i "
    i=$((i+2))
done
echo

# Using until loop
echo "Using until loop"
i=1
until [ $i -gt 10 ]
do
    echo -n "$i "
    i=$((i+2))
done
echo

# Using For loop Sequence
echo "Using For loop Sequence"
for i in {1..10..2}
do
    echo -n "$i "
done
echo

# // Output
# $ chmod +x ./Odd.sh
# $ bash Odd.sh
# Using for loop
# 1 3 5 7 9
# Using while loop
# 1 3 5 7 9
# Using until loop
# 1 3 5 7 9
# Using For loop Sequence
# 1 3 5 7 9