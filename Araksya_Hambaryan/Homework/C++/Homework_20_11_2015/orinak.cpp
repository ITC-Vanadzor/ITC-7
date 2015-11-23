#include <iostream>
#include <cstdlib>

int main() {
    int m=3;
    int* a = (int*)malloc(m*2*sizeof(int));
    for (int i=0; i<m; ++i) {
	std::cin >> *(a+i*m*sizeof(int)) >> *(a+i*m*sizeof(int)+sizeof(int));
    }
    for (int i=0; i<m; ++i) {
	std::cout<< *(a+i*m*sizeof(int)) << "   " << *(a+i*m*sizeof(int)+sizeof(int)) << std::endl;
    }
    free(a);
    return 0;
}
