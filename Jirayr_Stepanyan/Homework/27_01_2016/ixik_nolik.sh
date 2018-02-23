#!/bin/bash
p1="p1_____X";
p2="p2_____O";
echo -e "$p1\n$p2";
echo PLAYER 1 TURN;
echo "12       345       678" > log;
arr=("| |" "| |" "| |" "| |" "| |" "| |" "| |" "| |" "| |");
index=-1;
hert=1;
printtt ()
{
    	if [[ $index = "0" || $index = "1" || $index = "2" || $index = "3" || $index = "4" || $index = "5" || $index = "6" || $index = "7" || $index = "8" ]]; then
		if [[ ${arr[$index]} = "X" || ${arr[$index]} = "O" ]]; then
			echo WRONG POSITION !!!;
		else
			if [ $hert -eq "1" ]; then
				arr[$index]="X";
				((++hert));
				echo PLAYER 2 TURN;
			else
				arr[$index]="O";
				((--hert));
				echo PLAYER 1 TURN;
 			fi;
		fi;
	fi;
i=0
while [ $i -lt ${#arr[*]} ]; do
    if [[ $i = "2" || $i = "5" || $i = "8" ]]; then
	     echo ${arr[$i]}; 
    else
	     echo -n ${arr[$i]};    
    fi;
    ((i++));
done;
}
printtt
q=1  
while [ $q -gt "0" ]; do
	read step;
	if [ $step = "0" ]; then
	    index=0;
	else
    	    index=`cut -c "$step" log`;
	fi;
	printtt $(($index))
	if [[ ${arr[0]} = "X" && ${arr[1]} = "X" && ${arr[2]} = "X" ]]; then
		echo PLAYER 1 WIN;
		exit 0;
	fi;
	if [[ ${arr[0]} = "O" && ${arr[1]} = "O" && ${arr[2]} = "O" ]]; then
                echo PLAYER 2 WIN;
		exit 0;
	fi;
	if [[ ${arr[0]} = "X" && ${arr[3]} = "X" && ${arr[6]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[0]} = "O" && ${arr[3]} = "O" && ${arr[6]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[0]} = "X" && ${arr[4]} = "X" && ${arr[8]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[0]} = "O" && ${arr[4]} = "O" && ${arr[8]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[1]} = "X" && ${arr[4]} = "X" && ${arr[7]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[1]} = "O" && ${arr[4]} = "O" && ${arr[7]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[2]} = "X" && ${arr[5]} = "X" && ${arr[8]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[2]} = "O" && ${arr[5]} = "O" && ${arr[8]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[2]} = "X" && ${arr[4]} = "X" && ${arr[6]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[2]} = "O" && ${arr[4]} = "O" && ${arr[6]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[3]} = "X" && ${arr[4]} = "X" && ${arr[5]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[3]} = "O" && ${arr[4]} = "O" && ${arr[5]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
	if [[ ${arr[6]} = "X" && ${arr[7]} = "X" && ${arr[8]} = "X" ]]; then
                echo PLAYER 1 WIN;
		 exit 0;
        fi;
        if [[ ${arr[6]} = "O" && ${arr[7]} = "O" && ${arr[8]} = "O" ]]; then
                echo PLAYER 2 WIN;
		 exit 0;
        fi;
done;
