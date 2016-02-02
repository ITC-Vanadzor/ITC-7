#!/usr/bin/python
class ellipse:
	def __init__(self, x, y):
		self.m_arq = x;
		self.p_arq = y;
	def stugum(self, new_x, new_y):
		if ((pow(new_x, 2)) / (pow(self.m_arq, 2)) + (pow(new_y, 2)) / (pow(sel.p_arq, 2))) < 1:
			self.my_print = "ket@ gtnvum e ellipsi mej";
		if ((pow(new_x, 2)) / (pow(self.m_arq, 2)) + (pow(new_y, 2)) / (pow(sel.p_arq, 2))) == 1:
            self.my_print = "ket@ gtnvum e ellipsi vra";
		if ((pow(new_x, 2)) / (pow(self.m_arq, 2)) + (pow(new_y, 2)) / (pow(sel.p_arq, 2))) > 1:
            self.my_print = "ket@ gtnvum e ellipsic durs";

mec_arq = input("mec arancq = ");
pqr_arq = input("poqr arancq = ");
ob = ellipse(mec_arq, pqr_arq);
x = input("x = ");
y = input("y = ");
ob.stugum(x, y);
print ob.my_print;
