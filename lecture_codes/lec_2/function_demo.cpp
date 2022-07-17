#include <vector>
#include <iostream>


std::vector<int> CreateVectorOfFullSquares(int size){
	std::vector<int> result(size);	// Vector of size size
	for (int i=0; i<size; ++i){ result[i] =i*i;}
	return result;
}

int main(){
	auto squares = CreateVectorOfFullSquares(10);
	for(int i=0; i<squares.size(); ++i){
		std::cout << squares[i] <<std::endl;
	}
	return 0;
}