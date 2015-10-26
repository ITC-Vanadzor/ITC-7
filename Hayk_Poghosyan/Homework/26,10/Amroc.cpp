//Gyumri amroc
#include<iostream>
typedef unsigned long long int bigint;

bigint sum(bigint n, bigint k) {
	bigint s = 0;
	for (int i = 0; i < k; ++i) {
		s += i*(n - 2);
								}
	return s;
}

int main() {
	bigint k;
	std::cout << "k>0 k=";
	std::cin >> k;
	bigint n;
	std::cout<<std::endl << "N>2 N=";
	std::cin >> n;
	bigint count;
	count = (n - 1)*k + sum(n, k) + 1;
	std::cout << std::endl << count;
	return 0;
			}