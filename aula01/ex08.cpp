#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    std::cout.setf(ios::fixed);    
    cout << "Tipo\t\t\tTamanho\t\tValores\n";
    
    cout <<"short int: \t\t"
        << sizeof(short int)
        << " bytes\t\t"
        << setprecision(0) << pow(2,8*sizeof(unsigned short int))/2*-1
        << " a "
        << pow(2,8*sizeof(unsigned short int))/2-1
        << "\n";

    cout << "unsigned short int: \t"
        << sizeof(unsigned short int)
        << " bytes\t\t"
        << 0
        << " a "
        << pow(2,8*sizeof(unsigned short int))-1
        << "\n";
    
    cout <<"int: \t\t\t"
        << sizeof(int)
        << " bytes\t\t"
        << pow(2,8*sizeof(int))/2*-1
        << " a "
        << pow(2,8*sizeof(int))/2-1
        << "\n";

    
    cout << "unsigned int: \t\t"
        << sizeof(unsigned int)
        << " bytes\t\t"
        << 0
        << " a "
        << pow(2,8*sizeof(int))-1
        << "\n";

    cout <<"long int: \t\t"
        << sizeof(long int)
        << " bytes\t\t"
        << pow(2,8*sizeof(long int))/2*-1
        << " a "
        << (pow(2,8*sizeof(long int))/2)-1
        << "\n";

    cout << "unsigned long int: \t"
        << sizeof(unsigned long int)
        << " bytes\t\t"
        << 0
        << " a "
        << pow(2,8*sizeof(unsigned long int))-1
        << "\n";
    return 0;
}
