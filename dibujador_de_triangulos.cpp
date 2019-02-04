#include <iostream>
using namespace std;
/*
YO HE ENCONTRADO ESTE PROBLEMA IMPOSIBELE DESDE
  EL CONOCIMIENTO QUE ACTUALMENTE TENGO; SI TU SABES
  COMO RESOLVERLO PORFAVOR DEJAMELO SABER
  GRÁCIAS
  */
int main() {
  int h,b,c=0;
  std::cout << "INGRESE LA BASE:";
  std::cin >> b;
  std::cout << "INGRESE LA ALTURA: ";
  std::cin >> h;
//¡ATENCIÓN!
//Lo que viene a continuación esta mal
if (c<b) {
  for (int i = 1; i == i; i++) {
    for (int e = 1; e <= i; e++) {
      std::cout << "*";
    }
    std::cout<< '\n';
    c++;
  }

}

/*
Con un solo dato (unico para base y altura)
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
