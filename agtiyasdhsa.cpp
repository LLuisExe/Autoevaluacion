#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "b: " << b << endl;
    cout << "&b: " << &b << endl;
    cout << "c: " << c << endl;
    cout << "&c: " << &c << endl;
    
    int arr[3];
    cout << "Casilla 0: " << &arr[0] << endl;
    cout << "Casilla 1: " << &arr[1] << endl;
    cout << "Casilla 2: " << &arr[2] << endl;

    return 0;
}
