#include <iostream>
#include <locale.h>
#include "Sacola.cpp"

using namespace std;


int main() {
    setlocale(LC_ALL, "portuguese");
    
    Sacola minhaSacola;

    if (minhaSacola.vazia()) {
        cout << "Está vazia!";
    }

}

