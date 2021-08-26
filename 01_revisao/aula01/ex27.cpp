#include <iostream>
using namespace std;

int main() {
    int matriz2D[4][3] = { {2, 4 ,6},
                            {8, 10, 12},
                            {14, 16, 18},
                            {20, 22, 24}
                            };
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz2D[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
