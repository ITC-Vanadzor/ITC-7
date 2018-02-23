#!/bin/bash
declare -i lines=`wc -l log.txt | cut -c 1-2`

if [ "$lines" -gt 1 ]
	then
		p1=`head -1  log.txt | cut -c 2-6`
		p2=`tail -1  log.txt | cut -c 2-6`
		fname="log_"$p1"_"$p2
	else
		p3=`stat -c %y log.txt | cut -c 12-16`
		fname="log_"$p3
fi

echo "Select archive type:"
options=("zip" "gzip")
select opt in "${options[@]}"
	do
	case $opt in
		"zip")
			echo "Creating $fname"".zip..."
			zip $fname".zip" "log.txt"
			break			
			;;
		"gzip")
			echo "Creating $fname"".gz..."
			gzip -c log.txt > $fname".gz"
			break
			;;
		     *) echo "what you want ?";;
			esac
	done

