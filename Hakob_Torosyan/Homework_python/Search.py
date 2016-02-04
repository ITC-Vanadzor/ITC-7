#!/usr/bin/python
import re
from os import listdir
try:
	f=open("sevagir.txt", "r+")
except IOError:
	print " ERROR "
i=0;
line1=0
line2=0
line3=0
line4=0
for line in f:
    if i==0:
        line1=line
    if i==1:
        line2=line
    if i==2:
        line3=line
    if i==3:
	line4=line
    i+=1
pattern1 = '^Program Name: | | [A-Z] [a-z]*+ $' 
pattern2 = '^Version: | | [\d\.]+ $'
pattern3 = '^Programmer: | | [A-Z] [a-z]* | | [A-Z] [a-z]*yan $'
pattern4 = '^Company: | | [A-Z]* $' 
if   not re.match(pattern1,line1) is None and not re.match(pattern2,line2) is None and not re.match(pattern3,line3) is None and not re.match(pattern4,line4) is None:
	print "We have right template: "

 


