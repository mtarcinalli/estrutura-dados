#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "Lista.cpp"

int main() {
    string linha, auxIdAnalise, auxIdHotel, auxAnalise, nomeArquivo;
    int i, idAnalise, idHotel;

    Lista listaHotel;
    
    cout << listaHotel.tamanho();


    for (idHotel = 0 ;  idHotel < 10 ; idHotel++) {
        auxIdHotel = to_string(idHotel);
        nomeArquivo = "datasets/tripadvisor/Reviews/hotel" + auxIdHotel + ".txt";
        cout << "nomeArquivo:" << nomeArquivo << "-\n";

        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            while (getline(arquivo, linha)) {
                auxIdAnalise = "";
                for (i = 3 ; linha[i] != ' ' ; i++ ) {
                    auxIdAnalise = auxIdAnalise + linha[i];
                }
                idAnalise = stoi(auxIdAnalise);

                i += 3;
                auxAnalise = "";
                for ( ; i <= linha.length() ; i++ ) {
                    auxAnalise += linha[i];
                }


                listaHotel.inserir(
                        listaHotel.tamanho()+1, 
                        idHotel, 
                        idAnalise, 
                        auxAnalise);
                //cout << linha << "\n\n";
            }
            arquivo.close();
        }
        else {
            cout << "Não foi possível abrir o arquivo!\n"; 
        }

    }

    cout << "tamanho:" << listaHotel.tamanho() << "\n";
    //return 0;


    while (listaHotel.remover(1, idHotel, idAnalise, auxAnalise)) {
        cout << "idHotel:" << idHotel << "-\n";
        cout << "idAnalise:" << idAnalise << "-\n";
        cout << "analise:" << auxAnalise << "--\n";
    }
    cout << "tamanho:" << listaHotel.tamanho() << "\n";
}