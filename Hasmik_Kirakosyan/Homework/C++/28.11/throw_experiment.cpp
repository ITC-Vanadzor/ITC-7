#include <iostream>

struct arr_obj {
	static int m_count;
	int m_data;
	arr_obj() {
		m_count++;
		std::cout<<"Object was created. num "<<m_count<<std::endl;
		if (m_count == 5) throw 1;
	}
	~arr_obj() {
		m_count--;
		std::cout<<"Object was deleted. num "<<m_count<<std::endl;
	}
};

int arr_obj::m_count = 0;


int main () {
	arr_obj* arr = new arr_obj[11];
	for (int i = 0; i<11; i++)
		arr[i].m_data = i;


delete []arr;
return 0;
}
