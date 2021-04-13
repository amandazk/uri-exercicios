#include <stdio.h> 
#include <stdlib.h>

typedef struct pilha { // guarda os nós da Pilha
//   int info;
  char letra;//letras da palavra
  struct pilha *prox;
}Pilha;

// função de inicialização: retorna uma Pilha vazia
void inicializa(Pilha **l)
{
  *l = NULL;
}

int vazia (Pilha* l)
{
  return (l == NULL); //retorna 1 se l for igual a null (vazia)
}

// nessa funcao para inserir na lista.
Pilha* push(Pilha *p, char v)
{
  // cria uma pilha temporaria para fazer as insercoes
  Pilha* temp = (Pilha *)malloc(sizeof(Pilha));
  // coloca v dentro de letra
  temp->letra = v;


  printf("\n Adicionou a letra: ");
  temp->prox = p;

  // coloca temp em p para retornar p, eu poderia retornar temp, mas assim fica mais legivel
  p = temp;
  // print para teste, ver o ultimo valor de p
  printf("%c \n", p->letra);

  return p;
}

// exclui o ultimo valor da pilha
int pop(Pilha **p)
{
  // se a pilha esta vazia ele retorna -1, indicando que nao deu pra excluir
    if (vazia(*p) == 1)
    {
        printf("\n Pilha está vazia. \n");
        return -1;
    }
  // cria uma pilha temporaria q e uma temp
    else
    {  
        printf("\n Apagando ultimo valor. \n");

        Pilha* q = *p;
        Pilha *temp = q;
        // salvando a posicao prox que ele aponta na variavel temp
        temp = q->prox;
        // limpando q
        free(q);
        // atribuindo q->prox na pilha real, substituindo o que ela ja tinha
        *p = temp;
        // printf("\n %d \n", vazia(*p));
        return 0;
    }
}
// pesquisa por um valor v
// int pesquisa(Pilha* p){
//     // pede para ao usuario o valor para pesquisar
//     int v;
//     printf("digite um valor para pesquisar: ");
//     scanf("%d",&v);
//     // cria uma pilha temṕoraria
//     Pilha* temp1 = p;
//     printf(" \n procurando o valor %d \n",v);
//     // se a pilha so tiver 1 elemento ele faz uma busca simples comparando esse elemento
//     if(vazia(temp1->prox)==1){
//       // compara o elemento com o primeiro valor da pilha
//       if(temp1->info==v){
//           printf("\n Achou o valor %d \n",temp1->info);
//           return temp1->info;
//         }
//         // se ele nao for igual, a pilha nao tem esse valor
//       else{
//           printf("\n nao achou \n");
//           return -1;
//         }
//     }
//     // enquanto vazia retornar 0, se info for igual a oq o usuario digitar, ele achou o elemento, se nao, ele exclue esse elemento da lista temporaria e faz o if de novo, printando entrou toda vez que ele passar pelo else, para ficar melhor de visualizar 
//       while(vazia(temp1) != 1){
//         if(temp1->info==v){
//           printf("\n Achou o valor %d \n",temp1->info);
//           return temp1->info; 
//         }
//         else{
//           printf("\n entrou no else \n");
//           printf("\n temp1 = temp1->prox \n");
//           printf("\n %d foi substituido por %d \n", temp1->info,temp1->prox->info);

//           // pop(&temp1);
//           temp1 = temp1->prox;
//         }
//       }

//     printf("\n n achou nada otario \n");
//     return -1;
    
// }

void printaPrimeiroValor (Pilha* l)
{
  printf("\n Primeiro valor é: %c \n", l->letra);
}

// void printaSegundoValor (Pilha* l)
// {
//   printf("\n Segundo valor é: %d \n",l->prox->info);
// }

void imprimePilha(Pilha* p){
  Pilha* temp = p;

  while(vazia(temp) == 1){
    printf("\n %c \n" ,temp->letra);
    temp = temp->prox;
  }
}

int main(void) {
  Pilha *l;
  inicializa(&l); // passando o endereço do ponteiro
  
  int qtd;
  char l1,l2,l3,l4;

  printf("\n Quantas pessoas tem?");
  scanf("%d",&qtd);

  while(qtd>0){
    // scanf(" %c",&l1);
    // push(l, l1);
    // scanf(" %c",&l2);
    // push(l, l2);
    // scanf(" %c",&l3);
    // push(l, l3);
    // scanf(" %c",&l4);
    // push(l, l4);
    scanf(" %c %c %c %c", &l1, &l2, &l3, &l4);

    push(l, l1);
    push(l, l2);
    push(l, l3);
    push(l, l4);

    qtd = qtd-1;
  }

  // printaPrimeiroValor(l);
  // imprimePilha(l);
  // pop(&l);
  // pesquisa(l, 8);
  // printf("\n status da pilha: %d \n", vazia(l));

  // printf("\n %p \n", l); //valor de lista é NULL
}