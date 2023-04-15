#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	float RaizQuadrada(float num){
	/if (num < 0){
			printf ("erro: n�o � possivel calcular a raiz quadrada de um numero negativo.");
			return -1.0;
		}
		return sqrt(num);
	}
	
	int main (){
		float num ;
		printf("digite um numero:");
		scanf("%f", &num);
		printf("a raiz quadrada de %.2f eh %2.f\n",num,RaizQuadrada(num));
		return 0;
	}
	
	// essa parte de cima corresponde a letra A)
	
	
	
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	//ESSA � A LETRA B)
	
	float RaizQuadrada(float x){
	
		float xn = x;
		float xn1 = 0;
		float erro = 0.01;
		
		do{
			xn1 = (xn + (x / xn)) / 2;
			float erro = fabs((xn1 * xn1) - x) / x;
			xn = xn1;
			
		} while(erro > erro);
			printf("erro: %f%%\n", erro * 100);
			return xn1;
	}
	int main (){
		float x = 25.0;
		float raiz = RaizQuadrada(x);
			printf("a raiz quadrada de %f � %f\n",x, raiz);
			return 0;
	}
	
	
	
