#include <iostream>
#include <cstdlib>
#define n 7
//polidrom toxer
int main () {
    char tox[n];
    std::cin >> tox;
    bool a=true;
    for(int i = 0; i < n/2; ++i) {
	if (tox[i] != tox[0]) {
	    a=false;
	}
	if (tox[i] != tox[n-1-i]) {
	    std::cout << "polidrom chi"<< std::endl;
	    exit(1); 
	}
    }
    tox[n-1]='\0';
    if (a)	{
	std::cout << "error" <<std::endl;
    } else {
	std::cout << tox << std::endl;
    }
    return 0;
}
