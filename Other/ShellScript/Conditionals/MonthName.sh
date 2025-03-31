# // Algorithm

# // 1. Start
# // 2. Display "Enter month number: "
# // 3. Read the input value into month
# // 4. Use a case statement to match month with the following conditions:
# //    -  If month is 1, print "January"
# //    -  If month is 2, print "February"
# //    -  If month is 3, print "March"
# //    -  If month is 4, print "April"
# //    -  If month is 5, print "May"
# //    -  If month is 6, print "June"
# //    -  If month is 7, print "July"
# //    -  If month is 8, print "August"
# //    -  If month is 9, print "September"
# //    -  If month is 10, print "October"
# //    -  If month is 11, print "November"
# //    -  If month is 12, print "December"
# // 5. End


# // Code

echo "Enter month number: "	
read month

case $month in
    1) echo "January";;
    2) echo "February";;
    3) echo "March";; 
    4) echo "April";;
    5) echo "May";;
    6) echo "June";;
    7) echo "July";;
    8) echo "August";;
    9) echo "September";;
    10) echo "October";;
    11) echo "November";;
    12) echo "December";;
esac

# // Output
# $ chmod +x ./MonthName.sh
# $ ./MonthName.sh
# Enter month number:
# 4
# April