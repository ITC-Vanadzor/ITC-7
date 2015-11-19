# include <iostream>

void F(int*& a){// gets the reference of pointer(doesn't copies the pointer), chenges the value of Ip  written in that pointer
   *a=1;
   std::cout<<"In  function, which gets parameter of type 'int&*'   the 'a' gets "<<*a<<std::endl;
}


void Function(int *a){// copies the pointer for function,  is changed the value in  Ip, which is written in  pointer 
    *a=5; 
    std::cout<<"In  function, which gets parameter of type 'int*'   the 'a' gets "<<*a<<std::endl;
}

void Function(int &a){// doesn't copy parameter for function,,gets the reference and is  changed in function
    a=10;
    std::cout<<"In  function, which gets parameter of type 'int&'   the 'a' gets "<<a<<std::endl;
}



int main()
{

  int a=0;
  int *ptr=&a;
  std::cout<<" 'a' before function gets "<<a<<std::endl;
  F(ptr);// called the first function
  std::cout<<"  'a' after function gets "<<a<<std::endl<<std::endl; 

  std::cout<<" 'a' before function gets "<<a<<std::endl;
  Function(&a);// called the second function
  std::cout<<"  'a' after function gets "<<a<<std::endl<<std::endl;

  std::cout<<" 'a' before function gets "<<a<<std::endl;
  Function(a);// called the third function
  std::cout<<"  'a' after function gets "<<a<<std::endl<<std::endl;

   
return 0;
}
  

