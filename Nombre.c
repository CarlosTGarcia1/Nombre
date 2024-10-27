#include <stdio.h>


void imprimirLetras(char nombre[]){
	int i=0;
	while (nombre[i]!='\0'){
		printf(" %c", nombre[i]);
		i++;
		}
	}

int main(){
	char nombre[30];
	printf("Escriba su nombre: ");
	fgets(nombre, sizeof(nombre), stdin); 
	imprimirLetras(nombre);
	}
	
