#! /usr/bin/python
import glob,os

list=[]
os.chdir(".")


for file in glob.glob("*.txt"):
	try:
		with open(file, "r") as f:
			for line in f:
				list.append(line[:-1])
			check = 'true'
				
	except IOError:
		print "The file  does not exist. IO ERROR"

if check: 
	print "\nNot sorted version"
	print "===================="
	for x in list:
		print x
	print "\nSorted version"
	print "===================="
	list.sort()
	for x in sorted(list):
		print x

