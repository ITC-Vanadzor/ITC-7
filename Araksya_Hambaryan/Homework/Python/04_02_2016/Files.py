#!/usr/bin/python
import glob, re, os

data=[]
#path = raw_input('dir path')
try:
#    if os.getcwd() != path :
#        os.chdir(path)
    for file_txt in glob.glob('./*.txt'):
	with open(file_txt, 'r') as tmp:
	    for line_txt in tmp:
		count = line_txt.find(' ')
		if count != -1 and not re.match('^[A-Z][a-z]+\s[A-Z][a-z]+\n$', line_txt) is None :
		    data.append(line_txt)
    data_file = open('./log', 'w')
    for i in data:
	data_file.write(i)
    data_file.close()

except FileNotFoundError:
    print 'path not found'
except IOError:
    print 'cannot open file'
