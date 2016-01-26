#!/bin/bash

check=$(cat /proc/$1/comm)
if [ -z "$check"] 
then 
	echo "There is no process with this PID"
else 
if [ "$2"="-9"] 
  then 
	  echo "SIGKILL!!! Kill the  process with PID $1"
  	  kill -9 $1
  else
	  echo "SIGTERM!!! safe kill the process with PID $1"
	  kill -15 $1
  fi
fi 
