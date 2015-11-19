  # include <iostream>

void Print(int number[], int size){// the function prints the array
   for(int i=0; i<size; ++i){
         std::cout<<number[i]<<"\t";
         }
     std::cout<<std::endl;
   }


void QSort(int start[], int first, int last)// Function sorts quickly using as an pivot the middle memeber of current part of array
{
  int  newFirst= first;// the pivot will begin to sort from first member of current part ofarray
  int  newLast = last;// the pivot  will begin to sort from the last member of  current part of array
  
  int current = (first + last) / 2;// the middle member of current array
  std::cout<<"the pivot is \t"<<current<<"-th  member"<<std::endl;
  while (newFirst <=current && newLast > current)// controls  for not going away from current member
    {
      while (start[current]>start[newFirst] )
	{
	  ++newFirst;
	}
      while (start[current]<start[newLast])
	{
	  --newLast;
	}
      if (newFirst <= newLast)// swapping members, which are less than current member and more than current member
	{
	  std::swap(start[newLast], start[newFirst]);
          Print(start,8);
         
	  ++newFirst;
	  --newLast;
	}
    }
  if (first < newLast)//controls in order to understand if new array contains no less than 2 members 
    {
      QSort(start, first, newLast);
    }
  if (newFirst < last)//controls in order to understand if new array contains no less than 2 members 
    {
      QSort(start, newFirst, last);
    }
     
}
            
         
          

int main(){

  int Numbers[8]={};

   for(int i=0; i<8; ++i){
     std::cout<<"Enter the "<<i<<"_th  number  ";
     std::cin>>Numbers[i];
       }
 
    Print(Numbers,8);
   QSort(Numbers,0,7);
   Print(Numbers,8);

  return 0;
}
