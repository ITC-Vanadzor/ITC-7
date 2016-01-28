#!/bin/bash
declare -a arr_dir
declare -a arr_reg
dir=0
reg=0
for i in `ls`; do
	if [ -f $i ]; then 
	    arr_reg[$reg]=$i;
	    ((reg++))
        fi;
done;
for j in `ls -d */`; do
	   arr_dir[$dir]=$j
	    ((dir++));
done;
k=1;
x=0;
swap ()
{
   declare -a local arr;
   arr[0]=$1;
   $1=$2;
   $2=$arr[0];
}
while [ $k -lt ${#arr_reg[*]} ]; do
	if [ $k >= 0 ]; then
	  while [ $x -lt $k]; do
	    if [ `stat -c%s ${arr_reg[$k]}` > `stat -c%s ${arr_reg[$x]}` ]; then	  	local a=$k;
		while [ $a >= $x ]; do
		      swap ( $arr_reg[$a] $arr_reg[$x]);
		      ((a--));
		done;
            fi;
	    ((x++));
           done;
         fi;
	((k++));
done;
n=1;
b=0;
while [ $n -lt ${#arr_dir[*]} ]; do
        if [ $n >= 0 ]; then
          while [ $b -lt $n]; do
            if [ `stat -c%s ${arr_dir[$n]}` > `stat -c%s ${arr_dir[$b]}` ]; then                a=$n;
                while [ $a >= $b ]; do
                      swap ( $arr_dir[$a] $arr_dir[$b]);
                      ((a--));
                done;
            fi;
  	    ((b++));
	   done;
	 fi;
	((n++));
done;
v=0;
while [ $v -lt ${#arr_reg[*]} ]; do
       echo ${arr_reg[$k]};
       ((v++))
    done;
c=0;
while [ $c -lt ${#arr_dir[*]} ]; do
    echo ${arr_dir[$c]}
    ((c++))
    done;
