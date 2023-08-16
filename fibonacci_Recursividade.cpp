#include <iostream>
int fibonacci(int n){
  if(n==0)  return 0;
  else{
    if(n==1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
    
  }
}
int main() {
  int numero, resultado;

  printf("Digite um numero para o calculo da sequência fibonacci: ");
  scanf("%d",&numero);

  resultado = fibonacci(numero);

  printf("\n Resultado: %d", resultado);

  
}