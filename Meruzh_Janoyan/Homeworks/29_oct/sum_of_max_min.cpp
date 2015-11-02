//MAXMIN
// kent texerum grvacneric minimum-i ev zuyg texerum grvacneri maximum-i gumar

#include <iostream>



void input(int &n){
	std::cout<<"N(n>1):";
	std::cin>>n;
}

int push_max(int m){
	static int max=0;

	if (max<m){
		max=m;
		return m;
	}
	else{
		return max;
	}
}
int push_min(int m){
	static int min=INT_MAX;

	if (min>m){
		min=m;
		return m;
	}
	else{
		return min;
	}
}
int main(){
	int n=0;
	int max=0;
	int min=0;
	int arr[100]={0};
	input(n);
	
	for(int i=1;i<n;++i){
		arr[i]=(rand()%100)-(rand()%100);
		std::cout <<arr[i]<<" ";

		if(i%2){
			min=push_min(arr[i]);
		}
		else{
			max=push_max(arr[i]);
		}
	}
	std::cout<<std::endl <<"MAX+MIN="<<max+min<<std::endl;

	return 0;
}


