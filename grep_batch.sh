clear
#question1
echo "Displaying rows with A or S grade"
grep -w 'A\|S' marks.txt>op1.txt
cat op1.txt

#question2
echo "Names with pattern nn of name column"
grep '.*nn.*' marks.txt>op2.txt
cat op2.txt

#question3
echo "Names starting with a to k"
grep '[[:digit:]]\{8\}[[:space:]][a-k].*' marks.txt>op3.txt
cat op3.txt

#question4
echo "Changing 09 to 10 in new file"
sed 's/09/10/' marks.txt>op4.txt
cat op4.txt

#question5
echo "deleting rows with 40 marks"
sed '/40/d' marks.txt>op5.txt
cat op5.txt

#question6
echo "Displaying all the roll numbers"
awk '{print $1}' marks.txt>op6.txt
cat op6.txt

exit 0

