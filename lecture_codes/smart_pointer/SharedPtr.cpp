#include <iostream>
#include <memory>
#include <string>
using std::cout; using std::endl;


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

int main(){
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> SharedEntity = std::make_shared<Entity>();
			e0 = SharedEntity;
		}
	}
	std::cin.get();
	return 0;
}
