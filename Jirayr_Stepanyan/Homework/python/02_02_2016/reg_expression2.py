#!/usr/bin/python
arr = raw_input("please enter any symbols\n");
if arr.isalpha():
	print "there are not symbols";
else:
	new_arr = "";
    for i in arr:
        if i.isalpha():
			new_arr = new_arr + i;
print new_arr;
