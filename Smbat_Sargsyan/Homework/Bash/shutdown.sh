#!/bin/bash
echo "Do you want to shut down or restart you system???"
select choice in "Yes" "No"; do
break
done
if [ '$choice -eq Yes' ];
then
     echo "Do your choice"
     select SorR in "ShutDown" "Restart"; do
     break
     done
if [ '$SorR -eq ShutDown' ];
     then
	select date in 0 15 30 "your choce $date";do
	break
	done
	sudo shutdown -h $date
fi
elif ['$SorR -eq Restart'];
then sudo shutdown -r 0
fi
#fi
