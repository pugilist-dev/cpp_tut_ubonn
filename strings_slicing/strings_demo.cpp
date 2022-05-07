#include <cstring>
#include <iostream>
using namespace std;

int main() {
    const char source[] = "Copy this!";
    char dest[5];
    cout<<source<<endl;

    strcpy(dest, source);
    cout<<dest<<endl;
    cout<<source<<endl;
    return 0;
}