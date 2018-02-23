#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stack>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
int main () {
    char text[] = "abs{jhk{h'fa'hc}gk}jkj";
    int n=strlen(text);
    char *brackets = (char*) malloc(n*sizeof(char));       // pakagceri zangvac
    int j=-1;
    for (int i=0; i<n; ++i) {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']'|| text[i] == '(' || text[i] == ')' || text[i]==34 || text[i]==39) {
	    brackets[++j]=text[i];
	}
    }
    int m=strlen(brackets);
    std::stack<char> mystack;
    if (m%2!=0) {
	sxal();
    }
    if (brackets[0]=='}' || brackets[0]==']' || brackets[0]==')') { 
	sxal();
    } 
    int OneMark=0;  //   ' qanak
    int TwoMark=0;  //   " qanak
    for (int i=0; i<m; ++i) {
	std::cout << brackets[i] << std::endl;
	switch (brackets[i]){
	    case '}': 
		if (mystack.top()=='{') {
		    mystack.pop();
		} else {
		    sxal();
		}
		break;
	    case ']':
		if (mystack.top()=='[') {
		    mystack.pop();
		} else {
		    sxal();
		}
		break;
	    case ')':	
		if (mystack.top()=='}') {
		    mystack.pop();
		} else  {
		    sxal();
		}
		break;
	    case 39:
		++OneMark;
		if (OneMark==2) {
		    if (mystack.top()==39) {
			mystack.pop();
		    }else {
			sxal();
		    }
		} else { 
		    mystack.push(brackets[i]);
		}
		break;
	    case 34:
		++TwoMark;
		if (TwoMark==2) {
		    if (mystack.top()==34) {
			mystack.pop();
		    }else {
			sxal();
		    }
		} else { 
		    mystack.push(brackets[i]);
		}
		break;
	    default:  mystack.push(brackets[i]); break;
	}
    }
    if (mystack.empty()) {
	std::cout << "chisht e" <<std::endl;
    } else {
	std::cout << "sxal e " <<std::endl;
    }
    free(brackets);

    return 0;
}

