/* hajordakanutyuny zarmanahrash e ete bavararum e hetevyal paymannerin 
1) hajordakanutyan amne andam ir naxordic mec e 1ov
2) hajordakanutyan andamneri gumary havasar e K-i
3) hajordakanutyan andamnery dasavorvac en ajman kargov
*/ 
#include <iostream>

int main() {

int N;
int K;
std::cout << "N=";
std::cin >> N;
std::cout << "K=";
std::cin >> K;
int k;
int gumar=0;
int i;
int hajordakanutyun[N];
 	for (int i=1; i<=N; ++i) {
		hajordakanutyun[i]=i;
		gumar+=i;
		std::cout <<  hajordakanutyun[i] << " ";
		}
			if (K==gumar) { 
			std::cout << "\n" << K << "=" << gumar << "   "<< "Zarmanahrash Hajordakanutyun e :) " << std::endl ;}
			else { 
			std::cout << "\n" << K << "!=" << gumar << "   "<< "Zarmanahrash Hajordakanutyun che " << std::endl ;}

return 0;
}
