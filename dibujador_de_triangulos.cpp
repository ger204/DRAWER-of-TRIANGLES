#include <iostream>
using namespace std;
int main() {
  int h,b;
  std::cout << "INGRESE LA BASE:";
  std::cin >> b;
  std::cout << "INGRESE LA ALTURA";
  std::cin >> h;

/*
Amb una sola dada (unica per base i altura)
  for (int i = 1; i <= h; i++) {
    for (int e = 1; e <= i; e++) {
      std::cout << "*";
    }
    std::cout<< '\n';
  }


  i=1
  e=1
  *
  i=2
  e=1
  **
  i=3
  e=1
  ***
  i=4
  e=1
  ****
    */
  return 0;
}
