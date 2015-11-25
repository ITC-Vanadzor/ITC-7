#include <iostream>
#include <cstdlib>

int& Checking(char* array,const int number){
	char  stack[100];// current array for brackets
         int top = 0;//the top for stack array, which shows the index of last elemen
         
	for(int i=0; array[i] != '\0'; ++i)
	{
		switch(array[i]){
		
			case '{':
			case '(':
			case '[':
                        
				stack[top] = array[i];
                        	top++;
				break;
                        case '"':
                                if(stack[top-1] != '"'){
                                  stack[top] = array[i];
				  top++;
				}
                                else{
                                 top--;
                                 }
                                break;
                                
                        case '\'':
                                 if(stack[top-1] != '\''){
                                  stack[top] = array[i];
				  top++;
				}
                                else{
                                 top--;
                                 }
                                break;
                                              
      			case '}':
			case ']':
			case ')':
				if(top == 0){
					std::cout << "At first was  closing bracket" << std::endl;
					std::exit(1);
				}			
		
			   if(array[i] == '}' && stack[top-1] != '{'){
				std::cout << "Incorrect array... {} isn't match " << std::endl;
				std::exit(1);
				}
				
			  if(array[i] == ')' && stack[top-1] != '('){
				std::cout << "Incorrect array... () isn't match " << std::endl;
				std::exit(1);;
				}
			
			 if(array[i] == ']' && stack[top-1] != '['){
				std::cout << "Incorrect array... [] isn't match " << std::endl;
				std::exit(1);
			      }
                        top--;
                        break;
		 }
		
	}
	if(top != 0)
	{
		std::cout << "The array is incorrect!!!" << std::endl;
	}else
	{
		std::cout << "The array is correct " << std::endl;
	}

}
int main()
{	const int number=100;
	char array[number];
	std::cout << "Enter the array\t ";
	std::cin >> array;
        Checking(array,number);
         
return 0;
}
