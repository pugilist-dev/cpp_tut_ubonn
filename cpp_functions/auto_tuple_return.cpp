#include <iostream>
#include <tuple>
using namespace std;
auto foo(){
    return make_tuple("Super Variable", 5);
}

int main(){
    auto [name, value] = foo();
    cout<<name<<" has value "<<value<<endl;
    return 0;
}