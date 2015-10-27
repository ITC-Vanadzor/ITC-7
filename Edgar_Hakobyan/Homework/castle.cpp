#include <iostream>
int main()
{
	int makardak,tiv;
	int sum=0;
	std::cout<<"greq bazmankyan ankyunneri tiv@` "; std::cin>>tiv;
	std::cout<<"greq makardakneri tiv@` "; std::cin>>makardak;
	for(int i=1;i<=makardak;++i)
	sum+=tiv*i;
	std::cout<<"senyakneri tiv@ klini` "<<sum<<std::endl;
	return 0;
}
