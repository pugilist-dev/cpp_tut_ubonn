#include <iostream>
using std::cout; using std::endl;

struct Counted{
	Counted(){Counted:: count++;}
	~Counted(){Counted:: count--;}
	static int count;	// nstatic counter number
};

int Counted::count = 0;

int main(){
	Counted a,b;
	cout << "Count:"<<Counted::count << endl;
	Counted c;
	cout << "Count:"<<Counted::count << endl;

	return 0;
}
