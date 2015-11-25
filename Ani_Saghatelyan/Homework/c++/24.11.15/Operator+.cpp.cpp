// Sum of 3 objects of type T using the operator +
# include <iostream>

struct  T
{
   int a;
   T operator + (const T& rhs)
   { 
	   std::cout<<"Operator + for  this:\t"<<this<<" & rhs:\t"<<&rhs<<std::endl; 
	   T tmp;
	   tmp.a=a+rhs.a;
	   return tmp;
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
	 std::cout<<  " Obj1.a "<< Obj1.a<<std::endl;
	 T Obj2(3);
	 std::cout<<  " Obj2.a "<< Obj2.a<<std::endl;
	 T Obj3;
	 Obj3.a=2;
	 std::cout<<  " Obj3.a "<< Obj3.a<<std::endl;
	 T Sum=Obj1+Obj2+Obj3;
	 std::cout<<"Sum.a  "<<Sum.a<<std::endl;//goes from left to right, writting the result int first Objec----- operator+(&Obj1,Obj2).....operator+(&Obj1,Obj3)
	 //std::cout<< "Sum\t"<<k<<std::endl;
	 return 0;
 }
