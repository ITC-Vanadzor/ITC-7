#!/usr/bin/python
count1 = 0
count2 = 0
count3 = 0
count4 = 0
strng = raw_input("Insert string and 7 for ending of string: ")
loop = 0
while strng[loop] != '7':
	if strng[loop] == '@':
		count1 = count1 + 1
	if strng[loop] == '$':
		count2 = count2 + 1
	if strng[loop] == '%':
		count3 = count3 + 1
	if strng[loop] == '?':
		count4 = count4 + 1
	loop = loop + 1
print ("In string we have  ")
print (count1)
print (" @ symbols\n")
print ("In string we have  ")
print (count2)
print (" $ symbols\n")
print ("In string we have  ")
print (count3)
print (" % symbols\n")
print ("In string we have  ")
print (count4)
print (" ? symbols\n")

	

		 
		
