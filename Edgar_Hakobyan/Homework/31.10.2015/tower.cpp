<<<<<<< HEAD
#include <iostream>
int texapoxel(int xoranard,int mijin_arjeq)
{
	if(xoranard>mijin_arjeq)
	{
		return xoranard-mijin_arjeq;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	std::cout<<"greq ashtarakneri qanak@ ";
	std::cin>>n;
	int mijin_arjeq=0;
	int texapoxvox_xoranardneri_qanak=0;
	int xoranard[n];
	int sum=0;
	for(int i=0; i<n; ++i)
	{
		std::cout<<"greq ashtarakum xoranardneri qanak@ ";
		std::cin>>xoranard[i];
		sum+=xoranard[i];
	}
	if(sum%n == 0)
	{
		mijin_arjeq=sum/n;
		for(int i=0; i<n; ++i)
		{
			texapoxvox_xoranardneri_qanak+=texapoxel(xoranard[i],mijin_arjeq);
		}
		std::cout<<"texapoxvox xoranardneri qanak@ klini "<<texapoxvox_xoranardneri_qanak<<std::endl;
	}
	else
	{
		std::cout<<"hnaravor che havasarecnel xoranardneri qanakner@ "<<std::endl;
	}
	return 0;
}
=======
#include <iostream>
int texapoxel(int xoranard,int mijin_arjeq)
{
	if(xoranard>mijin_arjeq)
	{
		return xoranard-mijin_arjeq;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	std::cout<<"greq ashtarakneri qanak@ ";
	std::cin>>n;
	int mijin_arjeq=0;
	int texapoxvox_xoranardneri_qanak=0;
	int xoranard[n];
	int sum=0;
	for(int i=0; i<n; ++i)
	{
		std::cout<<"greq ashtarakum xoranardneri qanak@ ";
		std::cin>>xoranard[i];
		sum+=xoranard[i];
	}
	if(sum%n == 0)
	{
		mijin_arjeq=sum/n;
		for(int i=0; i<n; ++i)
		{
			texapoxvox_xoranardneri_qanak+=texapoxel(xoranard[i],mijin_arjeq);
		}
		std::cout<<"texapoxvox xoranardneri qanak@ klini "<<texapoxvox_xoranardneri_qanak<<std::endl;
	}
	else
	{
		std::cout<<"hnaravor che havasarecnel xoranardneri qanakner@ "<<std::endl;
	}
	return 0;
}
>>>>>>> f679108a02b8fafc890c5db925e631ee7d79ea23
