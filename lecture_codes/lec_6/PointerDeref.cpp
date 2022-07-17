#include <iostream>

using std::cout;
using std::endl;

int main(){
	int a = 42;
	int* a_ptr = &a;
	int b = *a_ptr;
	int** a_ptr_ptr = &a_ptr;
	int c = **a_ptr_ptr;
	cout << "a= " << a << " b = "<< b <<" c= "<< c << endl;
	*a_ptr = 13;
	cout << "a= " << a << " b = "<< b <<" c= "<< c << endl;
	**a_ptr_ptr = 14;
	cout << "a= " << a << " b = "<< b <<" c= "<< c << endl;
	cout<<a_ptr<<a_ptr_ptr<<endl;
	return 0;
}