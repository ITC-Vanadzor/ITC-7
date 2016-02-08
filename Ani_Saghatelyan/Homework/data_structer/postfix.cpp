//

#include <iostream>
#include <stack>
#include <string>
// checking priority of operator
int priority(char a)
{
	switch(a)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		
	}

}


// compareing the priorities of two operators
bool compare(char a, char b)
{

	return (priority(a)>priority(b))? true:false;
}


std::string convert(std::string str)
{

	std::string postFixedString;
	std::stack <char> stackOp;

        	//  beggining from the first char,checking if it is operand or operator
 		for(int i=0; i<str.size(); ++i)
		{
	                //  if it is operand, we add it to our postfixxed string	
			if(str[i] >='0' && str[i] <='9')
			{
				postFixedString+=str[i];
			}	
	                // if it is operator	
			else  
			{
	                       // if the stack isn't empty and the last operator of stack has more priority than current character of string, and it isn't '(' it is adding to postfixed string
	
				while(!stackOp.empty() &&  compare(stackOp.top(), str[i]) && stackOp.top()!='(')
				{
		                    postFixedString+=stackOp.top();
				    stackOp.pop();
				} 
                         	// adding the current operator to stack of operators
				if(str[i]!=')')
				{
					stackOp.push(str[i]);
		                 }	
                        	// if the current operator is ')', we add all previous operators to our portFixedString untill we don't get to '(', when we just pop that operator
		       	         else if (str[i]==')')
				{	
					while(!stackOp.empty() &&  stackOp.top()!='(')
					{
					       postFixedString+=stackOp.top();
				       		stackOp.pop();
					}
					if(stackOp.top()=='(')
					{
						stackOp.pop();
					}
				} 
	 		
		      }
	      }
	// adding all operators, which are still in stack
	while (!stackOp.empty()) 
	{

		postFixedString += stackOp.top();

		stackOp.pop();

	 }

return postFixedString;

}


int main()
{

	std::string str="(5+3)*1-(4-3)*(5+8)";
	std::cout<<"Enter infix expression  "<<std::endl;
	std::cin>>str;
	std::string convertedString=convert(str);
	std::cout<<"PostFixed "<<convertedString<<std::endl;

return 0;
}
