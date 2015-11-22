// Algorithm
//1. Included pairs is  sorted by first number of pair(small->big)
//2. Beginning from the fix-first pair(here we fix that first number's index), we go till  first member of pair changes compairing with previous member.  We FIX that index
//3. Checking current pair, and if 2 number of that pair is equivalent to the second  numbers of the previous pairs, 2 numbers of current pair is adding to stack.(stack is an array, which has 2*m size. It is intialized with NULLS) 
//4.  we reassign the number's of that pair with NULLS
//5.  Than we add to the stack the first member of  fixed_first pair and   go from the  fixed_first pair and check if the second number of it's pair is equival to one number of the stack. And if its true, we we reassign the number's of that pair with NULLS
//6. Than we continue that process begginig from the FIXED member of Array and do it till  we won't get to the last member of array
// IT's incorrect, if we add just one  pair, the first number of which is the smallest
# include <iostream>
# include <cstdlib>
   
 void BubbleDouble(int* members, int m){// // sorting(small->big) the Array using first numbers  of pairs
         for(int i=2*m-2; i>=0; i-=2){
  	for(int j=0; j<i; j+=2){
  	      if(members[j]>=members[j+2]){
  	          std::swap(members[j], members[j+2]);
                  std::swap(members[j+1], members[j+3]);
  	           }
  	      }
        }
  }

void  Print(int *ptr){  // prints  the stack 
     for(int i=0; ptr[i]!=0; ++i){
           std::cout<<" "<<ptr[i]<<"  ";
            }
            std::cout<<std::endl; 
  }
  
void  Print(int* ptr, int m){  // prints  the  Array with pairs
     for(int i=0; i<2*m; i+=2){
           std::cout<<" "<<ptr[i]<<" "<<ptr[i+1]<<std::endl;
   
            }
            std::cout<<std::endl; 
 }

bool Check(int a, int b, int* Array, int fixed){// compares the current pairs's each element to previous pairs second elements, and if two elements of that pair are equival to  previous  pairs  of second elements,returns 1 else returns 0
  for(int i=1; i<fixed; i+=2){
         if(a==Array[i]){
            a=1;  
            break;
         }
   }
   for(int i=1; i<fixed; i+=2){
         if(b==Array[i]){
            b=1;  
            break;
         }
   }
  if(a==1 && b==1){
      return 1;
  }
  else{
     return 0;
 }
}


 
 void  Searching(const int& m, int& fixed, int*& A, int *&stack, int& current){
   for(int i=fixed; i<2*m; i+=2){
      int first=fixed;
			while(A[i]==A[first]){
		          i=i+2;
		          fixed+=2;
		        }
        
	    if(Check(A[i],A[i+1],A,fixed)){
		int j=0;  
			  do{// if that number isn't in stack, its adding to stack
			      if(A[i]==stack[j]){
				   break;
			      }
				  ++j;
			     }while(stack[j]!=0);
				   if(stack[j]==0){
				     stack[current]=A[i];
				     current++;
				    }
		A[i]=0;
		j=0;
			   do{
			      if(A[i+1]==stack[j]){
				   break;
			      }
				  ++j;
			     }while(stack[j]!=0);
				   if(stack[j]==0){
				     stack[current]=A[i+1];
				     current++;
				     }
				     A[i+1]=0;     
     }
   
     stack[current]=A[first];
     current++;
     
      for(int i=first+1;i<fixed; i+=2){
		 for(int j=0; stack[j]!=0; ++j ){
		       	         if(A[i]==stack[j]){
				   A[i]=0;
				   A[i-1]=0;
				   break;
		             	 }		                         
		  }
                
       }

  
 }
}
             
int main()
{

int n=-1;// the max  number,which we can input as a number
int m=-1;// the count of pairs
	do{
	 std::cout<<"Enter n  big than 1\t  N: ";
	 std::cin>>n;
	 std::cout<<"Enter m  big  than  1 or equival to 1\t M: ";
	 std::cin>>m;
	}while(n<=1 || m<=0);

int *Array=(int*)malloc(2*m*sizeof(int));// array for included pairs
	for(int i=0; i<2*m; i+=2){
	   std::cin>>Array[i]>>Array[i+1];
	   	if(Array[i]>n){
			std::cout<<"Included number is more than n\n";
                        std::exit(1);
                 }
         }

BubbleDouble(Array,m);// sorting(small->big) the Array using first numbers  of pairs 
int *Stack=(int*)calloc(2*m,sizeof(int));// array for printing the result  for each searched numbers
int currentForStack=0;// the index of las memeber in stack array
int fixed=0;// is used for Array  in order to fix the index, when the first number of pair is changed cmp with first number  of previous pair 

	    while(fixed <2*m-1){
		  Searching(m, fixed, Array, Stack, currentForStack);
		  Print(Stack);
		       for(int i=0; Stack[i]!=0; ++i){
				    Stack[i]=0;
		       }
	     }
  
	   for(int i=0; i<2*m-1; i+=2){
		   if(Array[i]!=0){
		      std::cout<<Array[i]<<" "<<Array[i+1]<<std::endl; 
		   }
	     }
return 0;
}







