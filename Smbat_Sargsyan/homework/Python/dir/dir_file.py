import re
from os import listdir
class FileNotFound(Exception):
	def __init__(self):
		print("File not found")
try:
	files = listdir(".")
	summry=[]
	mytxt = filter(lambda x: x.endswith('.txt'), files)
	if mytxt is None:
		raise FileNotFound()
	for i in range(0,len(mytxt)):
		f = open(mytxt[i],'r')
		for name in f:
			if  not re.match('^[A-Z][a-z]+\s[A-Z][a-z]+\n$', name) is None :
				summry.append(name)
	summry.sort()
	summry_file = open('./summry', 'w')
	for i in summry:
		summry_file.write(i)
	summry_file.close()
except FileNotFound as ex:
	print("File not found")
except IOError:
	print("Can't open file")	
