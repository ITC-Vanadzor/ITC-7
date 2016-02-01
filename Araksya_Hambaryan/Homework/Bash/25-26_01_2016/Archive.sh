#!/bin/bash
echo "select option"
select archive in "tar.gz" "zip"
do
break
done
if [ '`wc -l log` -gt 1' ]
    then 
	firsline=`head -1 log | cut -c 8,9,11,12,14,15`
	lastline=`tail -1 log | cut -c 8,9,11,12,14,15`
	archivename=log_$firstline_$lastline

    else
	archivename=`stat -c%y log | cut -c 12,13,15,16,18,19`
    fi
if [ '$archive -eq "tar.gz"' ];
then 
    tar -cvf $archivename.tar.gz log
else
    zip $atchivename.zip log
fi

