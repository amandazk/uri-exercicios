#include <stdio.h> 
#include <stdlib.h> 

typedef struct pilha { // guarda os nós da Pilha
  char letra; // letras da palavra
  struct pilha *prox;
}Pilha;

// função de inicialização -> retorna uma Pilha vazia
void inicializa(Pilha **l)
{
  *l = NULL;
}

int vazia (Pilha* l)
{
  return (l == NULL); // retorna 1 se l for igual a null (vazia)
}

// função para inserir na lista
Pilha* push(Pilha *p, char v)
{
  // cria uma pilha temporaria para fazer as insercoes
  Pilha* temp = (Pilha *)malloc(sizeof(Pilha));
  // coloca v dentro de letra
  temp->letra = v;


  printf("\n Adicionou a letra: ");
  temp->prox = p;

  // coloca temp em p para retornar p
  p = temp;

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
        return 0;
    }
}

// printa o valor do topo
void printaPrimeiroValor (Pilha* l)
{
  printf("\n Primeiro valor é: %c \n",l->letra);
}

// mostra valores da pilha
void imprimePilha(Pilha* p){
  Pilha* temp = p;

  while(vazia(temp) != 1){
    printf("%c " ,temp->letra);
    temp = temp->prox;
  }
}

// conta as vitórias e dá um pop nos caracteres
int verificaGanhador(Pilha* p){
  Pilha* temp = p;
  int count = 8;
  int count2 = 0;
  char letras[8];

  while(count>0){
    letras[count2] = temp->letra;
    printf("%c " ,temp->letra);
    temp = temp->prox;
    count -= 1;
    count2 += 1;
  }
  if(letras[0] == letras[7] && letras[1] == letras[6] && letras[2] == letras[5]
  && letras[3] == letras[4]){
    printf("\n ganhador \n");
    count = 8;
    while(count>0){
      pop(&p);
      count-=1;
    }
    return 1;
  }
  return 0;
}

Pilha* preenchePilha(Pilha* p){
  if(vazia(p) == 1){
    p=push(p,'F');
    p=push(p,'A');
    p=push(p,'C');
    p=push(p,'E');
  }
  return p;
}

int main(void) {
  Pilha *l;
  inicializa(&l); // estou passando o endereço do ponteiro
  
  int qtd;
  char l1,l2,l3,l4;

  l = preenchePilha(l);
  printf("\n");

  imprimePilha(l);
  printf("\n");

  printf("\n Quantas pessoas tem?");
  scanf("%d",&qtd);
  int count = 0;
  while(qtd>0){
    scanf(" %c %c %c %c", &l1, &l2, &l3, &l4);
   
    l = push(l, l1);
    l = push(l, l2);
    l = push(l, l3);
    l = push(l, l4);
    qtd = qtd-1;
    if(verificaGanhador(l)==1){ // número de vitórias
      count +=1;
    }
    l = preenchePilha(l);
  }
  printf("\n numero de vitorias: %d",count);
  printf("\n");
  imprimePilha(l); // verificando situação da pilha
  printf("\n");
}