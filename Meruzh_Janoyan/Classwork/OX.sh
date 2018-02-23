#!/bin/bash

data1=("." "." ".")
data2=("." "." ".")
data3=("." "." ".")

counter=1

#    if [ ${data1} =="XXX"  ]


printmatrix(){
    clear
echo "P1: X  P2: O"

    echo""
    echo "$(tput setaf 2)   0   1   2 $(tput sgr 0)"
    echo "$(tput setaf 2)0 "$(tput sgr 0) ${data1[0]} '|' ${data1[1]} '|' ${data1[2]} 
    echo "$(tput setaf 2)1  $(tput sgr 0)"${data2[0]} '|' ${data2[1]} '|' ${data2[2]} 
    echo "$(tput setaf 2)2  $(tput sgr 0)"${data3[0]} '|' ${data3[1]} '|' ${data3[2]} 
    echo""
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
                fi
                ;;
            1)
                 if [ "${data2[$2]}" == "." ]
                then
                    data2[$2]=$current
                    tmp=$current
                    current=$now
                    now=$tmp
                fi

                ;;
            2)
                 if [ "${data3[$2]}" == "." ]
                then
                    data3[$2]=$current
                    tmp=$current
                    current=$now
                    now=$tmp
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
        echo "GV please input X & Y:"
        read a b
        inp  $a $b 
        printmatrix
    else
        
        echo "JAN please input X & Y:"
        read a b
        inp $a $b
        printmatrix
    fi
 

}


while [ $counter  ]
do
    play
done

