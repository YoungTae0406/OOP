#include <iostream>

int main() {
	char target[] = "Kim YeongTae";
	long b[73];
	int a = 17;
	int i = 612;
	int *c = new int[950];
	char * copy = "is no no";
	char name = 'a';
	std::cout << (void*)&name << std::endl;
	std::cout << &target << std::endl;
	std::cout << &name+i << std::endl;
}
