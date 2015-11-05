//QSORT

#include<iostream>

bool generate(int arr[],int &n){
	std::cout<<"Input N:";
	std::cin>>n;
	if(n<1 || n>50) return false;

	for(int i=0;i<n;++i){
		arr[i]=rand()%100;
	}
	return true;
}

void print(int arr[], int &n){

	for(int i=0;i<n;++i){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
}



void qsort(int arr[],int n,int step=1){

	int hatvac=n/step;
	if(hatvac<1) return;
	
	for(int i=0;i<=n-hatvac;i+=hatvac){

				int count=i+(hatvac/2);
				for(int j=i,index=0;j<=count;++j,++index){
								if(arr[j]>arr[(i+hatvac)-index]){
									std::swap(arr[j],arr[(i+hatvac)-index]);
								}
				}
	}
	
	qsort(arr,n,step+1);
}




int main(){

	int arr[50]={0};
	int n=0;

	if(!generate(arr,n)) return 0;
	
	print(arr,n);//aranc sortavorman
	
	qsort(arr,n-1);//sortavorum
	print(arr,n);//sortavorumic heto
	
	return 0;
}




