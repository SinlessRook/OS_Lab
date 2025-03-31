# // Algorithm

# // 1. Start
# // 2. Read the input value into number
# // 3. Initialize a loop variable i from 2 to number/2
# // 4. Repeat the following steps for each value of i:
# //    - Check if number is divisible by i (i.e., number % i == 0)
# //    - If true, print "number is not a prime number" and exit
# // 5. If no divisors are found, print "number is a prime number"
# // 6. End


# // Code

echo "Enter a number: "	
read number

for ((i=2;i<=number/2;i++))
do
    if [ $((number%i)) -eq 0 ]
    then
        echo "$number is not a prime number"
        exit 0
    fi
done

echo "$number is a prime number"


# // Output
# $ chmod +x ./Prime.sh
# $ ./Prime.sh
# Enter a number:
# 4
# 4 is not a prime number