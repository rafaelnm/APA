#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void insertionsort( int vetor[], int tamanho)
{
	int i, temp, j;
	
	for (i=0; i<tamanho;i++)
	{
		temp =  vetor[i];
		j=i-1;
		while((j>=0) && (temp,vetor[j]))
		{
		vetor[j+1] = vetor[j];
		j--;
		}
		vetor[j+1] = temp;
	}
}

void selectionsort ( int vetor[], int tamanho)
{
	int min, temp, i, j;
	for (i = 0; i < tamanho; i++){
		min = i;
		for( j= i+1; j<tamanho; j++){
			if(vetor[min]>vetor[j])
			min = j;
		}
		if (i != min) {
			temp = vetor[i];
			vetor[i]= vetor[min];
			vetor[min] = temp;
		}
	}
}




int main() {
	
	int opcao;
	int vetor[10];
	int i = 0, j = 0;
	int elemento;
	int tamanho = 10; 
	
	
	printf("Digite o vetor de 10 elementos a ser ordenado, um elemento por vez: \n ");
	
	
	while(i<tamanho){
	
	scanf("%d", &elemento);
	
	vetor[i] = elemento;
		i++;
	
	}
	
	
	/*
	if (elemento != NULL ) {
		vetor[j] = elemento;
		j++;
		}
	}*/
	
	
	//size_t tamanho = sizeof(vetor) / sizeof(int);
	
	
	printf("Digite a Opção: \n 1 - Insertion Sort \n 2 - Selection Sort \n");
	
	scanf ("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			
			insertionsort (vetor, tamanho);
			
			break;
			
		case 2:
			
			selectionsort (vetor, tamanho);
			
			break;
			
		default:
        	printf("Entrada errada\n");
        	break;
			
	}
	
	printf("\n Vetor ordenado: \n");
	
	
	for(i = 0; i < tamanho; i++){	
	
		printf("%d", vetor[i]);
	}
	
	
	
	
	system("pause");
	return 0;
}
