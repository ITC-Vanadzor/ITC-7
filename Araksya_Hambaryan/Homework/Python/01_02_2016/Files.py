#!/usr/bin/python
import glob, re, os

data=[]
path = raw_input('dir path")
try:
    if os.getcwd() != path :
        os.chcwd(path)
except FileNotFoundError:
    print 'path not found'

for file_txt in glob.glob('./*.txt'):
    with open(file_txt, 'r') as tmp:
        for line_txt in tmp:
            line_data = line_txt.rstrip()
            count = line_data.find(' ')
            if count != -1 and not re.match('^[A-Z][a-z]+\s[A-Z][a-z]+$', line_data) is None :
                data.append(line_data)

data.sort()
data_file = open('./log', 'rw')
data_file.write(data)
data_file.close()

