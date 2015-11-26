#include <iostream>
#include <cstdlib>

struct pair {
	int first;
	int second;
};

int main () {
int M;
int N;

// input maximum number in pairs
std::cout<<" Enter the maximum number  in pairs : ";
std::cin>>M;
// input number of pairers
std::cout<<" Enter the number of pairers  that contains numbers <="<<M<<" : ";
std::cin>>N;

int* arr;
arr =  (int*)malloc (M*sizeof(int));
for (int i = 0; i<M; i++) arr[i]=0;  // array for numbers in pairers
pair* arrPairs;
arrPairs = (pair*)malloc(N*sizeof(pair));

bool t = true;
int k = 0;
// input pairers
for (int i = 0; i < N; i++){
	std::cout<<" Pair "<<i+1<<" : ";
	std::cin>>arrPairs[i].first>>arrPairs[i].second;

	for (int j = 0; j < M; j++) {
		t = (arrPairs[i].first == arr[j]);			
	        if (t) break;
	}
	if (!t)  arr[k++] = arrPairs[i].first;

	t = true;
	for (int j = 0; j < M; j++) { 
		t = (arrPairs[i].second == arr[j]);
		if (t) break;
	}
	if (!t)  arr[k++] = arrPairs[i].second;
}

// sort numbers that are used in pairs
for (int j = M; j>=0 && arr[j]!=0; j--) 
   for (int i = 0; arr[i]!=0 && i<j; i++) 
       if (arr[i]>=arr[i+1]) std::swap(arr[i], arr[i+1]);

// potential subsets
int count;

for (int t = (int)(N==M); t<N; t++){
  for (int k =M; k>M/2; k--){ 
     std::cout<<" { ";
     for (int j = t; j < k; j++)  
	for (int i = j+1; i<k && arr[i]!=0; i++)
	    if (arr[j]!=0 && arr[i]!=0)  
			std::cout<<"( "<<arr[j]<<", "<<arr[i]<<")";
		
        			
  std::cout<<" } "<<std::endl; 
 }

  std::cout<<"\n----"<<std::endl;
}

// deallocate dynamic memory
free(arrPairs);
free(arr);
free(stack);
return 0;
}
