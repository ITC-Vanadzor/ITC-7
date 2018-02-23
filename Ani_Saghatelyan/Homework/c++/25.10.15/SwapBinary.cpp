// tsragir, vorn aranc nor popoxakan stextselu poxum e popoxakanneri arjeqner@
// ogtvum enq XOR operatoric
# include <iostream>
using namespace std;

int main()
{
	int number1,number2;
	cout<<"Enter  number1\t";
	cin>>number1;
	cout<<"Enter  number2\t";
	cin>>number2;

	number1=number1^number2;// arajin popoxakanum pahum enq 2 tveri XOR -@
	number2=number2^number1;// erkrord popoxakanum 2 tveri XOR-in noric XOR enq anum erkrord tiv@
	number1=number1^number2;// arajin popoxakanum number2-um arka arden naxkin number1-i arjein XOR ena anum 2tveri XOR@

	cout<<" The numbers aresSwaping  \n";
	cout<<"number1\t"<<number1<<"\nnumber2 "<<number2<<endl;
	return 0;
}


