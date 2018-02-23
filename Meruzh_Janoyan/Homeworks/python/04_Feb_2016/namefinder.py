#!/usr/bin/python
import glob, re, os, argparse

ps=argparse.ArgumentParser(description="Name finder PRO x64 ")
ps.add_argument('--path',dest='dirpath',type=str,help="Path of directory")
args=ps.parse_args()
if args.dirpath is None:
	my_path=os.getcwd()
else:
	my_path=args.dirpath


os.chdir(my_path)
names=[]

try:
	for fl in glob.glob('./*.txt'):
		tmp_fl= open(fl, 'r')
        	for ln in tmp_fl:
            		ln= ln.rstrip()
            		if re.match('^[A-Z][a-z]+\s[A-Z][a-z]+$', ln) is not  None :
                		names.append(ln)
		tmp_fl.close()
except IOError:
	print 'Can not open file. '
	exit(-1)


#os.remove('./res.txt') #qani vor 'w'-arden nor fayl e stexcum
fl = open('./res.log', 'w')
for dt in names:
	fl.write(dt+'\n')
fl.close()
print "OK"

