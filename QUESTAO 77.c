#include<stdio.h>
#include<stdlib.h>

int main (){
	int valores[5],maior,menor;
	
	printf("digite 5 valores:\n");
	for(int i = 0; i < 5; i++){
		printf("valor %d:", i+1);
		scanf("%d",&valores[i]);
		if(i==0){
			maior = i;
			menor = i;
		}else{
			if(valores[i] > valores[maior]){
				maior = i;
			}
			if(valores[i] < valores[menor]){
				menor = i;
			}
		}
	}
		printf("o maior valor � %d e esta na posi��o %d\n",valores[maior]);
		printf("o menor valor � %d e esta na posi��o %d\n", valores[menor]);
		return 0;
	
}
