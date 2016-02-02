import os
files = os.listdir(os.getcwd())
files_txt = filter(lambda x: x.endswith('.txt'),files)
text = []
for i in files_txt:
	file = open(i,"r")
	text = text + file.readlines()
	file.close()

sort_file = open("sort_file.txt","w")
text.sort()
for i in text:
	sort_file.write(i)
sort_file.close()
