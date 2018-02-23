#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <assert.h>
#include <cmath>
//***************function, which determines is the inputed string correct**********
bool validation(const std::string&  str)
{
	std::string expectedCharacters="0123456789/*+-^)( ";
	int count=0;
	for (int i=0; i<str.size(); ++i)
	{    
		if(str[i]=='(')
		{
		    ++count;
		    if(count<0)
		    {
			return false;
		    }
		}
		else if(str[i]==')')
		{
		    --count;
                    if(count<0)
		    {
			return false;
		    }
		}
        	if(expectedCharacters.find(str[i])==std::string::npos)
		{
			return false;
		}
		
	}
return true;

}

//***************does operation for 2  value from postfix********************
void Calculation(const char& Operator, std::stack <double>&  Stack )
{
	double num2 = Stack.top();
	Stack.pop();
	double num1 = Stack.top();
	Stack.pop();
	switch (Operator)
	{
	
		case '+' :  Stack.push(num1+num2);				 break;
		case '-' :  Stack.push(num1-num2);  				 break;
		case '/' :  assert(num2!=0);  Stack.push(double(num1)/num2); 	 break;
		case '*' :  Stack.push(num1*num2);				 break;
		case '^' :  Stack.push(pow(num1,num2));				 break;
		default  :  std::cout<<"Wrong operator\n"; 
	}

}

//*****************determines value from postfix************
double DetermineValuePostfix(std::string str)
{
  std::stack <double> numbers;
	
	 for(int i=0; i<str.size(); ++i)
	{
		if (str[i]>='0' && str[i]<='9')
		{
			numbers.push(str[i]-48);
		}
		else 
	        {
			Calculation(str[i], numbers);
		}
	}
   return numbers.top();
}

//**************checking priority of operator
int priority(char a)
{
	switch(a)
	{
		case '+':case '-':  return 1;
		case '*':case '/':  return 2;
		case '^':           return 3;
		defalut:   return 4;
	}
}
//****************** compareing the priorities of two operators********************
bool compare(char a, char b, bool ispostfix)
{
	if(ispostfix)	
	{
		return (priority(a) >= priority(b))? true:false;
	}
	else
	{
 		return (priority(a) > priority(b))? true:false;
	}
	
}
//*********************** choosing preferences****************
void  preferences(char &prefopen, char& prefclose, bool ispostfix)
{
    if(!ispostfix)
    {
	prefopen=')';
	prefclose='(';
    }
    else if(ispostfix)
    {
    	prefopen='(';
	prefclose=')';
    }
}
//*************adding to string**********************
void addToString(std::string& newstr, std::stack <char> & stackOp)
{
  newstr+=stackOp.top();	
  stackOp.pop();
}
//*********function, which converts the infix string into postfix and prefix using ispostfixs*************
std::string convert(const  std::string&  str,  bool ispostfix)
{
    	std::string newstr;
	std::stack <char> stackOp;
	char prefclose;
	char prefopen;
	preferences(prefopen, prefclose,ispostfix);
 	for(int i=0; i<str.size(); ++i)
	{
		if(str[i] >='0' && str[i] <='9')
		{
			newstr+=str[i];
			std::cout<<str[i]<<std::endl;
		}	
		else  
		{
			while(!stackOp.empty() &&  compare(stackOp.top(), str[i], ispostfix) && stackOp.top()!=prefopen)
			{
	                    addToString(newstr, stackOp);
			
		        }
			std::cout<<prefopen<<" "<<prefclose<<std::endl;
			if(str[i]!=prefclose)
			{
			    std::cout<<str[i];
				stackOp.push(str[i]);
	                 }	
	       	         else if (str[i]==prefclose)
			{	
				while(!stackOp.empty() &&  stackOp.top()!=prefopen)
				{
				           addToString(newstr, stackOp);
				}
				if(stackOp.top()==prefopen)
				{
					stackOp.pop();
				}
			} 
		 }
	 }
	while (!stackOp.empty()) 
	{
	     addToString(newstr, stackOp);
	 }	
return newstr;

}
//******************function, which converts  infix into postfix***************************
std::string  postfix(std::string str)
{
	assert(validation(str));
        return 	convert(str, true);
}

//******************function, which converts  infix into prefix***************************
std::string prefix(std::string str)
{
        assert(validation(str));
	reverse(str.begin(), str.end());
        std::string newstr=convert(str, false);
	reverse(newstr.begin(), newstr.end());
	return newstr;
}


int main()
{

	std::string str;
	std::cout<<"Enter infix expression  "<<std::endl;
	std::cin>>str;
	std::string Postfix=postfix(str);
	std::cout<<"PostFixed "<<Postfix<<std::endl;
	std::cout<<"The value of postfixed expression is :  "<< DetermineValuePostfix(Postfix)<<std::endl;
	std::string Prefix=prefix(str);
	std::cout<<"PreFixed "<<Prefix<<std::endl;

	return 0;
}
