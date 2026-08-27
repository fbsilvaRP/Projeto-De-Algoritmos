#include <stdio.h>
#include <stdlib.h>

#define tam 6

int Max(int a[6])
{
	Temp = a[0];
	for(int i =  0; i < 6; i++)
		if(Temp < a[i])
			Temp = a[i];
	return Temp;
}


int main(int argc, char* argv[])
{
	int vetor[tam];
	printf("Preencha o vetor abaixo: \n");
	for(int i = 0; i < tam; i++)
	{
		printf("[%d]: ", i);
		scanf("%d%*c", &vetor[i]);
	}

	// --- Encontrando o valor máximo:
	int max = Max(vetor[tam]);

	printf("\nValor máximo: %d\n", max);

	printf("Pressione ENTER para encerrar\n");
	getchar();
	return 0;
}
