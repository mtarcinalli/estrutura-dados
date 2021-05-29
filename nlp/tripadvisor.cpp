#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

#include "Lista.cpp"
#include "ListaPalavras.cpp"

bool ehSeparador(char ch) {
    string separadores = ".,!? ():/";
    for (int i =0 ; i <= separadores.length() ; i++) {
        if (ch == separadores[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string linha, auxIdAnalise, auxIdHotel, auxAnalise, nomeArquivo, auxPalavra, sentimento;
    int i, idAnalise, idHotel, auxIdHotelInt;
    int contPositivas, contNegativas;
    int pPositivas, pNegativas;
    int contPositivasHotel, contNegativasHotel;
    
    vector<string> palavras;
    ListaPalavras palavrasPositivas, palavrasNegativas;

    Lista listaHotel;
        


    //;@,emot,-1,A
    //;*,emot,-1,A
    //;**,emot,-1,A
    //;~,emot,-1,A
    nomeArquivo = "lexicos/opinionLexicon/lexico_v3.0.txt";
    ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            while (getline(arquivo, linha)) {
                //cout << linha << "\n";
                auxPalavra = "";
                for (i = 0 ; linha[i] != ',' ; i++ ) {
                    auxPalavra += linha[i];
                }
                // movendo indice até a próxima ,
                for (i++ ; linha[i] != ',' ; i++ );
                sentimento = "";
                for (i++ ; linha[i] != ',' ; i++ ) {
                    sentimento += linha[i];
                }
                //cout << "-" << auxPalavra << "|" << sentimento << "|\n";
                if (sentimento == "-1") {
                    palavrasNegativas.inserirFinal(auxPalavra);
                }
                if (sentimento == "1") {
                    palavrasPositivas.inserirFinal(auxPalavra);
                }
            }
        }
    cout << "pos:" << palavrasPositivas.listar(20) << "\n\n";
    cout << "neg:" << palavrasNegativas.listar(20) << "\n\n";



    for (idHotel = 0 ;  idHotel < 10 ; idHotel++) {

        auxIdHotel = to_string(idHotel);
        nomeArquivo = "datasets/tripadvisor/Reviews/hotel" + auxIdHotel + ".txt";
        cout << "nomeArquivo:" << nomeArquivo << "-\n";
        

        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            while (getline(arquivo, linha)) {
                palavras.clear();
                auxIdAnalise = "";

                for (i = 3 ; linha[i] != ' ' ; i++ ) {
                    auxIdAnalise = auxIdAnalise + linha[i];
                }
                idAnalise = stoi(auxIdAnalise);

                i += 3;
                auxAnalise = "";
                auxPalavra = "";
                for ( ; i <= linha.length() ; i++ ) {
                    auxAnalise += tolower(linha[i]);
                    if (ehSeparador(linha[i])) {
                        if (auxPalavra != "")
                            palavras.push_back(auxPalavra);
                        auxPalavra = "";
                    } else {
                        auxPalavra += tolower(linha[i]);
                    }
                }

                listaHotel.inserir(
                        listaHotel.tamanho()+1, 
                        idHotel, 
                        idAnalise, 
                        auxAnalise,
                        palavras
                        );
            }
            arquivo.close();
        }
        else {
            cout << "Não foi possível abrir o arquivo!\n"; 
        }

    }

    cout << "tamanho:" << listaHotel.tamanho() << "\n";


    auxIdHotelInt = 0;
    contPositivasHotel = 0;
    contNegativasHotel = 0;

    while (listaHotel.remover(1, idHotel, idAnalise, auxAnalise, palavras)) {
        if (auxIdHotelInt != idHotel) {
            pPositivas = contPositivasHotel * 100 / (contPositivasHotel + contNegativasHotel);
            pNegativas = contNegativasHotel * 100 / (contPositivasHotel + contNegativasHotel);
            cout << "idHotel: " << auxIdHotelInt 
                    << "\tpositivas: " 
                    //<< contPositivasHotel << " \t " 
                    << pPositivas << " % "
                    << "\tnegativas: " 
                    //<< contNegativasHotel << " \t " 
                    << pNegativas << " % "
                    << "\n";
            contPositivasHotel = 0;
            contNegativasHotel = 0;
        }

        contNegativas = 0;
        contPositivas = 0;
        for (int i=0 ; i < palavras.size() ; i++) {
            //cout << palavras[i] << "-";
            if (palavrasNegativas.estaNaLista(palavras[i])) {
                contNegativas++;
            }
            if (palavrasPositivas.estaNaLista(palavras[i])) {
                contPositivas++;
            }
        }
        //cout << "idHotel:" << idHotel 
        //        << "\tidAnalise:" << idAnalise 
        //        << "\tpalavras: " << palavras.size()
        //        << "\tnegativas: " << contNegativas 
        //        << "\tpositivas: " << contPositivas 
        //        << "\n";
        contPositivasHotel += contPositivas;
        contNegativasHotel += contNegativas;

        auxIdHotelInt = idHotel;

    }
    cout << "idHotel: " << auxIdHotelInt 
            << "\tpositivas: " 
            //<< contPositivasHotel << " \t " 
            << pPositivas << " % "
            << "\tnegativas: " 
            //<< contNegativasHotel << " \t " 
            << pNegativas << " % "
            << "\n";
}