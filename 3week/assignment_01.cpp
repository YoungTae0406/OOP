#include <iostream>
	int data = 4;
	int bss;
void code() {
	
}
int rodata() {
	return 3;
}

int main() {
	int* heap = new int[2];
	int stack = 5;	

	std::cout << "code\t" << (void*)code << std::endl;
	std::cout << "Rodata\t" << (void*) rodata << std::endl;
	std::cout << "data\t" << &data << std::endl;
	std::cout << "Bss\t" << &bss << std::endl;
	std::cout << "Heap\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;	
}


