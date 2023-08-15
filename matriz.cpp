#include <iostream>

int main() {
  int linha, coluna;
  int matriz[2][2];
  // FOR para adiconar valor
  for (linha = 0; linha < 2; linha++) {
    for (coluna = 0; coluna < 2; coluna++) {
      printf("\n Digite os valores da matriz para a linha %d e para a coluna "
             "%d:    ",
             linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }
  }

  // FOR para percorrer e mostrar valor
  for (linha = 0; linha < 2; linha++) {
    for (coluna = 0; coluna < 2; coluna++) {
      printf("%d\t", matriz[linha][coluna]);
      printf("\n Veja a sua matriz");
      printf("\n\n");
    }
  }
  system("pause");
  return 0;
}