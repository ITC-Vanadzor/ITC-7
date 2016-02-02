#!/usr/bin/python
arr = ['k','hh','%','$','lll',',','ghgty','^','jkegfkugf','!','#'];
j = 0;
for i in range(len(arr)):
    if arr[j] == '%' or arr[j] == '$' or arr[j] == ',' or arr[j] == '!' or arr[j] == '#' or arr[j] == '^':
	del(arr[j]);
	j -= 1;
j += 1;
print(arr);
