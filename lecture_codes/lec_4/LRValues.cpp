#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Printer{
	public:
		void Print(const string& str){
			cout<<"lvalue: "<<str<<endl;
			//some_string = str;
		}
		void Print(string&& str){
			cout<<"rvalue: "<<str<<endl; 
			some_string = str;
			cout<<"some string variable: "<<some_string<<endl;
		}
	private:
		string some_string;
};
void Print(const string& str){
	cout<<"lvalue: "<<str<<endl;
}

void Print(string&& str){
	cout<<"rvalue: "<<str<<endl;
}

int main(){
	string hello = "hi";
	Printer printer;
	printer.Print(hello);
	printer.Print("world");
	printer.Print(std::move(hello));
	cout<<"after move: "<< hello <<endl;

	return 0;
}