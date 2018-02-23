#include <iostream>

struct Type {
    Type () {
	std::cout << "Created" <<std::endl;
    }
    ~Type () {
	std::cout << "Deleted" << std::endl;
    }
};
struct arr {
    static int count;
    static void getcount();
    Type tmp;
    arr () {
	++count;
	getcount();
	if (arr::count==3) {
	    throw 1;
	}
    };
    ~arr() {
	--count;
	getcount();
	};
};

int arr::count =0;
void arr::getcount(){
	std::cout << "Count of objects  -- " << count <<std::endl;
    }

int main () {
    arr* y1 = new arr[100] ;
    delete []y1;
    return 0;
}
