#!/bin/bash
#We need to have 2 parameters for coordinates
arr=("-" "-" "-" "-" "-" "-" "-" "-" "-")
echo ${arr[0]} "|" ${arr[1]} "|" ${arr[2]}
echo ${arr[3]} "|" ${arr[4]} "|" ${arr[5]}
echo ${arr[6]} "|" ${arr[7]} "|" ${arr[8]}
echo "!!!!!THE GAME IS BEGAN APER!!!!"
flag="1"

for i in 1 2 3 4 5 6 7 8 9 
do

read row
read col

if [ "$flag" = "0" ]; then
simbol="0"
flag="1"

elif [ "$flag" = "1" ]; then
simbol="x"
flag="0"
fi

#echo $row
#echo $col 

case $row in
    0)
   if [ "$col" = "0" ]; then
       arr[0]=$simbol
   
   elif [ "$col" = "1" ]; then 
       arr[1]=$simbol 
   
   elif [ "$col" = "2" ]; then
       arr[2]=$simbol
   fi
    ;;

    1)
   if [ $col = "0" ]; then
       arr[3]=$simbol 

   elif [ $col = "1" ]; then
       arr[4]=$simbol

   elif [ $col = "2" ]; then
       arr[5]=$simbol
   fi
    ;;

    2)
   if [ $col = "0" ]; then
       arr[6]=$simbol

   elif [ $col = "1" ]; then
       arr[7]=$simbol

   elif [ $col = "2" ]; then
       arr[8]=$simbol
   fi
    ;;
    *)
    ;;
esac

echo ${arr[0]} "|" ${arr[1]} "|" ${arr[2]}
echo ${arr[3]} "|" ${arr[4]} "|" ${arr[5]}
echo ${arr[6]} "|" ${arr[7]} "|" ${arr[8]}
if [[ ${arr[0]} == ${arr[1]} == ${arr[2]} == "0" or ${arr[3]} == ${arr[4]} == ${arr[5]} == "0" or ${arr[6]} == ${arr[7]} == ${arr[8]} == "0" or ${arr[0]} == ${arr[3]} == ${arr[6]} == "0" or ${arr[1]} == ${arr[4]} == ${arr[7]} == "0" or ${arr[2]} == ${arr[5]} == ${arr[8]} == "0" or ${arr[0]} == ${arr[4]} == ${arr[8]} == "0" or ${arr[2]} == ${arr[4]} == ${arr[6]} == "0" ]]; then
echo " WIN SECOND PLAYER!!!!!!ARI CHAKATD PACHEM GAZZAN!!! "

elif
[[ ${arr[0]} == ${arr[1]} == ${arr[2]} == "x" or ${arr[3]} == ${arr[4]} == ${arr[5]} == "x" or ${arr[6]} == ${arr[7]} == ${arr[8]} == "x" or ${arr[0]} == ${arr[3]} == ${arr[6]} == "x" or ${arr[1]} == ${arr[4]} == ${arr[7]} == "x" or ${arr[2]} == ${arr[5]} == ${arr[8]} == "x" or ${arr[0]} == ${arr[4]} == ${arr[8]} == "x" or ${arr[2]} == ${arr[4]} == ${arr[6]} == "x" ]]; then
echo " WIN FIRST PLAYER!!!!APRES NXSHUN JAN!!! " 
fi
exit 0
done
exit 0
