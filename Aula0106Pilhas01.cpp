#include <stdio.h>
#include <stdlib.h>
#include <iostream>


struct prato
{
	char cor;
	struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha;

void add(char cor){

	Prato *p = (Prato*) malloc(sizeof(Prato));
	p->cor = cor;
	p->prox = pilha;
	pilha = p;
}

void imprime(Prato *p){
	if(p!=NULL){
		printf("\n Cor do prato %c",p->cor);
		imprime(p->prox);
	}
}

void rem(){
	if(pilha == NULL){
		printf("Pilha Vazia");
	}else{
		pilha = pilha->prox;
	}
}
int main(void){

add('a');
add('b');
add('r');
add('g');
add('y');
add('j');

rem();

Prato *pilhaAux = pilha;

imprime(pilhaAux);






	
return 0;	
}

