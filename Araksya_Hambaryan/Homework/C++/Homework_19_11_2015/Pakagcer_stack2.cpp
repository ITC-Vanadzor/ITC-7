#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stack>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
int main () {
    char text[] = "abs{j'hk{hfa'hc}gk}jkj";
    int n=strlen(text);
    char *brackets = (char*) malloc(n*sizeof(char));       // pakagceri zangvac
    int j=-1;
    for (int i=0; i<n; ++i) {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']'|| text[i] == '(' || text[i] == ')') {
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
	if (brackets[i]=='{' || brackets[i]=='[' || brackets[i]=='(') {     
	    mystack.push(brackets[i];
	}  
	if (brackets[i]== '}') { 
		if (mystack.top()=='{') {
		    mystack.pop();
		} else {
		    sxal();
		}
	    }
	if (brackets[i]== ']') {
		if (mystack.top()=='[') {
		    mystack.pop();
		} else {
		    sxal();
		}
	    }
	if (brackets[i]== ')') {	
		if (mystack.top()=='}') {
		    mystack.pop();
		} else  {
		    sxal();
		}
		
	if (brackets[i]==''') {
		++Onemark;
		if (OneMark==2) {
		    if (mystack.top()==''') {
			mystack.pop();
		    }else {
			sxal();
		    }
		} else { 
		    mystack.push(brackets[i]);
		}
	}
	if (brackets[i]=='"') {
		++Twomark;
		if (TwoMark==2) {
		    if (mystack.top()==''') {
			mystack.pop();
		    }else {
			sxal();
		    }
		} else { 
		    mystack.push(brackets[i]);
		}
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

