#!/bin/bash
for i in {1..4};do
  while [ 1 ];do
  simvol=`head -1 xnol.txt`
  if [ $simvol == 0 ]
    then
      line1=`head -2 xnol.txt | tail -1`
      line2=`head -3 xnol.txt | tail -1`
      line3=`tail -1 xnol.txt`
      clear
      echo "   0 1 2 "
      echo "0 $line1"
      echo "1 $line2"
      echo "2 $line3"
      echo "Player2, Please enter your position <x y>" 
      read x y
      case $x in
	0) 
	   if [ $y == 0 ]
	     then
	       tmp=`head -2 xnol.txt | tail -1 | sed 's@\(.\)@\o@2'` > xnol.txt
	   elif [ $y == 1 ]
	     then
	       tmp=`head -2 xnol.txt | tail -1 | sed 's@\(.\)@\o@4'` > xnol.txt
	   elif [ $y == 2 ]
	     then
	       tmp=`head -2 xnol.txt | tail -1 | sed 's@\(.\)@\o@6'` > xnol.txt 
	   else
	       echo "false access"
	       exit 0
	   fi
	   echo x > xnol.txt
	   echo "$tmp" >> xnol.txt 
	   echo "$line2" >> xnol.txt
	   echo "$line3" >> xnol.txt
	   line1=`head -2 xnol.txt | tail -1`
	   line2=`head -3 xnol.txt | tail -1`
	   line3=`tail -1 xnol.txt`;;
	1) 
	   if [ $y == 0 ]
	     then
	       tmp=`head -3 xnol.txt | tail -1 | sed 's@\(.\)@\o@2'`
	   elif [ $y == 1 ]
	     then
	       tmp=`head -3 xnol.txt | tail -1 | sed 's@\(.\)@\o@4'`
	   elif [ $y == 2 ]
	     then
	       tmp=`head -3 xnol.txt | tail -1 | sed 's@\(.\)@\o@6'`
	   else
	       echo "false access"
	       exit 0
	   fi
	   echo x > xnol.txt
	   echo "$line1" >> xnol.txt
	   echo "$tmp" >> xnol.txt
 	   echo "$line3" >> xnol.txt
	   line1=`head -1 xnol.txt`
           line2=`head -2 xnol.txt | tail -1`
           line3=`tail -1 xnol.txt`;;
	2) 
	   if [ $y == 0 ]
	     then
	       tmp=`tail -1 xnol.txt | sed 's@\(.\)@\o@2'`
	   elif [ $y == 1 ]
	     then
	       tmp=`tail -1 xnol.txt | sed 's@\(.\)@\o@4'`
	   elif [ $y == 2 ]
	     then 
	       tmp=`tail -1 xnol.txt | sed 's@\(.\)@\o@6'`
	   else 
	       echo "false access"
	       exit 0
	   fi
	   echo x > xnol.txt
	   echo "$line1" >> xnol.txt
           echo "$line2" >> xnol.txt
	   echo "$tmp" >> xnol.txt
	   line1=`head -1 xnol.txt`
           line2=`head -2 xnol.txt | tail -1`
           line3=`tail -1 xnol.txt`;;
	*) 
	   echo "false access"
	   exit 0;;
      esac
      clear
      break
    else
    clear
    echo "waiting first player"
    sleep 3
  fi
  done
done;
