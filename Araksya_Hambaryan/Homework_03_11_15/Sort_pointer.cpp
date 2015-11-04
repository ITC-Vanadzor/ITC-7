#include <iostream>

void Ssort(int n, int a[]) {
    int ncopy = n;
    do {
	for(int i = 0;i < ncopy-1; ++i) {
	    if (a[i] > a[i+1]) {
		std::swap(a[i], a[i+1]);
	    }
	}  
	--ncopy; 
    } while (ncopy != 1); 
    for (int i = 0; i < n; ++i) {
	std::cout << "sort array[ " << i << "]= " << a[i] << std::endl;
    }
     ncopy = n;
    do {
	for(int i = 0;i < ncopy-1; ++i) {
	    if (&a[i] > &a[i+1]) {
		std::swap(a[i], a[i+1]);
	    }
	}  
	--ncopy; 
    } while (ncopy != 1); 
    for (int i = 0; i < n; ++i) {
	std::cout << "sort &array[ " << i << "]= " << &a[i] << std::endl;
    }
}

/*void Ssort(int n, int* a[]) {
    int ncopy = n;
    do {
	for(int i = 0;i < ncopy-1; ++i) {
	    if (a[i] > a[i+1]) {
		std::swap(*a[i], *a[i+1]);
	    }
	}  
	--ncopy; 
    } while (ncopy != 1); 
    for (int i = 0; i < n; ++i) {
	std::cout << "sort &array[ " << i << "]= " << a[i] << std::endl;
    }
}*/

int main() {
    int n = -1;
    do {
	std::cout << "n= ";
	std::cin >> n;
    } while (n < 1);
    int a[n];
    for(int i=0; i < n; ++i) {
	std::cout << "array[ " << i << "]= ";
	std::cin >> a[i];
    }
    int* a1[n];
    for(int i=0; i<n; ++i) {
	a1[i] = &a[i];
    }
    Ssort(n, a);
    for (int i = 0; i < n; ++i) {
    std::cout << &a[i] <<std::endl;
    }
    //Ssort(n, a1);
    return 0;
}

