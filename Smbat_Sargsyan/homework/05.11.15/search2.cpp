#include <iostream>
void mysort(int*arr,int lenght)
{
   for(int i=0;i<lenght;i++)
      {
         for(int j=i;j<lenght;j++)
            {
               if(arr[j]<arr[i])
                 {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                  }
             }
       }
}
int my_search(int* arr,int begin,int end,int tofind)
{
   if(begin>end) return -1;
   int middle=begin+(end-begin)/2;
   if(tofind>arr[middle])
     return my_search(arr,middle+1,end,tofind);
   else if(tofind<arr[middle])
     return my_search(arr,begin,middle-1,tofind);
   else 
     return middle;
}   
int main()
{
   int arr[10];
   for (int i=0; i< 10; ++i) {
 		std::cout << "a[" << i << "]= ";
 		std::cin >> arr[i];
 	}
   mysort(arr,sizeof(arr)/sizeof(arr[0]));
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
      {
        std::cout << arr[i] << " ";
      }
   std::cout << std::endl;
   int int_tofind;
   std::cout << "int_tofind= ";
   std::cin >> int_tofind;
   std::cout << "the index of " << int_tofind << " is " << my_search(arr,0,sizeof(arr)/sizeof(arr[0]),int_tofind) << std::endl;
return 0;
}
