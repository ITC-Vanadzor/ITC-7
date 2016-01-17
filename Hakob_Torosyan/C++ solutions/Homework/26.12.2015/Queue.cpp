#include <iostream>

class queue {
	int q[100];
	int sloc;
	int who;
	public:
	queue(int);
	void push(int);
	void pop(int);
	void get(int);
	~queue();
};

queue::queue(int id){
	sloc = -1;
	std::cout << "Created object queue " << std::endl;
	who = id;
	std::cout << "And gived " << id << " to " << "who" << std::endl;
	};
void queue::push(int a){
	if(sloc == 99){
		std::cout << "Wrong pushing " << std::endl;
		return;
	}
	sloc++;
	q[sloc] = a;
};
void queue::pop(int a){
	if(sloc == -1){
	std::cout << "We have not enything " << std::endl;
	return;
	}
	sloc--;
};
void queue::get(int i){
	if((i-1) > sloc){
	std::cout << "We have wrong inputing " << std::endl;
	return;
	}
	std::cout << q[i-1] << std::endl;
};
queue::~queue(){
	std::cout << "Destroing of object " << who << std::endl;
};
int main()
{
	queue* a = new queue(1); 
	queue* b = new queue(2);
	for(int i = 0; i <= 30; i+=2){
	a->push(i);
	b->push(i+1);
	}
	a->get(4);
	b->get(3);
	return 0;
}
