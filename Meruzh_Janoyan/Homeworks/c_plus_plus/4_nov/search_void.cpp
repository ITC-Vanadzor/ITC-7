//Search
//ogtagorcel em macro funkcianer


#include <iostream>

#define COMPARE(TP) { 	if(*(TP*)a==*(TP*)b) return 1; return 0; }
#define MEC(TP)	    { 	if (*(TP*)a>*(TP*)b) return 1; return 0; }
#define SEARCH(TP)	{ 	while((TP*)start != (TP*)end){\
							if(compare(start,element,element_size)) {return 1;	}	\
							start=(TP*)start+1;\
							}\
					}

bool search(void *start, void *end, int element_size, void *element, bool compare(void *,void *,int )){
	

	if(element_size==1){
					SEARCH(char);
	}
	else if(element_size==4){
					SEARCH(int);

	}
	else if(element_size=8){
					SEARCH(double);
	}
	return 0;
}
	
bool compare(void *a,void *b,int element_size){
	if(element_size==1){
					COMPARE(char);
	}
	else if(element_size==4){
					COMPARE(int);

	}
	else if(element_size=8){
					COMPARE(double);
	}
	return 0;
}

bool mec(void *a,void *b,int element_size){
	if(element_size==1){
					MEC(char);
	}
	else if(element_size==4){
					MEC(int);

	}
	else if(element_size=8){
					MEC(double);
	}
	return 0;
}

int main(){

	double db[5]={1.1,2.3,3.5,6.23,8.21};
	double d=2.3;
	if(search(db,db+5,sizeof(double),&d,compare)){
		std::cout <<"Double value has found!"<<std::endl;
	}
	else{
		std::cout <<"Double value not found!"<<std::endl;
	}
	
	int it[5]={1,5,6,9,4};
	int i=8;

	if(search(it,it+5,sizeof(int),&i,mec)){
		std::cout <<"Int value has found!"<<std::endl;
	}
	else{
		std::cout <<"Int value not found!"<<std::endl;
	}
	


	return 0;
}