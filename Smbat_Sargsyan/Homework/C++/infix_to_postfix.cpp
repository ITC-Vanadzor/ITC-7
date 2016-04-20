#include <iostream>
#include <cstdlib>
#include <string>
int priaritet(char symbol) {
	switch(symbol){
		case ')':return 0;
		case '(':return 0;
		case '^':return 3;
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '_':return 1;
	}
} 
char stack[50];
int top=0;
void push_stack(char element) {
	top++;
	stack[top]=element;
}
void pop_stack() {
	top--;
}
int main() {
	std::string a="5/(2-1)*(1+3)";
	char posfix[50];
	int j=0;
	int x=a.length();
	for(int i=x-1;i>=0;i--) {
		if(a[i] != ')' && a[i]!='/' && a[i]!='*' && a[i]!='+' && a[i]!='-'&& a[i]!='^' && a[i] !='(') {
			posfix[j++]=a[i];	
		}
		else if(top==0){
	
			push_stack(a[i]);
		}
		if(top !=0 && priaritet(a[i]) >  priaritet(stack[top])) {
	
			push_stack(a[i]);
		}
		else  { 
			do {
				if(stack[top] != '(' && stack[top] != ')' && top !=1  ) {
					posfix[j++]=stack[top];
				}
		        pop_stack();
			} while(stack[top] == '(' );
		}
	}
	if(top !=0) {
		posfix[j++]=stack[top];
	}
	for(int i=0;i<j;i++) {
		std::cout << posfix[i];
	}
	return 0;
}
			
		
