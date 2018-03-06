echo "#########	Welcome	### Scientific Calculator##################"
flag=10
while(( flag==10 ))
do
echo "1-addition,2-Subtraction,3-Multiplication,4-Division,5-Logarithm,6-Sine,7-Cosine,8-Tan Inverse,9-Exponential of x,10-Modulo,11-Square,12-Cube,13-Power a^b,14-Square Root,15-Number of Significant Digits"
echo "Enter Choice: "
read choice
case $choice in
1) 
clear
echo "Addition Selected, enter two numbers"
read a
read b
echo `expr $a + $b`;;

2) 
clear
echo "Subtraction Selected, enter two numbers"
read a
read b
echo `expr $a - $b`;;

3)
clear
echo "Multiplication Selected, enter two numbers"
read a
read b
echo `expr $a \* $b`;;

4)
clear
echo "Division Selected, enter two numbers"
read a
read b
echo `expr $a / $b`;;

5)
clear
echo "Logarithm"
read n
echo "l ($n)" | bc -l;;

6) 
clear
echo "Sine"
read n
echo "s ($n)" | bc -l;;

7)
clear
echo "Cosine"
read n
echo "c ($n)" | bc -l;;

8)
clear
echo "TAN Inverse"
read n
echo "a ($n)" | bc -l;;

9)
clear
echo "Exponential"
read n
echo "e ($n)" | bc -l;;

10)
clear
echo "Modulo"
read a
read b
echo `expr $a % $b` ;;

11)
clear
echo "Square"
read a
echo `expr $a \* $a`;;

12)
clear
echo "Cube"
read a
echo `expr $a \* $a \* $a`;;

13)
clear
echo "A^B"
read a
read b
echo "$a ^ $b" | bc -l;;

14)
clear
echo "Square Root"
read a
echo "sqrt ($a)" | bc -l;;

15)
clear
echo "Number of Significant Digits Finder"
read a
echo "length ($a)" | bc -l;;

esac
echo "Enter 10 to continue, 20 to exit"
read flag
done
