#!/usr/bin/python
import re, sys, os, glob

arr = [];
try:
	os.chdir(sys.argv[1]);
	for fille in glob.glob("*.txt"):
		txt_file = open(fille, "r");
		for line in txt_file:
			if not re.match("[A-Z][a-z]{1,20} [A-Z][a-z]{1,20}", line) is None:
				arr.append(line);
		txt_file.close();
	arr.sort();
	sorted_file = open("result", "w+");
	for line1 in arr:
		sorted_file.write(line1);
except Exception as a:
    print("OOOOOPS!!! there are a problem with reading file");
except OSError:
	print("ERROR !!! wrong path"); 
except FileNotFoundError:
	print("ERROR!!! there are not any *.txt files")
else:
	sorted_file.close();
	for i in arr:
		print(i);
