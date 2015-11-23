#include <iostream>
#include <cstdlib>
#include <algorithm>

int main () {
    int N=1;
    do {
	std::cout << "N= ";
	std::cin >> N;
    } while (N < 1);
    int M = 0;
    do {
	std::cout << "M= ";
	std::cin >> M;
    } while ((M<1) || ( M > N*(N-1)/2));
    int* pair = (int*) malloc(M*2*sizeof(int));
    for(int i=0; i<M; ++i) {
	do {
	    std::cout << i << " -rd zuyg` " << std::endl;
	    std::cin >> *(pair+i*M];
	    std::cin >> pair[i*M+1];
	} while ((pair[i*M] >  pair[i*M+1]) || (pair[i*M]>N) || (pair[i*M+1] >N));
    }
    int* pair2 = (int*) malloc(M*2*sizeof(int));
    int min = 1;
    int k=0;
    for(int i=0; i<M; ++i) {
	if (*(pair+i*M)==min) {
	    *(pair2+k*M)=*(pair+i*M);
	    *(pair2+k*M+1)=*(pair+i*M+1);
	    ++k;
	}
    }
    


    for (int i=0; i<M; ++i) {
	std::cout <<std::endl;
	for (int j=0; j<2; ++j) {
	    std::cout << pair2[i*M+j]<< "   ";
	}
    }
    free(pair);
    free (pair2);
    return 0;
}
