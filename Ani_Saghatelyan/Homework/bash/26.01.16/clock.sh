#!/bin/bash
# current date in seconds
DATE=$(date +%s)
echo $DATE
#time, at which the system will shut down
time_shut_down=$(date -d '27/01/2016 01:31' +%s)
echo  "The time to Shut Down  $time_shut_down"
#sleeep time for process
sleep_seconds=$(( $time_shut_down - $DATE ))
echo "difference $sleep_seconds"

sleep $sleep_seconds
sudo shutdown -h  
