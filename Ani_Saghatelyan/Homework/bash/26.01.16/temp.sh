#!/bin/bash

pathinprofile=`ls ~/.profile | grep "$0"`
pathinlogout=`ls ~/.bash_logout | grep "$0"`
 if [ -z   "$pathinprofile"]; then     
  "$0" >> ~/.profile
 elif [  -z  "$pathinlogout" ]; then
  "$0" >> ~/.bash_logout
 fi 
  if [ ! -z  "$pathinlogout" ]; then 

      rm -r  /home/ani/Desktop/tar/temp/*/  
  fi
