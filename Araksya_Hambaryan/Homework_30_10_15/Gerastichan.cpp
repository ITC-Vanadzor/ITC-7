#include <iostream>
// voroshel erkusi n-rd kargi gerastichann @st m moduli
// sxal shat metc tveri patcharov

int main() {
    int n = -1;
    int m = -1;
    while ((n < 0) || ( n > 100000)) {
	std::cout << "n= ";
	std::cin >> n;
    }
    while ((m < 2) || ( m > 10000)) {
	std::cout << "m= ";
	std::cin >> m;
    }
    std::cout << ((1<<(1<<n))%m) << std::endl;
    return 0;
}
