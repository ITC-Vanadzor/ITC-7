#!/bin/bash

declare arr=( 5 5 5 5 5 5 5 5 5  )
echo Enter user name for the first player
read p1 
echo Let"'"s begin $p1 player
  printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt

# prints the flag into the  file
perl -i -pe 's/.*/1 / if $.==1'  /home/ani/Desktop/flag.txt

 # changes the data from file   
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

if [[   ${arr[0]} = ${arr[1]}  &&  ${arr[0]} = ${arr[2]}   &&  ${arr[0]} -eq "X" ]]; then
  echo " Win"
  #array sent to file
    printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
   exit
elif [[  ${arr[3]} = ${arr[5]}  &&   ${arr[3]} = ${arr[4]}    &&   ${arr[5]} -eq "X" ]]; then
  echo  "Win  "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[   ${arr[6]} = ${arr[7]}  &&   ${arr[6]} = ${arr[8]}  &&   ${arr[6]}  -eq "X" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[0]} = ${arr[3]}  &&  ${arr[0]} = ${arr[6]}   &&   ${arr[0]} -eq "X" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[  ${arr[4]} = ${arr[1]}  &&  ${arr[0]} = ${arr[7]}  &&   ${arr[1]} -eq "X" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[5]} = ${arr[8]}  && ${arr[8]} = ${arr[2]}   &&    ${arr[2]} -eq "X" ]]; then
  echo "Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[0]} = ${arr[4]}  &&  ${arr[0]} = ${arr[8]} &&    ${arr[0]} -eq  "X" ]];  then
  echo "Win  "
 # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
elif [[ ${arr[4]} = ${arr[6]}  &&  ${arr[6]} =  ${arr[2]}  &&    ${arr[6]}  -eq "X" ]]; then
  echo " Win "
  # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
  exit
fi
}

count=0

 while  [[ "$count" -lt 5 ]] ; do
   flag=`head -1 /home/ani/Desktop/flag.txt | cut -c 1`
         while  [[ "$flag" -eq 0 ]]; do
            sleep 1
            flag=`head -1 /home/ani/Desktop/flag.txt | cut -c 1`
         done
       
        # changes the data from file   
        DataChanging  
        printarr
       echo   " $p1 Enter coordinates beetwen [0-2] "
       echo Enter x and y
       read x
       read  y
       condition
       limit
      
      # finds the position at the table
       coord=$((x*3 + y))
       
      # checking if has already written  in that position 
       while [[ "$arr[$coord]" == " O" ||  "$arr[$coord]" == " X"   ]]; do
          
          echo Wrong coordinates... Enter x and y
          read x
          read y
       done
      #puts the X in position
       arr[$coord]=X
      # the array sent to file
       printf "%s" "${arr[@]}" > /home/ani/Desktop/file.txt
     # sent the flag for another player
   perl -pi -e 's/1/0/g'  /home/ani/Desktop/flag.txt
     # increaments the count of game
       count=$(( $count + 1 ))
       printarr 
       condition
      
done
exit                                                                      
