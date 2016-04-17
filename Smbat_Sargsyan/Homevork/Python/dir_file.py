from os import listdir

files = listdir(".")

mytxt = filter(lambda x: x.endswith('.txt'), files)
for i in range(0,len(mytxt)):
	f = open(mytxt[i])
	a=f.read()
	print f.read()
	sortlist = [a]
	sortlist.sort()
	f = open('file2.txt','w')
	f.write(a)
	f.close()
print mytxt
