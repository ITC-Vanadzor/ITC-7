#!/usr/bin/python
import glob, os
dir=os.getcwd()
nameArray=[]
for file in glob.glob("*.txt"):

	File=open(file, 'r+')
	sortToFile = open("sortedFile.txt", "a")

	for line in File:
		nameArray.append(line)
nameArray.sort()
for lines in nameArray:
	sortToFile.write(lines)
sortToFile.close()
File.close()
