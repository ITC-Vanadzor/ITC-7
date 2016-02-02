#!/usr/bin/python
import glob, os
os.chdir("/home/ani/Desktop/python")
for file in glob.glob("*.txt"):

	File=open(file, 'r+')
	sortToFile = open("/home/ani/Desktop/sortedFile.txt", "w")

	for line in sorted(File):
   		 sortToFile.write(line)

File.close()
