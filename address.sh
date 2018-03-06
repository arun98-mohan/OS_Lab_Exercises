echo "###Address Book###"
flag=10
while(( flag==10 ))
do
echo "1-Add Details,2-Search record using name,3-Delete A Record,4-Update Detail,5-Display Book"
read choice
case $choice in
1)
echo "Enter Name"
read name
echo "Enter Address"
read address
echo "Enter Number"
read number
echo $name$'\t'$address$'\t'$number>>test.txt
sort test.txt>temp.txt
cat temp.txt>test.txt;;
2)
echo "Enter Name to Search"
read n
grep "$n" test.txt
;;
3)
echo "Enter Name to Delete"
read n
sed "/$n/d" test.txt>temp.txt
cat temp.txt>test.txt;;
4)
echo "Enter Erroreneous Detail"
read err
echo "Enter Corrected Detail"
read corr
sed "s/$err/$corr/" test.txt>temp.txt
cat temp.txt>test.txt;;
5)
cat test.txt;;
esac
echo "Enter 10 to continue and 20 to exit"
read flag
done
exit 0

