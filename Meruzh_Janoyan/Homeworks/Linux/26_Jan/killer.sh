#!/bin/bash

pid=`ps -e | grep $2 | cut -c 1-6 | head -1`
if [ -z $pid ]
	then
		echo "Process not found!"
		exit -1
fi

echo "Name: "$2
echo "SIGNAL: "$1
echo "PID: "$pid
kill $1 $pid
echo "PROCESS KILLED!"
