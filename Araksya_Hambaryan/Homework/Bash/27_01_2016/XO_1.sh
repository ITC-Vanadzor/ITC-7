#!/bin/bash
p1="Player1__X";
p2="Player2__O";
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
 
print_arr
i=1
while [ $i -le 9 ]
    do
	if [ `expr $i % 2` -eq 0 ]
	    then 
		echo $p1
		p=$p1
		read step
		condition_step
		arr[$step]="X|"
		print_arr
		condition_win
	    else 
		echo $p2
		p=$p2
		read step
		condition_step
		arr[$step]="O|"
		print_arr
		condition_win
	fi
	((++i))
done

