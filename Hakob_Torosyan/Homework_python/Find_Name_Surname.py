#!/usr/bin/python
import re
from os import listdir
try:
	f=open("sevagir.txt", "r+") #opening file
except IOError:
	print " ERROR "
pattern = '^[A-Z][a-z]+ | | [A-Z][a-z]+yan $' #template for name and surname
a = f.read() # taking text from f and give it to a
b = re.findall('pattern',a) #finding pattern in a and giving it to b
print (b) #printing names and surnames
 
