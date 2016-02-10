#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
//**************checking priority of operator
int priority(char a)
{
	switch(a)
	{
		case '+':case '-':  return 1;
		case '*':case '/':  return 2;
		case '^':           return 3;
	}
}
//****************** compareing the priorities of two operators********************
bool compare(char a, char b, char prefopen)
{
	if(  prefopen=='(')	
	{
		return (priority(a) >= priority(b))? true:false;
	}
	else
	{
 		return (priority(a) > priority(b))? true:false;
	}
	
}
//******************function, which converts  infix into postfix or prefix****************************
std::string convert(std::string str, char  prefopen, char prefclose)
{

	std::string newstr;
	std::stack <char> stackOp;
	// for decision of choice  postfix or prefix
	if(prefopen==')')
	{
		reverse(str.begin(), str.end());
	}
       	//  beggining from the first char,checking if it is operand or operator
 		for(int i=0; i<str.size(); ++i)
		{
	               //  if it is operand, we add it to our convertxed string	
			if(str[i] >='0' && str[i] <='9')
			{
				newstr+=str[i];
			}	
	                // if it is operator	
			else  
			{
	                  // if  the last operator of stack has more priority than current character of string, we  add to converted string
				while(!stackOp.empty() &&  compare(stackOp.top(), str[i], prefopen) && stackOp.top()!=prefopen)
				{
		                    newstr+=stackOp.top();
				    stackOp.pop();
				} 
                         	// adding the current operator to stack of operators
				if(str[i]!=prefclose)
				{
					stackOp.push(str[i]);
		                 }	
                        	//  we add all previous operators to our portFixedString untill we don't get to prefopen
		       	         else if (str[i]==prefclose)
				{	
					while(!stackOp.empty() &&  stackOp.top()!=prefopen)
					{
					       newstr+=stackOp.top();
				       		stackOp.pop();
					}
					if(stackOp.top()==prefopen)
					{
						stackOp.pop();
					}
				} 
		      }
	      }
	// adding all operators, which are still in stack
	while (!stackOp.empty()) 
	{
		newstr += stackOp.top();
		stackOp.pop();
	 }
	if(prefopen==')')
	{
		reverse(newstr.begin(), newstr.end());
	}
return newstr;
}


int main()
{

	std::string str;
	std::cout<<"Enter infix expression  "<<std::endl;
	std::cin>>str;
	std::string newstr=convert(str, '(',')');
	std::cout<<"PostFixed "<<newstr<<std::endl;
	std::string PrefixString=convert(str, ')','(');
	std::cout<<"PreFixed "<<PrefixString<<std::endl;

	return 0;
}
