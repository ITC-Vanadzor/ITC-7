#!/bin/bash

# Find a log file
filename=`ls *log`

# get first log date
firstDate=`head -n 1 $filename| cut -c 2-11`

#get last log date
lastDate=$(tail --lines 1  $filename| cut -c 2-11)
space='_'

# check wheather date are, if not create archive with last modification time
if [ -z "$firstDate" ] || [ "$lastDate" == "$firstDate" ]
then 
	lastModif=$(date +%d"_"%y -r $filename)
	select method in "zip" "tar.gz";
	do
		if [ "$method" = "zip" ]
		then
			zip -r $filename$space$lastModif.zip $filename
		else
			tar -cvf $filename$space$lastModif.tar.gz $filename
		fi		
		break
	done
else
	select method in "zip" "tar.gz";
	do	
		if [ "$method" = "zip" ]
		then
			zip -r $filename$space$firstDate$space$lastDate.zip $filename
		else
			tar -cvzf $filename$space$firstDate$space$lastDate.tar.gz $filename
		fi
		break
	done	
fi
