#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// 1° Monte o Struct
struct Node{
  int dado;
  struct Node *next;
};

//Funções que podem ser chamadas

//Função de inserir na lista
// Dois * porque estamos guardando dois valores em memória 
void insere_inicio(struct Node** inicio_ref, int new_dado){
    //Alocar memoria malloc(sizeof) pq não sabe qual o valor/tamanho da memória
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    //apontado para o dado dele
    new_node->dado = new_dado;
    //Pra percorrer a lista tem que chamar next
    // Utiliza o * pq chama o valor guardado em memória
    new_node->next = (*inicio_ref);
    // Apontar para o novo nó criado, pq no int main() esta apontando pra NULL
    //Para saber onde inicia a lista
    (*inicio_ref) = new_node;
  
}
//Função print lista
void printLista(struct Node *node){
  while(node != NULL){
    printf("%d",node->dado);
    node = node->next;
  }
}
int main() {
  //2° Passo declare o struct
  // Lista ligada inicia com NULL
  struct Node* inicio = NULL;
  //A função insere_inicio chamou a variável inicio do main() e depois inseriu o valor 7 que antes era NULL
  insere_inicio(&inicio,7);
  
  printf("\n Lista criada: ");
  printLista(inicio);
  return 0;
}