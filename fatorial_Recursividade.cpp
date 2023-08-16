#include <iostream>
int fatorial(int valor) {
  if (valor != 1) {
    return valor * fatorial(valor - 1);
  } else {
    return valor;
  }
}
int main() {
  int resultado, numero;

  printf("\n Digite um número para o calcular seu fatorial: ");
  scanf("%d", &numero);

  resultado = fatorial(numero);

  printf("\n Resultado: %d",resultado);
}