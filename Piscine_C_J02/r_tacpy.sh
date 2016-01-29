

export MY_LINE1='0'
export MY_LINE2='1'

# remove even lines
sed '1d; n; d'
cut -d: -f1
rev

#echo $MY_LINE1
#echo $MY_LINE2
