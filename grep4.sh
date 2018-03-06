clear
echo "Changing 09 to 10 in new file"
sed 's/09/10/' marks.txt>marks2.txt
cat marks2.txt
exit 0
