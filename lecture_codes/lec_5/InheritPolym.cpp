#include <iostream>

using std::cout; using std::endl;

class Rect{
	public:
		Rect(int w, int h): w_(w), h_(h){}
		virtual void Print() const {
			cout<< "width and height of the rectangle: " << w() << " "<< h() << endl;
		}
		int w() const { return w_;}
		int h() const { return h_;}
	protected:
		int w_ = 0;
		int h_ = 0;
};

class Square: public Rect{
	public:
		explicit Square(const int size): Rect(size, size){}
		void Print() const override{
			cout<< "width and height of the square: " << w() << " "<< h() << endl;
		}
};

void Print(const Rect& rect){rect.Print();}

int main(){
	Rect rectangle{10, 20};
	Square square{10};
	Print(rectangle);
	Print(square);
	
	return 0;
}