#include <iostream>
float calcularMassa(float a, float b) {
  const float mA = 321.43;
  const float mB = 150.72;

  printf("\n 1,2 : 1,0 \t = %.2f", ((1.2*mA)+(1*mB)));
  printf("\n 1,4 : 1,0 \t = %.2f", ((1.4*mA)+(1*mB)));
  printf("\n 1,0 : 1,6 \t = %.2f", ((1*mA)+(1.6*mB)));

  return (a*mA) + (b*mB);
}
int main() {
  float a = 0, b= 0, resultado = 0;

  printf("\n Digite a massa do elemento A e B:  ");
  scanf("%f %f", &a, &b);

  resultado = calcularMassa(a,b);

  printf("\n Resultado: %.2f", resultado);
  return 0;
}