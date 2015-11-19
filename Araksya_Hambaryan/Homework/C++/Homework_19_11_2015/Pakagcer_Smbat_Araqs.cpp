#include <iostream>
#include <cstring>
#include <cstdlib>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
int main () {
    char text[] = "abs{jh[khfahgk}j]kj";
    int n=strlen(text);
    char *a=new char;       // pakagceri zangvac
    int j=-1;
    for (int i=0; i<n; ++i) {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']'|| text[i] == '(' || text[i] == ')') {
	    ++j;
	    a[j]=text[i];
	}
    }
    int m=strlen(a);
    if (m%2!=0) {
	sxal();
    }
    if (a[0]=='}' || a[0]==']' || a[0]==')') { 
	sxal();
    }
    int bacvox=0;
    int pakvox =0;
    bool stugum;
    for (bacvox=0; bacvox <=m; ++bacvox) {
	if (a[bacvox]=='{') {
	    stugum =true;
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]=='}') {
		    stugum =false;
		    if ((pakvox-bacvox)%2==0) {
			sxal();
		    }
		}
		++pakvox;
	    } while (pakvox <= m);
	}
	if (a[bacvox]=='[') {
	    stugum=true;
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]==']') {
		    stugum =false;
		    if ((pakvox-bacvox)%2==0) {
			sxal();
		    }
		}
		++pakvox;
	    } while (pakvox <= m);
	}
	if (a[bacvox]=='(') {
	    stugum=true;
	    pakvox=bacvox+1;
	    do {
		if (a[pakvox]==')') {
		    stugum=false;
		    if ((pakvox-bacvox)%2==0) {
			sxal();
		    }
		}
		++pakvox;
	    } while (pakvox <= m);
	}
    } 
    if (stugum) {
	std::cout << "sxal" <<std::endl;
    } else {
	std::cout << "chisht" <<std::endl;
    }
    delete a;

    return 0;
}

