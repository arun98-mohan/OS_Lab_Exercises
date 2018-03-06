clear
echo "deleting rows with 40 marks"
sed '/40/d' marks.txt>marks3.txt
cat marks3.txt
exit 0
