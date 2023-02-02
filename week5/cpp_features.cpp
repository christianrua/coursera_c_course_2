// Some C++ easy to use features
// Christian Rua
// Feb 01, 2023
// use auto internal declaration and for(int i ...)

#include <iostream>
using namespace :: std;

long long fact(int n){
    long long f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int main(void){
    cout << "This program uses some features not in C89\n";
    for(auto i = 0; i < 16; i++){
        cout << "factorial of " << i << " is " << fact(i) << endl;
    }
    cout << " Thats all folks!" << endl;
}