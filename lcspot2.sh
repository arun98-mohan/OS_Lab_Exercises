t=$(date +"%H")
if [[ $t -lt 12 ]]
then
echo "good morning"
else
echo "good evening"
fi
