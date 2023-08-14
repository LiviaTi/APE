#include <iostream>

int main() {
  int i;

  do {
    printf("\n Digite um número do sabor: \n");
    printf("\t (1) ...Flocos \n");
    printf("\t (2) ...Morango \n");
    printf("\t (3) ...Chocolate \n");
    printf("\t (4) ...Ninho \n");

    scanf("%d", &i);
  } while ((i < 1) || (i > 4));

  switch (i) {
  case 1:
    printf("\t \t Você escolheu flocos");
    break;

  case 2:
    printf("\t \t Você escolheu Morango");
    break;

  case 3:
    printf("\t \t Você escolheu Chocolate");
    break;

  case 4:
    printf("\t \t Você escolheu Ninho");
    break;
  }
  return 0;
}