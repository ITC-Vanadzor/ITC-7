#include <iostream>
//Structurayum static popoxakaniev funkciayi kirarman orinak
//stexcvac Test tesaki objektneri qanaki voroshum
struct Type {
    Type () {
	std::cout << "Created" <<std::endl;
    }
    ~Type () {
	std::cout << "Deleted" << std::endl;
    }
};
struct test {
    static int count;
    static void getcount();
    Type tmp;
    test () {
	++count;
	getcount();
	};
    test (int c) {
	++count;
	getcount();
	};
    test (const test& f) { 
	++count;
	getcount();
	};
    ~test() {
	--count;
	getcount();
	};
};

int test::count =0;
void test::getcount(){
	std::cout << "Count of objects Test -- " << count <<std::endl;
    }

int main () {
    test y1;
    test y2;
    test y3(3);
    test y4=y1;  
    return 0;
}
