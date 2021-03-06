#!/bin/bash

####
#kisat
####

arr=( [00]=" |" [01]=" |" [02]=" |" [10]=" |" [11]=" |" [12]=" |" [20]=" |" [21]=" |" [22]=" |" );
print_arr() {
    echo "
     0 1 2
     _ _ _
0   |${arr[00]}${arr[01]}${arr[02]}
1   |${arr[10]}${arr[11]}${arr[12]}
2   |${arr[20]}${arr[21]}${arr[22]}
     - - - 
"
}
print_win() {
    echo "$p wins !!!"
    exit 0
} 
condition_win() {
    if [[ ${arr[00]} = ${arr[$step]} && ${arr[01]} = ${arr[$step]} && ${arr[02]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[10]} = ${arr[$step]} && ${arr[11]} = ${arr[$step]} && ${arr[12]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[20]} = ${arr[$step]} && ${arr[21]} = ${arr[$step]} && ${arr[22]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[00]} = ${arr[$step]} && ${arr[10]} = ${arr[$step]} && ${arr[20]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[01]} = ${arr[$step]} && ${arr[11]} = ${arr[$step]} && ${arr[21]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[02]} = ${arr[$step]} && ${arr[12]} = ${arr[$step]} && ${arr[22]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[00]} = ${arr[$step]} && ${arr[11]} = ${arr[$step]} && ${arr[22]} = ${arr[$step]} ]]
	then print_win
    fi
    if [[ ${arr[02]} = ${arr[$step]} && ${arr[11]} = ${arr[$step]} && ${arr[20]} = ${arr[$step]} ]]
	then print_win
    fi
}
print_step() {
    echo "Incorrect step. Play again"
    exit 1
}
condition_step() {
    if [[ $step != 00 && $step != 01  && $step != 02 && $step != 10 && $step != 11 && $step != 12 && $step != 20 && $step != 21 && $step != 22 ]]
	then print_step
    fi
    if [[ ${arr[$step]} = "X|" || ${arr[$step]} = "O|" ]]
	then print_step
    fi
}
game() {
    echo $p
    read step
    condition_step
    echo $step $step_text > log
    arr[$step]=$step_text
    print_arr
    condition_win
}
cikl() {
    until  [ "`head -1 log | cut -c 4-5`" = $step_text ]
		    do
			sleep 5
		done
    tmp=`head -1 log | cut -c 1-2`
    arr[$tmp]=$step_text2
    print_arr
}
p1="Player1__X";
p2="Player2__O";
print_arr
if test -f log
    then
	echo $p2 > log
	p=$p2
	step_count=2
	step_text="O|"
	step_text2="X|"
    else
	echo $p1 > log
	p=$p1
	step_count=1
	step_text="X|"
	step_text2="O|"
	while :
	   do
	    sleep 5
	    if [ "`cat log`" = $p2 ]
		then sed -i -e '$d' log
		     break
	    fi
	done
fi
if [ $step_count -eq 1 ]
    then 
        echo "game1"
	    game
fi
#step_count=$[step_count+2]
 until  [ "`head -1 log | cut -c 4-5`" = $step_text ]
    do
	sleep 5
    done
echo "0"
while [ $step_count -le 9 ]
    do
	echo "1"
	echo "2"
	if [ $step_count -ne 1 ]
	    then
		if [ `expr $step_count % 2` -ne 0 ]
		    then
			cikl
			game
		    else
			cikl
			game
		fi
	fi
	step_count=$[step_count+1]
done
rm log
