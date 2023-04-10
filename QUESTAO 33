#include<stdio.h>
#include<stdlib.h>

// "int somaDivisores" fun��o pra calcular  a soma dos divisores de um numero.
int somaDivisores(int n){
	int soma = 0;
	for (int i = i; i <= n  / 2; i++){
		if (n % i == 0){
			soma += i ;
		}
	}
	return soma;
}

	//"encontrarparesamigaveis" fun��o para encontrar e imprimir os pares amigaveis de 1 e "maxNum"
	void encontrarParesAmigaveis(int maxNum){
	// calculo  da soma dos divisores  de cada numero entre 1 e maxNum
		int somaDiv[maxNum + 1] = {0};
		for (int i = 1; i <= maxNum; i++){
			somaDiv[i] = somaDivisores(i);
		}
		for (int i = 1; i <= maxNum; i++){
			for (int j = i + 1; j <= maxNum; j++){
				if (somaDiv[i] == j  && somaDiv[j] == i){
					printf("(%d,%d)\n",i,j);
				}
			}
		}

	}
	int main (){
		encontrarParesAmigaveis(100000);
		return 0;
	}
