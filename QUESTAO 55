#include<stdio.h>
#include<stdlib.h>

	void move (int n,char from, char to, char aux){
		if( n == 1){
			printf("mover disco 1 da torre  %c para a torre %c\n",from,to);
			return;
		}
		move (n-1,from,aux,to);
		printf("mover disco %d  da torre %c para a torre %c\n",n,from,to);
		move(n-1,aux,to,from);
	}
	int main (){
	int n = 3;
	move(n,'A','C','B');
	return 0;
}

