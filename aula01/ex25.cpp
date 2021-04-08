#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    switch(num) {
        case 1:
            cout << "\nVocê digitou um!";
            break;
        case 2:
            cout << "\nVocê digitou dois!";
            break;
        case 3:
            cout << "\nVocê digitou três!";
            break;
        case 4:
            cout << "\nVocê digitou quatro!";
            break;
        case 5:
            cout << "\nVocê digitou cinco!";
            break;
        default:
            cout << "\nVocê digitou um número maior que cinco!";
            break;
    }
    cout << "\n";
    return 0;
}
