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

int main(){
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = 1;
	p->y = 5;
	
	Ponto *p1 = (Ponto*) malloc(sizeof(Ponto));
	p->x=3;
	p->y=9;
	
	Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));
	p->x=4;
	p->y=7;
	
	p->prox = p1;
	p1->prox = p2;
	p2->prox =NULL;
	
	return 0;
}
