#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b){

	int resultado;

	if(b <= 0){
		resultado = 1;
	}else{
		printf("a = %d, b = %d\n",a,b);
		resultado = a * plus(a, b -1);
	}
	return resultado;
}

int main(){
	int a, b, c;
	system("clear");
	printf("\n\nEntre com dois numeros inteiros: ");
	scanf("%d%d", &b,&c);
	a = plus(b,c);
	printf("%d",a);
	return 0;
}