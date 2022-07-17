#include <iostream>
using std::cout;
using std::endl;

class Blah{
	public:
		void SomeFunc(){cout<<"Non Const"<< endl;}
		void SomeFunc() const {cout << "const"<<endl;}

};

int main() {
	Blah blah;
	const Blah& blah_ref = blah;
	blah.SomeFunc();
	blah_ref.SomeFunc();
	return 0;
}