//grel cragir vortex nermucenq bazmankyan ankyunneri tivy ev harkeri tivy,tpi senyakneri qanaky...

#include <iostream>

int main() {
int N;
int K;
std::cout << "N=";
std::cin >> N;
std::cout << "K=";
std::cin >> K;
   
for (int i=0; i<K; ++i) {
	N=N+i*N;
}
std::cout<< N <<std::endl;
return 0;
}
