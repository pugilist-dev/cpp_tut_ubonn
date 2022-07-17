#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]){
	std::vector<int> numbers = {1, 2, 3};
	std::vector<std::string> names = {"Rajiv", "Mandya"};
	std::cout << "The size of the names vector before adding is: "<< names.size()<< std::endl;
	names.push_back("Nagaraju");
	std::cout << "First Name: "<< names.front() <<std::endl;
	std::cout << "Last Number: "<< numbers.back() <<std::endl;
	std::cout << "The size of the name vector is: "<< names.size()<< std::endl;
	numbers.push_back(4);
	for(int i=0; i<numbers.size();++i){
		std::cout << numbers[i] <<std::endl;
}
	return 0;

}