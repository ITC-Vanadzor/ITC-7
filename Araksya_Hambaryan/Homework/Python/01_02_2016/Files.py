#!/usr/bin/python
from os import listdir
import glob

g = open('./log', 'w')
for d in glob.glob('*.txt'):
    tmp = open(d)
    a = tmp.read()
    tmp.close()
    g.write(a)
