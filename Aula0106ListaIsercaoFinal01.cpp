#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct ponto
{
	float x;
	float y;
	struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;//aponta para o início da lista


void addFirst (float x, float y){
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p->prox = listaPontos;
	listaPontos = p;
}
void addLast(float x, float y){
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p ->prox=NULL;//ÚlTIMO ELEMENTO DA LISTA
	if(listaPontos==NULL){
		listaPontos=p;
	}else{//percorrer toda lista para econtrar o Null
		Ponto *listaAux = listaPontos;
		while(listaAux->prox!=NULL){//enquanto o prox não for Null
			listaAux = listaAux->prox;
		}
		listaAux->prox = p;//último elmento aponta o prox para o novo último elemento
	}
	
}

void imprime(Ponto *p){

	if(p!=NULL){
		printf("\nPonto(%.0f, %.0f)", p->x,p->y);
		imprime(p->prox);
	}
	
	}


int main(){
	
	
	 addFirst(1,5);
	 addFirst(2,7);
	 addFirst(5,3);
	 addFirst(7,8);
	 addLast(1,1);
	 addLast(2,2);
	 
	 Ponto *auxLista = listaPontos;
	 imprime(auxLista);
	
	return 0;
}
