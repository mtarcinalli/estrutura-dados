#include <iostream>
using namespace std;

void func1(int y) {
  y++;
  cout << "y em func1:\t" << y << "\n";
}

void func2(int &y) {
  y++;
  cout << "y em func2:\t" << y << "\n";
}

int main() {
  int y = 3;
  cout << "y em main: \t" << y << "\n";
  //getchar();

  func1(y);
  //getchar();

  cout << "y em main: \t" << y << "\n\n";
  //getchar();

  func2(y);
  //getchar();

  cout << "y em main: \t" << y << "\n";
}
