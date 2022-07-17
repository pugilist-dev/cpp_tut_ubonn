#include <iostream>
#include <memory>
#include <string>
using std::cout;
using std::endl;


class Entity{
	public :
		Entity(){
			cout<< "Created Entity!"<< endl;
		}
		~Entity(){
			cout<< "Destroyed Entity!"<< endl;
		}
		void Print(){}
};

void main(){
	{
		std::unique_ptr<Entity> SharedEntity = std::make_shared<Entity>();
		SharedEntity->Print();
	}
}
