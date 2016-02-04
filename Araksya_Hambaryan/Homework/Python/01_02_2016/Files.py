#!/usr/bin/python
import glob, re, os

data=[]
for file_txt in glob.glob('./*.txt'):
    tmp = open(file_txt, 'r')
    for line_txt in tmp:
        line_data = line_txt.rstrip()
        count = line_data.find(' ')
        if i != -1 and not re.match('^[A-Z][a-z]+\s[A-Z][a-z]+$', line_data) is None :
            data.append(line_data)

    tmp.close()
data.sort()
data_file = open('./log', 'rw')
data_file.write(data)
data_file.close()

