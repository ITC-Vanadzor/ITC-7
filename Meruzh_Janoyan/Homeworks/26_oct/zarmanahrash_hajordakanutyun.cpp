 //zarmanahrash e ete hajordakanutyan gumary havasar e K, ev cankacac tiv ir naxordic
//mec e 1-ov
#include <iostream>


int input_number(char* txt){
	int n=0;
	std::cout<<txt;
	std::cin>>n;
	return n;
}

int main(){

	int n=input_number("N:");
	int arr[50]={0};
	
	int i;
	for(i=0;i<n;i++){ 
		arr[i]=i;
		std::cout<<arr[i]<<" ";
	}

	int sum=0;
	int k=input_number("K:");
	for(i=1;i<n;i++){ 
		if(arr[i]-arr[i-1]!=1){
			std::cout<<std::endl<<"Zarmanahrash hajordakanutyun CHE!"<<std::endl;
			return 0;
		}
		sum+=i;
	}

	if(sum==k){
		std::cout<<"Zarmanahrash hajordakanutyun e!"<<std::endl;
	}else{
		std::cout<<"Zarmanahrash hajordakanutyun CHE!"<<std::endl;
	}
	return 0;
}