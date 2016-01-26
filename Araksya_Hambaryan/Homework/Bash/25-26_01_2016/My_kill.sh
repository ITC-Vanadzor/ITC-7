#!/bin/bash
# payman@ sxal e stugum :((  
echo "Process name"
read name
echo "Signal"
read signal
PID=`pidof $name`
if [ '$PID -eq 0' ]
    then
	echo "process not found"
	exit 0
    fi
kill -$signal $PID
echo "Process  is killed"
