class ellipse:
	def __init__(self,x,y):
		self.a = x
		self.b = y
	def havasarum(self,x1,y1):
		return (x1**2)/(self.a**2)+(y1**2)/(self.b**2)
	def stugum(self,x1,y1):
		if self.havasarum(x1,y1) < 1:
			print("kety patkaanum e elipsin")
		if self.havasarum(x1,y1) == 1:
			print("kety elipsi vra e")
		if self.havasarum(x1,y1) > 1:
			print("kety chi patkanum")
x=input("x= ")
y=input("y= ")
arancq_mec=input("mec arancq= ")
arancq_poqr=input("poqr arancq= ")
while (arancq_mec <= 0) or (arancq_poqr <= 0):
	print("krkin porcir")
	exit
Object=ellipse(arancq_mec,arancq_poqr)
Object.stugum(x, y)
