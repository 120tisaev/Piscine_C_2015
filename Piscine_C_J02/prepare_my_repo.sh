if [ -z $1 ]
then
	echo "Wrong usage"
	exit 1
fi

blih repository create $1
blih repository setacl $1 ramassage-tek r
blih repository getacl $1
