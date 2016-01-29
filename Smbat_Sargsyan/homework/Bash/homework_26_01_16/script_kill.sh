#!/bin/bash
id=`pidof xclock`
if [ -z $id ]
then 
      echo "Process not found"
      exit 1
fi
`kill -"$2" $id`
echo "$1 process is killed"
