#include <iostream>
void mysort(int*array,int lenght)
{
   for(int i=0;i<lenght;i++)
      {
         for(int j=i;j<lenght;j++)
            {
               if(array[j]<array[i])
                 {
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                  }
             }
       }
}
void mysort_double(double*array_double,int lenght)
{
   for(int i=0;i<lenght;i++)
      {
         for(int j=i;j<lenght;j++)
            {
               if(array_double[j]<array_double[i])
                 {
                    double temp=array_double[i];
                    array_double[i]=array_double[j];
                    array_double[j]=temp;
                  }
             }
       }
}
int my_search(int* array,int begin,int end,int tofind)
{
   if(begin>end) return -1;
   int middle=begin+(end-begin)/2;
   if(tofind>array[middle])
     return my_search(array,middle+1,end,tofind);
   else if(tofind<array[middle])
     return my_search(array,begin,middle-1,tofind);
   else 
     return middle;
}    
int my_search_double(double* array_double,int begin,int end,double double_tofind)
{
   if(begin>end) return -1;
   int middle=begin+(end-begin)/2;
   if(double_tofind>array_double[middle])
     return my_search_double(array_double,middle+1,end,double_tofind);
   else if(double_tofind<array_double[middle])
     return my_search_double(array_double,begin,middle-1,double_tofind);
   else 
     return middle;
}      
int print_int(int*array)
{  
   
   for (int i=0; i< 10; ++i) {
 		std::cout << "array[" << i << "]= ";
 		std::cin >> array[i];
 	}
   mysort(array,10);
   for(int i=0;i<10;i++)
      {
        std::cout << array[i] << " ";
      }
   int int_tofind;
   std::cout << "int_tofind= ";
   std::cin >> int_tofind;
   std::cout << "the index of " << int_tofind << " is " << my_search(array,0,10,int_tofind) << std::endl;
   return 0;
}
int print_double(double*array_double)
{  
   
   for (int i=0; i< 10; ++i) {
 		std::cout << "array_double[" << i << "]= ";
 		std::cin >> array_double[i];
 	}
   mysort_double(array_double,10);
   for(int i=0;i<10;i++)
      {
        std::cout << array_double[i] << " ";
      }
   double double_tofind;
   std::cout << "double_tofind= ";
   std::cin >> double_tofind;
   std::cout << "the index of " << double_tofind << " is " << my_search_double(array_double,0,sizeof(array_double)/sizeof(array_double[0]),double_tofind) << std::endl;
   return 0;
}
int main()
{
   int array[10];
   double array_double[10];
   bool fquit=false;
   int index=0;
   int choice;
   while (fquit==false) {
 	std::cout <<"(0) Quit (1) equals_int (2) equals_double ";
 	std::cin >> choice;
   switch(choice)
   {
      case 1: index=print_int(array);break;
      case 2: index=print_double(array_double);break;
      default : fquit = true; break;
   }
   if (fquit) {
 		break;
 	}
   }
return 0;
}
