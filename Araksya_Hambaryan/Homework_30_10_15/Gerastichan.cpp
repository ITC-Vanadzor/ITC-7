#include <iostream>
// voroshel erkusi n-rd kargi gerastichann @st m moduli

int Gerastichan(int N, const int& m) {
    return (N == 0) ? (2%m) : (Gerastichan(N-1,m)* Gerastichan(N-1,m))%m;
}
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
    std::cout << Gerastichan (n,m) << std::endl;
    return 0;
}
