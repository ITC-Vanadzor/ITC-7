def sum(m,n):
	return m+n
def hanum(m,n):
	return m-n
def bajanum(m,n):
	if n==0:
		print("ERROR,try again")
	else :
		return m/n
def bazmapatkum(m,n):
	return m*n
try:
	k=int(input('Nermuceq arajin tivy: '))
	g=int(input('Nermuceq erkrord tivy: '))
	x=int(input("1)Gumarum" "2)Hanum" "3)Bajanum" "4)Bazmapatkum  ",))
except ValueError:
	print("Number,Please")
if x == 1:
	print sum(k,g)	
elif x == 2:
	print hanum(k,g)
elif x == 3:
	print bajanum(k,g)
elif x == 4:
	print bazmapatkum(k,g)
else:
	except ValueError('unknown token %s' % x):
		print("ERROR!!!)
