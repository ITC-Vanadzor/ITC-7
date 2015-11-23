//hasceneri ev arzheqneri sortavorum
#include<iostream>


void sort(int *arr[],bool flag){//ete flag=1 sortavorum e hascenery, hakarak depkum arzheqnery
	for(int i=0;i<5;++i){
		for(int j=i;j<5;++j){
			if(flag){
				if(arr[i]>arr[j]){
					std::swap(arr[i],arr[j]);
				}
			}else{
				if(*arr[i]>*arr[j]){
					std::swap(arr[i],arr[j]);
					}
			}
		}
	}
}

void print(int *arr[],char *c){
	std::cout<<c<<std::endl;
	for(int i=0;i<5;++i){
		std::cout<<arr[i]<<"    value="<<*arr[i]<<std::endl;
	}
	std::cout<<std::endl;
}

int main(){

	int a=5;
	int e=3;
	int c=4;
	int b=2;
	int d=1;

	int *arr[5];
	
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;
	arr[3]=&d;
	arr[4]=&e;
	print(arr,"Aranc sortavorman");
	
	sort(arr,1);//hasceneri dasavorum
	print(arr,"Hasceneri sortavorumic heto");

	sort(arr,0);//arzheqneri dasavorum
	print(arr,"arzheqneri sortavorumic heto");

	return 0;
}
