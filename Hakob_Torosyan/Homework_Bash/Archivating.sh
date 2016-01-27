#!/bin/bash
$1 #For parameter
echo "Please import for zip and another number for tar.gz "
read parameter
created=`ls -l --time-style=+%T $1 | cut -d " " -f6`
modified=`ls -ul --time-style=+%T $1 | cut -d " " -f6`
if [ $parameter = 1 ]
then zip -r "$1"."$created"_"$modified".zip $1
else tar -cvf "$1"."$created"_"$modified".tar.gz $1
fi

