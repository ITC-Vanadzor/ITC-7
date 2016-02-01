#!/bin/bash
echo "Enter the name of process " $1
echo "Enter signal to kill " $2
#searches the PID of process
PID=`pgrep $1`
echo $PID
`kill $2  $PID`
