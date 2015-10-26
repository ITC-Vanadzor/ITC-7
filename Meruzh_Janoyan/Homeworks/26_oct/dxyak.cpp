//dxyak
#include <iostream>


int main(){

	int AnkyunneriQanak, HarkeriQanak;
	std::cout<<"Nermuceq ankyunneri qanak@:";
	std::cin>>AnkyunneriQanak;
	std::cout<<"Nermuceq harkeri qanak@:";
	std::cin>>HarkeriQanak;

	int SenyakneriQanak=AnkyunneriQanak;

	for(int i=2;i<=HarkeriQanak;++i){

		SenyakneriQanak+=(i*(AnkyunneriQanak-2)+1);
	}

	std::cout<<"Senyakneri qanak@: "<<SenyakneriQanak<<std::endl;
	
	return 0;
}