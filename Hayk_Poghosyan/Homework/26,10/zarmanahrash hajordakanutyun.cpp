// zarmanahrash hajordakanutyun
#include <iostream>


int main() {
	int k, n;
	std::cout << "k>0 n>=1" << std::endl;
	std::cout << "n=";
	std::cin >> n;
	std::cout << "k=";
	std::cin >> k;
	int sum = 0;
	for (int i = 1; i < n; ++i) {
		std::cout << i << " ";
		sum += i;
	}
	if (k > sum)
		std::cout << k - sum;
	else
		std::cout <<std::endl <<"HNARAVOR CHE";
	return 0;
}