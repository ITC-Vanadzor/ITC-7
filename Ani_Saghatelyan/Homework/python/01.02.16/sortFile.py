#!/usr/bin/python
import glob, os
import re

dir=os.getcwd()
nameArray=[]

for file in glob.glob("*.txt"):
	try:
		File=open(file, 'r+')
		sortToFile = open("sortedFile.txt", "a")
	except FileNotFoundError:
		print "File isnt exist"

	for line in File:
                print line
		expression=re.compile(r'^[A-Z][a-z]+\t[A-Z][a-z]+')
		IsName=expression.match(line)
		if IsName:
			nameArray.append(line)
nameArray.sort()
for lines in nameArray:
	sortToFile.write(lines)
sortToFile.close()
File.close()
