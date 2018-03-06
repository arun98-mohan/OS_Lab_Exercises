clear
#list=$(ls *.txt)
for i in `ls`
do
wc $i
done
exit 0
