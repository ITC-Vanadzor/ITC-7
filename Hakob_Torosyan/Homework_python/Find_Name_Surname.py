#!/usr/bin/python
import re
from os import listdir
f=open("sevagir.txt", "r+") #opening file
pattern = '^[A-Z][a-z]{3,}[\s][A-Z][a-z]{3,}yan$' #template for name and surname
for line in f:
	a = f.read()
	b = re.findall('pattern',a) #finding pattern in a 		and giving it to b
	f=open("sevagir2.txt","a+")
	f.write(b + '\n')	
	f.close()
f.close()
f=open("sevagir2.txt","r+")
c = f.read()
print c 
