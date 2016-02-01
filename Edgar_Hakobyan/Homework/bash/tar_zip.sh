#!/bin/bash
select a in "zip" "tar";do
break
done
file=`ls *.txt`
name=""$file"_$(stat -c %y a.txt | cut -c 12-19)"
if [[ "$a"=="zip" ]]
	then 
		zip "$name".zip $file
	else 
		tar -cvf "$name".tar $file
fi
