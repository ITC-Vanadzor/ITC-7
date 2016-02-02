#! /usr/bin/python
import glob,os

list=[]
os.chdir(".")
for file in glob.glob("*.txt"):
	with open(file, "r") as f:
		for line in f:
			list.append(line[:-1])
print "\nNot sorted version"
print "===================="
for x in list:
	print x
print "\nSorted version"
print "===================="
list.sort()
for x in sorted(list):
	print x

