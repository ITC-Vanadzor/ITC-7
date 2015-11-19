#include <iostream>
void equals(int&, int&);
void metc(int&, int&);
void search(void (*)(int&,int&),int&);
 int main () {
 	int a[5];
 	for (int i=0; i< 5; ++i) {
 		std::cout << "a[" << i << "]= ";
 		std::cin >> a[i];
 	}
 	bool fquit=false;
 	int x;
 	void (*compare) (int&, int&);
 	int choice;
 	while (fquit==false) {
 	std::cout <<"(0) Quit (1) equals (2) metc";
 	std::cin >> choice;
 	switch (choice)
 	{
 		case 1: compare = equals; break;
 		case 2: compare = metc; break;
 		default : fquit = true; break;
 	}
 	if (fquit) {
 		break;
 	}
 	search(compare,a,5);
 }
 	return 0;
 }
 void equals(int a[], int& x){
 	for (int i=0; i<5; ++i) {
 		if (a[i]==x) {
 			std::cout << i << std::endl;
 			break;
 		}
 	}
 }
 void metc(int a[], int& x){
 	for (int i=0; i<5; ++i) {
 		if (a[i]>x) {
 			std::cout << i << std::endl;
 			break;
 		}
 	}
 }
void search(void (*compare)(int&,int&),int& x)
{
  int a[5];
  std::cout << "x= " << x;
  compare(a,x);
  std::cout << "x= " << x;
}
  
