#include <stdio.h>

int f2(int n){
	if(n == 0)
		printf("Zero");
	else{
		printf("%d",n);
		f2(n-1);
	}
}


int main(){
	int a, b, c;
	printf("\n");
	a = f2(0);
	printf("\n");
	b = f2(1);
	printf("\n");
	c = f2(5);
	printf("\n\na = %d\nb = %d\nc = %d\n\n",a,b,c);
}