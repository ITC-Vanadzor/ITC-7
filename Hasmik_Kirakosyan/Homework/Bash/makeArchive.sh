#!/bin/bash

filename=`ls *log`
firstDate=`head -n 1 $filename | cut -c 2-11`  
space="_" 
lastDate=`tail -1 $filename | cut -c 2-11`
echo $lastDate
select method in "zip" "tar.gz";
do	
	if [ "$method"="zip"]
	then
			zip -r $filename$space$firstDate$space$lastDate.zip $filename
	else
			tar -cvzf $filename$space$firstDate$space$lastDate.tar.gz $filename
	fi
	break
done	

