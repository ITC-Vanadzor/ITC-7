#!/bin/bash

declare arr
while [ 1 == 1 ]; do
   sleep 1
   flag=$(tail -n 1 court.txt)  
   if [[ "$flag"="1" ]] && [ "$flag" != "Winner!!!!!!" ]
   then 
	# move court to array
	tmp=$(head -n 1 court.txt)
	arr[0]=${tmp:1:1}
	arr[1]=${tmp:5:1}
	arr[2]=${tmp:9:1}
	tmp=$(head -n 2 court.txt | tail -1)
	arr[3]=${tmp:1:1}
	arr[4]=${tmp:5:1}
	arr[5]=${tmp:9:1}
	tmp=$(head -n 3 court.txt | tail -1)
	arr[6]=${tmp:1:1}
	arr[7]=${tmp:5:1}
	arr[8]=${tmp:9:1}	      
	   
	# print court  
	 head -n 3 court.txt

	# player1 step
	echo 'Your step (enter x and y)'
	read x y
	index=$(( $x*3 + $y ))
	arr[index]=x
	   
	# write in court
	echo ' '${arr[0]}' | '${arr[1]}' | '${arr[2]} >  court.txt
	echo ' '${arr[3]}' | '${arr[4]}' | '${arr[5]} >> court.txt
	echo ' '${arr[6]}' | '${arr[7]}' | '${arr[8]} >> court.txt
	echo 2 >> court.txt
	  
	# check for winner
	if [ "$arr[0]" == "$arr[1]" ]  && [ "$arr[0]" == "$arr[2]" ] && [ "$arr[0]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
   	elif [ "$arr[3]" == "$arr[4]" ] && [ "$arr[3]" == "$arr[5]" ] && [ "$arr[3]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
   	elif [ "$arr[6]" == "$arr[7]" ] && [ "$arr[6]" == "$arr[8]" ] && [ "$arr[6]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	elif [ "$arr[0]" == "$arr[3]" ] && [ "$arr[0]" == "$arr[6]" ] && [ "$arr[0]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	elif [ "$arr[1]" == "$arr[4]" ] && [ "$arr[1]" == "$arr[7]" ] && [ "$arr[1]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	elif [ "$arr[2]" == "$arr[5]" ] && [ "$arr[2]" == "$arr[8]" ] && [ "$arr[2]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	elif [ "$arr[0]" == "$arr[4]" ] && [ "$arr[0]" == "$arr[8]" ] && [ "$arr[3]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	elif [ "$arr[2]" == "$arr[4]" ] && [ "$arr[2]" == "$arr[6]" ] && [ "$arr[2]" != " " ]
	   then 
		   echo Winner!!!!!!
		   echo Winner!!!!!! >> court.txt
		   exit
	fi
else 
	echo "Game over!!! You are failed"
	exit
fi
done
