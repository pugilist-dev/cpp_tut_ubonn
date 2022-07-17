#include <iostream>

int main(){//this is a single line comment
	/*
	this is a multi-line comment
	C++ doesn't care about the comments
	*/
	std::cout<<"Hello World"<<std::endl;
	int some_number;

	std::cin>> some_number;
	std::cout<<"You entered the number: "<< some_number <<std::endl;
	std::cerr << "boaring error message" << std::endl;
	return 0;
}