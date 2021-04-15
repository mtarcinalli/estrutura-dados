#include <iostream>
using namespace std;

void func1(int y) {
  y++;
  cout << "y em func1:\t" << y << "\n";
  cout << "end y: \t" << &y << "\n\n";
}

void func2(int *py) {
  (*py)++;
  cout << "y em func2:\t" << *py << "\n";
  cout << "end py:\t" << py << "\n\n";
}

int main() {
  string a;
  int y = 3;
  cout << "y em main: \t" << y << "\n";
  cout << "end y: \t" << &y << "\n\n";
  //getchar();

  func1(y);
  //getchar();

  cout << "y em main: \t" << y << "\n";
  cout << "end y: \t" << &y << "\n\n";
  //getchar();

  func2(&y);
  //getchar();

  cout << "y em main: \t" << y << "\n";
  cout << "end y: \t" << &y << "\n\n";
}
