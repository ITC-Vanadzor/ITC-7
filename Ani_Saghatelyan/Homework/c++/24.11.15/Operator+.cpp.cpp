// Sum of 3 objects of type T using the operator +
# include <iostream>

struct  T
{
   int a;
   T& operator + (const T& rhs)
   { 
	   std::cout<<"Operator + for  this:\t"<<this<<" & rhs:\t"<<&rhs<<std::endl; 
	   this->a+=rhs.a;
	   return *this;
   };

   T();
   T(int b);
   ~T()
   {
		std::cout<<this<<"  Called Destructor\n";
	};
};


T::T():a(5){
	std::cout<<this<<"  Called  Constructor\n";
}

T::T(int b):a(b){
	std::cout<<this<<"  Called  Constructor(int)\n";
}

 int main()
 {
	 T Obj1;
	 T Obj2(3);
	 T Obj3;
	 Obj3.a=2;
	 Obj1+Obj2+Obj3;//goes from left to right, writting the result int first Objec----- operator+(&Obj1,Obj2).....operator+(&Obj1,Obj3)
	 //std::cout<< "Sum\t"<<k<<std::endl;
	 return 0;
 }