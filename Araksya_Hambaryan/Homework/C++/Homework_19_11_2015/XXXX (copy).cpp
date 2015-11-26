#include <iostream>
#include <cstring>
#include <cstdlib>

int main () {
    char text[] = "abs{jhkhfahgk}jkj";
    int n=strlen(text);
    char *a=new char;
    int j=-1;
    for (int i=0; i<n; ++i) {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']') {
	    ++j;
	    a[j]=text[i];
	}
    }
    int m=strlen(a);
    if (m%2!=0) {
	std::cout << "sxal" << std::endl;
	exit(1);
    }
    if (a[0]=='}' || a[0]==']' || a[0]==')') { 
	std::cout << "sxal" << std::endl;
	exit(1);
    }
    int bacvox;
    int pakvox =0;
    for (bacvox=0; bacvox <m; ++bacvox) {
	if (a[bacvox]=='{') {       // { [ } ]
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]=='}') {
		    if ((pakvox-bacvox)%2!=0) {
			std::cout << "sxal" << std::endl;
			exit(2);
		    }
		}
		++pakvox;
	    } while (pakvox <m);
	std::cout << "sxal" << std::endl;
	    exit(2);

	}
	if (a[bacvox]=='[') {
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]==']') {
		    if ((pakvox-bacvox)%2!=0) {
			std::cout << "sxal" << std::endl;
			exit(1);
		    }
		}
		++pakvox;
	    } while (pakvox <m);
		std::cout << "sxal" << std::endl;
	    exit(2);
}
	if (a[bacvox]=='(') {
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]==')') {
		    if ((pakvox-bacvox)%2!=0) {
			std::cout << "sxal" << std::endl;
			exit(1);
		    }
		    }
		++pakvox;
	    } while (pakvox >=m);
		std::cout << "sxal" << std::endl;
	    exit(2);
}
    } 
    std::cout << "true" <<std::endl;
    delete a;

    return 0;
}

