#!/bin/bash

declare arr=( 5 5 5 5 5 5 5 5 5  )

#     printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
   
 DataChanging ()
 {
     
           for ((i=1 ; i<10; ++i)); do
             line=`head -1  /home/ani/Desktop/file.txt | cut -c $i`
              arr[$(($i-1))]=$line
           done
 }
#prints the table of game
printarr () 
 {
	echo ' ' ${arr[0]} '|' ${arr[1]} '|' ${arr[2]} 
	echo ' ' ${arr[3]} '|' ${arr[4]} '|' ${arr[5]} 
	echo ' ' ${arr[6]} '|' ${arr[7]} '|' ${arr[8]} 
        echo ' '
        
 }
# checks if the entered coordinates  more than 2 and less than 0 
limit ()

 {
 while [[  "$x" <  0  || "$x" > 2  || "$y" < 0 || "$y" > 2 ]]; do
          echo "Enter coordinates beetwen [0-2] "
          echo Enter x and y
          read x
          read  y
      done
 }


# checks the conditions of win
condition () 
{

if [[   ${arr[0]} = ${arr[1]}  &&  ${arr[0]} = ${arr[2]}   &&  ${arr[0]} -eq "O" ]]; then
  echo " Win"
  #array sent to file
    printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
    # sent the 1 flag for another player
        perl -pi -e 's/0/1/g'  /home/ani/Desktop/flag.txt
   exit
elif [[  ${arr[3]} = ${arr[5]}  &&   ${arr[3]} = ${arr[4]}    &&   ${arr[5]} -eq "O" ]]; then
  echo  "Win  "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  # sent the 1 flag for another player
        perl -pi -e 's/0/1/g'  /home/ani/Desktop/flag.txt 
exit
elif [[   ${arr[6]} = ${arr[7]}  &&   ${arr[6]} = ${arr[8]}  &&   ${arr[6]}  -eq "O" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[0]} = ${arr[3]}  &&  ${arr[0]} = ${arr[6]}   &&   ${arr[0]} -eq "O" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[4]} = ${arr[1]}  &&  ${arr[0]} = ${arr[7]}  &&   ${arr[1]} -eq "O"  ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[5]} = ${arr[8]}  && ${arr[8]} = ${arr[2]}   &&    ${arr[2]} -eq "rO" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[0]} = ${arr[4]}  &&  ${arr[0]} = ${arr[8]} &&    ${arr[0]} -eq  "O" ]];  then
  echo "Win  "
 # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[4]} = ${arr[6]}  &&  ${arr[6]} =  ${arr[2]}  &&    ${arr[6]}  -eq "O" ]]; then
  echo " Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[   ${arr[0]} = ${arr[1]}  &&  ${arr[0]} = ${arr[2]}   &&  ${arr[0]} -eq "X" ]]; then
  echo " Game over"
  #array sent to file
    printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
   exit
elif [[  ${arr[3]} = ${arr[5]}  &&   ${arr[3]} = ${arr[4]}    &&   ${arr[5]} -eq "X" ]]; then
   echo " Game over" 
     # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[   ${arr[6]} = ${arr[7]}  &&   ${arr[6]} = ${arr[8]}  &&   ${arr[6]}  -eq "X" ]]; then
  echo "Game over"
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[0]} = ${arr[3]}  &&  ${arr[0]} = ${arr[6]}   &&   ${arr[0]} -eq "X" ]]; then
  echo "Game over "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[4]} = ${arr[1]}  &&  ${arr[0]} = ${arr[7]}  &&   ${arr[1]} -eq "X" ]]; then
  echo "Game over"
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[5]} = ${arr[8]}  && ${arr[8]} = ${arr[2]}   &&    ${arr[2]} -eq "X" ]]; then
  echo "Game over"
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[0]} = ${arr[4]}  &&  ${arr[0]} = ${arr[8]} &&    ${arr[0]} -eq  "X" ]];  then
  echo "Game over "
 # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[4]} = ${arr[6]}  &&  ${arr[6]} =  ${arr[2]}  &&    ${arr[6]}  -eq "X" ]]; then
  echo " Game over "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
fi
}

echo Enter user name for the  second player
read p2
echo Begin  another player
count=0
printarr

while  [[ "$count" -lt 5 ]] ; do
       condition
       flag=`head -1 /home/ani/Desktop/flag.txt | cut -c 1`
         while  [[ "$flag" -eq 1 ]]; do

             sleep 1
             flag=`head -1 /home/ani/Desktop/flag.txt | cut -c 1`
        done
   
 # changes the data from file   
 sleep 1  
 condition 
DataChanging  
  printarr
       echo   " $p1 Enter coordinates beetwen [0-2] "
       echo Enter x and y
       read x
       read y 
     condition
       limit
      
      # finds the position at the table
       coord=$((x*3 + y))
      
       # checking if has already written  in that position 
       while [[ "$arr[$coord]" == "O" ||  "$arr[$coord]" == "X"   ]]; do
          echo  Wrong coordinates...Enter x and y
          read x
          read y
       done
      # puts the X in position
       arr[$coord]=O
       condition
      # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
       # sent the 1 flag for another player
        perl -pi -e 's/0/1/g'  /home/ani/Desktop/flag.txt
     # increaments the count of game
       count=$(( $count + 1 ))
       printarr 
       condition
      
done
exit                                                                     
