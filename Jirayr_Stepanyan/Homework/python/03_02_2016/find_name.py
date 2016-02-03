#!/usr/bin/python
import re, sys, os, glob

arr = [];
try:
	os.chdir(sys.argv[1]);
	for fille in glob.glob("*.txt"):
		txt_file = open(fille, "r+");
		name_var = re.findall("[A-Z]{1}[a-z]{1,15} [A-Z]{1}[a-z]{1,20}", txt_file);
		h = open("rrrrr" "r+");
		h.write(name_var);
		for line in h:
			arr.append(line);
		txt_file.close();
		h.close();
	arr.sort();
	sorted_file = open("result", "w+");
	for line1 in arr:
		sorted_file.write(line1);
except IOError:
    print("OOOOOPS!!! there are a problem with reading file");
except OSError:
	print("ERROR !!! wrong path"); 
else:
	sorted_file.close();
	for i in arr:
		print(i);
