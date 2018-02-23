#!/bin/bash
me=$1
if [ $me == "X" ]; 
then
	you='O'
else
	you='X'
fi


fl=`ls | grep gamefile`
if [ -z $fl ] 
	then echo "O">gamefile
	else echo "X">gamefile
fi

data1=("." "." ".")
data2=("." "." ".")
data3=("." "." ".")

nowiner=-1

iswin(){
	if [[ ${data1[0]}  = "X" && ${data1[1]} = "X" && ${data1[2]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[0]}  = "O" && ${data1[1]} = "O" && ${data1[2]} = "O" ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data2[0]}  = "X" && ${data2[1]} = "X" && ${data2[2]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data2[0]}  = "O" && ${data2[1]} = "O" && ${data2[2]} = "O" ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data3[0]}  = "X" && ${data3[1]} = "X" && ${data3[2]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data3[0]}  = "O" && ${data3[1]} = "O" && ${data3[2]} = "O" ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data1[0]}  = "X" && ${data2[0]} = "X" && ${data3[0]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[0]}  = "O" && ${data2[0]} = "O" && ${data3[0]} = "O" ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data1[1]}  = "X" && ${data2[1]} = "X" && ${data3[1]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[1]}  = "O" && ${data2[1]} = "O" && ${data3[1]} = "O"  ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data1[2]}  = "X" && ${data2[2]} = "X" && ${data3[2]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[2]}  = "O" && ${data2[2]} = "O" && ${data3[2]} = "O" ]]; 
		then 
			nowiner=2
	elif [[ ${data1[0]}  = "X" && ${data2[1]} = "X" && ${data3[2]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[0]}  = "O" && ${data2[1]} = "O" && ${data3[2]} = "O" ]]; 
		then 
			nowiner=2
			return
	elif [[ ${data1[2]}  = "X" && ${data2[1]} = "X" && ${data3[0]} = "X" ]]; 
		then 
			nowiner=1
			return
	elif [[ ${data1[2]}  = "O" && ${data2[1]} = "O" && ${data3[0]} = "O" ]]; 
		then 
			nowiner=2
			return
	fi
	nowiner=-1
}


printmatrix(){
    clear
echo "Player1: X  Player2: O" 

    echo""
    echo "$(tput setaf 2)   0   1   2 $(tput sgr 0)"
    echo "$(tput setaf 2)0 "$(tput sgr 0) ${data1[0]} '|' ${data1[1]} '|' ${data1[2]} 
    echo "$(tput setaf 2)1  $(tput sgr 0)"${data2[0]} '|' ${data2[1]} '|' ${data2[2]} 
    echo "$(tput setaf 2)2  $(tput sgr 0)"${data3[0]} '|' ${data3[1]} '|' ${data3[2]} 
    echo""

    echo ${data1[0]}' '${data1[1]}' '${data1[2]}' '${data2[0]}' '${data2[1]}' '${data2[2]}' '${data3[0]}' '${data3[1]}' '${data3[2]}>matrix
}


printmatrix
current="X"
now="O"

inp(){

    case $1 in
            0)
                if [ "${data1[$2]}" == "." ]
                then
                    data1[$2]=$current
                    tmp=$current
                    current=$now
                    now=$tmp
		    printmatrix
		    echo $current>gamefile
                fi
                ;;
            1)
                 if [ "${data2[$2]}" == "." ]
                then
                    data2[$2]=$current
                    tmp=$current
                    current=$now
                    now=$tmp
		    printmatrix
		    echo $current>gamefile
                fi

                ;;
            2)
                 if [ "${data3[$2]}" == "." ]
                then
                    data3[$2]=$current
                    tmp=$current
                    current=$now
                    now=$tmp
		    printmatrix
		    echo $current>gamefile
                fi

                ;;
            *)
                return
                ;;
            esac
        }

play(){
if [ "$current" ==  "X" ]
    then
        echo "Player1 please input X & Y:"
        read a b
        inp  $a $b 
        printmatrix
    else
        
        echo "Player2 please input X & Y:"
        read a b
        inp $a $b
        printmatrix
    fi
 

}
waiting (){
	echo please wait..
	while [ 1 ]
	do
	xo=`cat gamefile | head -1`
	if [[ "$me" = "$xo"  ]]; 
		then
		current=$me
		now=$you
		data1[0]=`cat matrix | cut -c 1`
		data1[1]=`cat matrix | cut -c 3`
		data1[2]=`cat matrix | cut -c 5`
		data2[0]=`cat matrix | cut -c 7`
		data2[1]=`cat matrix | cut -c 9`
		data2[2]=`cat matrix | cut -c 11`
		data3[0]=`cat matrix | cut -c 13`
		data3[1]=`cat matrix | cut -c 15`
		data3[2]=`cat matrix | cut -c 17`
		 break 
	fi

	done

}

while [ $nowiner == "-1" ]
do
    waiting
    printmatrix
    iswin
    if [ $nowiner -ne "-1" ]; 
	then 
		break 
    fi
    play
    iswin
done
printmatrix
echo "$(tput setaf 4)GAME OVER! PLAYER $nowiner WIN!  $(tput sgr 0)" 
