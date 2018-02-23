#include <iostream>
#include <cstdlib>


void Sort(int *members, int n){
         for(int i=n; i>=0; --i){
  	for(int j=0; j<i; ++j){
  	      if(members[j]<members[j+1]){
  	          std::swap(members[j], members[j+1]);
  	           }
  	      }
        }
    
}
            
            
 
        

int main()
{

int n;
int m;
	do{
		std::cout<<"Enter N: ";
		std::cin>>n;
		std::cout<<"Enter M: ";
		std::cin>>m;
	}while(n<=1 || m<=0);

int *AllPairs=(int*)malloc(sizeof(int)*2*m);
 	for(int i=0; i<2*m; i+=2){
           std::cout<<" pair: ";
 	   std::cin>>AllPairs[i]>>AllPairs[i+1];
        }
int *AllpairsCopy=(int*)malloc(sizeof(int)*2*m);
AllpairsCopy=AllPairs;
int quantityOfFirstVertics=2*m;
	for(int j=0; j<2*m; ++j){
            for(int i=j+1; i<2*m; ++i){
		if(AllpairsCopy[j]==AllpairsCopy[i]){
                AllpairsCopy[i]=0;                
                quantityOfFirstVertics-=2;
          	 }
             }
        }

Sort(AllpairsCopy,quantityOfFirstVertics+2);       
int* FirstVertics=(int*)realloc(AllpairsCopy,sizeof(int)*(quantityOfFirstVertics+2));
for(int i=0; i<=2*m; i++){
           std::cout<<AllpairsCopy[i];
 }
free(AllpairsCopy);






return 0;
}
