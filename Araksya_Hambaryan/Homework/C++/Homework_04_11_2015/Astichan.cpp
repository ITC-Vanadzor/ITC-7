#include  <iostream>
int ast(int n, int m) {
    if (m==1) {
	return n;
    }
    if (m==2) {
	return n*n;
    } else  {
	if (m%2==0) {
	    return ast(n*n, m/2);
	} else return ast(n*n, (m-1)/2)*n;
    }
}
int main () {
    int n=0;
    do {
	std::cout << "n= ";
	std::cin >> n;
    } while (n<1);
    int m=0;
    do {
	std::cout << "m= ";
	std::cin >> m;
    } while (m<1);
    std::cout << ast(n,m) << std::endl;
    return 0;
}


