#!/usr/bin/python
import math

class ellipse:
    def __init__(self, x, y):
## Elipsi metc arancq
	self.a = x
## Elipsi poqr arancq
	self.b = y
## Elipsi fokusayin heravorutyan kes
	self.c = (self.a**2 - self.b**2) ** 0.5
## Elipsi excentrisitet
	self.e = self.c / self.a
## Elipsi Sexmman gorcakic
	self.k = self.b / self.a
## Elipsi paragic
	self.L = math.pi * self.a * self.b
## Elipsi makeres
	self.S = math.pi *(self.a + self.b)

    def stugum1(self, x_ket, y_ket):
## stugum @st elipsi kanonakan havasarman
	if (x_ket**2)/(self.a**2) + (y_ket**2)/(self.b**2) < 1:
	    self.text1 = "Exanak 1. Trvac ket@ gtnvum e elipsi nersum"
	if (x_ket**2)/(self.a**2) + (y_ket**2)/(self.b**2) == 1:
	    self.text1 = "Exanak 1. Trvac ket@ gtnvum e elipsi vra"
	if (x_ket**2)/(self.a**2) + (y_ket**2)/(self.b**2) > 1:
	    self.text1 = "Exanak 1. Trvac ket@ gtnvum e elipsic durs"
    def stugum2(self, x_ket, y_ket):
##stugum @st elipsi sahmanman
	self__r1 = (pow(x_ket + self.c, 2) + pow(y_ket, 2))**0.5
	self__r2 = (pow(x_ket - self.c, 2) + pow(y_ket, 2))**0.5
	if self__r1 + self__r2 < 2*self.a:
	    self.text2 = "Exanak 2 . Trvac ket@ gtnvum e elipsi nersum"
	if self__r1 + self__r2 == 2*self.a:
	    self.text2 = "Exanak 2 . Trvac ket@ gtnvum e elipsi vra"
	if self__r1 + self__r2 > 2*self.a:
	    self.text2 = "Exanak 2 . Trvac ket@ gtnvum e elipsic durs"

print "Nermuceq elipsi arancnqeri chaper@"
metc_arancq = input("metc arancq` ")
poqr_arancq = input("poqr arancq` ")
if metc_arancq < poqr_arancq:
    print "porceq krkin"
    exit()
p = ellipse(metc_arancq, poqr_arancq)
x = input("x= ")
y = input("y= ")
p.stugum1(x, y)
p.stugum2(x, y)
print p.text1 
print p.text2
