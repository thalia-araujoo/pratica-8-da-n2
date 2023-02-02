// fa�a um programa que receba as idades de 10 pessoas e armazene em um vetor. mostre as idades em ordem decrescente. use ordena��o por sele��o//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//fun��o criada para sele��o de sort//
void selection_sort(int num[],  int tam){
	
	int i, j, min, aux;
	
	for(i = 0; i < tam; i++){
		min = i;
		for(j = (i+1); j < tam; j++){
			//prara colocar em ordem decrescente � so inverter a setinha ">"
			if(num[j] > num[min]){
				min = j;
			}
		}
		
		if(i !=min){
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
	}
}
	
int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
// criar um vetor com o nome q ce quer e o "tamanho ou quantidade"//	
	int idades[10];

//criar-se um la�o for, aqui ele ta dizendo que com�a em 0 e vai ate 10
	for(int i = 0; i < 10; i++){
	//pede para informar a quantidade de idades q ser�o informadas	
		printf("Informe as idades:\n ");
	    scanf("%d", &idades[i]);
	
	}
	//ele vai chamar a fun��o criada la em cima de selection_sort para a odena��o das idades informadas
	 selection_sort(idades,10);
	 
	//aqui ele cria outro for para mostrar as idades e em ordem 
	 for(int x=0; x<10; x++){
	 	
	 	printf("A Ordem decrescente das idades informadas s�o: %d\n", idades[x]);
	 	
	 }
	 
	return 0;
}


