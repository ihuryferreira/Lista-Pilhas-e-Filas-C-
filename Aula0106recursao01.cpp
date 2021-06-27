#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int potencia(int base, int ep)//recursão-> chamada da função dentro dela mesmo
{
	if (ep==1){
		return base;
	}
return base*potencia(base, ep-1);

}

int main(){
	int v= potencia(2,4);////16
	printf("%d",v);
	return 0;
}

