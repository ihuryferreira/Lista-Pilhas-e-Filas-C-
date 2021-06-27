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





int length = 0;
void AddIndex(float x, float y, int index)
{
	Ponto *p = (ponto*)	malloc (sizeof(Ponto));
	p->x = x;
	p->y = y;
	
	if (index>length){
		printf("Posição Inválida");
	}else{
		if(index==0){
			p->prox = listaPontos;//antigo primeiro será o segundo e novo elemento será o primeiro
			listaPontos =p;
		}else{
			Ponto *listaAux = listaPontos;
			int i=0;
			while(i!=index-1){
				listaAux = listaAux->prox;
				i++;
			}
			p-> prox = listaAux->prox;
			listaAux->prox=p;
		}
		length++;
	}

}

void imprime(Ponto *p){

	if(p!=NULL){
		printf("\nPonto(%.0f, %.0f)", p->x,p->y);
		imprime(p->prox);
	}
	
	}


int main(){
	
		AddIndex(1,1,0);
		AddIndex(2,4,0);
		AddIndex(3,9,1);
		AddIndex(8,9,1);
		
		 
	 Ponto *auxLista = listaPontos;
	 imprime(auxLista);
	
	return 0;
}
