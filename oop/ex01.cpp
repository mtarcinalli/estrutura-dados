#include <iostream>
using namespace std;

class Carro {
    public:
        string marca;
        string modelo;
        int ano;
};

int main() {
	
	Carro carro1;
	carro1.marca = "Volks";
	carro1.modelo = "Fusca";
	carro1.ano = 1985;
	
	cout << carro1.marca;
	
	
}
