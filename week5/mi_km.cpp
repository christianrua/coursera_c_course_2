// Miles are Converted to Kilometers
// Christian Rua
// Jan 30, 2023
// First use of C++

#include <iostream>
using namespace :: std;
const double m_to_k = 1.609;

inline double convert(int mi){ return (mi * m_to_k);}
int main(void){
    int miles = 1;

    while(miles != 0){
        cout << "Input distance in miles or O to terminate: ";
        cin >> miles;
        cout << "\nDistance is " << convert(miles) << " km." << endl;
    }
    cout << endl;
}