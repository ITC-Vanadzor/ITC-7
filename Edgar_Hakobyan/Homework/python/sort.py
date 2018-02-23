import re
import os
files = os.listdir(os.getcwd())
files_txt = filter(lambda x: x.endswith('.txt'),files)
if files_txt:
    sort_list = []
    shablon = re.compile("[A-Z][a-z]* [A-Z][a-z]*\n")
    for i in files_txt:
        if i == 'sort_file.txt':
            os.remove('sort_file.txt')
        else:
            try:
                file = open(i,"r")
            except IOError:
                print "chem karox bacel ays fayl@",i
            else:
                for line in file:
                    if not shablon.match(line) is None:
                        sort_list.append(line)
                file.close()
    sort_file = open("sort_file.txt","w")
    sort_list.sort()
    for i in sort_list:
        sort_file.write(i)
    sort_file.close()
else:
    print "directoriayum .txt fayl chka"

