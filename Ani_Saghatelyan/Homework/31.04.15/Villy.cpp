// The program determines count of homes beetween two person's house
# include<iostream>

int  ArmenHomeNumber(int N,int M){
   int number=(N+M)/2+1;
   return number;
  }

int CountOfHouses(int ArmenHome, int n,int m){
   int count;
   ArmenHome<n? count=n-ArmenHome : count=m-ArmenHome;
   return count;
    }


int main()
{
  int N;
  int M;
 	do{
		std::cout<<"Enter N=\t";
		std::cin>>N;
   	        std::cout<<"Enter M=\t";
		std::cin>>M;
	}while(N<=0 ||M<=0);

 int HomeArmen=ArmenHomeNumber(N,M);
 int countOfHomes=CountOfHouses(HomeArmen, N,M);

 std::cout<<" The count of houses beetween Armen's and Ashot's house will be\t"<<countOfHomes<<std::endl;
return 0;
}

