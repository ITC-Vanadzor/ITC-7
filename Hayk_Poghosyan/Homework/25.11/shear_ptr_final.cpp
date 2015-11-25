struct A
	{
		int* ptr;
		int *pt;
		A();
		A(int*);
		A(const A&);
		~A();
	};

	

	A::~A()
	{
		if (*ptr == 1)
		{
			delete pt;
		}

		--*ptr;

	}

	A::A(const A & F)
	{
		pt = F.pt;
		ptr = F.ptr;
		++*ptr;
	}


	A::A(int* t)
	{
		ptr = new int;
		*ptr = 0;
		pt = t;
	}

	A::A()

	{
	}

	int main()
	{
		int*p2 = new int;
		int*p1 = new int;
		A a(p1);
		A b(a);
		A c(p2);
		{
			A x(c);
		}
		return 0;
	}