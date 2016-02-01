#!/usr/bin/python

f=open('file.txt','r')
mystr=f.read()
f.close()

l=len(mystr)
nm=str("")
for i in range(l):
	if mystr[i]==':':
		i+=2
		while mystr[i]!=',':
			nm+=str(mystr[i])
			i=i+1
		nm=nm+'\n'
print nm
f=open('new.txt','w')
f.write(nm)
f.close
print "Created a new file with name list!"	
