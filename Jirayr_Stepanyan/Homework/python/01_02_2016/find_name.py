#!/usr/bin/python
from os import listdir
anun = open('anunt.txt', 'w');
files = listdir(".")
mytxt = filter(lambda x: x.endswith('.txt'), files)
for i in mytxt:
    if i.endswith == '.txt':
        fille = open('i');
	for line in fille:
	    if line == "Anush Grigoryan" or line == 'Abgar Stepanyan' or line == 'Artur Gevorgyan':
		anun.write(line + '\n');
	fille.close();
pos = 0;
line = anun.readlines();
anun.seek(pos);
sort_text = anun(line);
anun.close();
