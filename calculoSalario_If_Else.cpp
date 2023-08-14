#include <iostream>

int main() {
  
  float salario, inss, salarioLiquido;
  printf("Digite seu salário bruto:  ");
  scanf("%f",&salario);

  if(salario<=1693.72){
    inss= salario * 0.08;
  }
  else if(salario>=1693.73 && salario<=2822.90 ){
     inss= salario * 0.09;
  }
  else if(salario>=2822.91 && salario<=5646.80 ){
    inss= salario * 0.11;
  }else{
    inss=621.04;
  }

  salarioLiquido=salario-inss;
  printf("\n Desconto do INSS: %.2f\n",inss);
  printf("\n Salario líquido: %.2f \n", salarioLiquido);
  
  return 0;
}