#!/bin/bash
echo `which skype` >> log
a=`wc -l log`
if [ '$a -eq 0' ];

    then
    echo "there are not skype"
    sudo apt-get install skype
   skype 
    else
	echo "YES skype"
	skype --secondary
	fi
