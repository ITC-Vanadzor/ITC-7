#! /usr/bin/python
import glob
import os 
import os.path
import re

list=[]
os.chdir(".")
for file in glob.glob("*.txt"):
	try:
		with open(file, "r") as f:
			for line in f:
				if (re.match('[A-Z][a-z]+ [A-Z][a-z]+', line[:-1])):
					list.append(line[:-1])
				
	except IOError:
		print "The file  does not exist. IO ERROR"
		break
	
list.sort()
if os.path.isfile('outputFilie'):
	os.remove('outputFile')
output = open('outputFile', 'a')
# write in output file
for x in sorted(list):
	output.write(x+"\n")		 
