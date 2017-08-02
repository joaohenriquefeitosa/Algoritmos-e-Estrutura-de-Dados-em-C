#include <stdio.h>

int f1(int n){
	if(n == 0)
		return (1);
	if(n == 1)
		return (1);
	else
		return (f1(n-1)+2*f1(n-2));
}

int main(){
	int a, b, c;
	a = f1(0);
	b = f1(1);
	c = f1(5);
	printf("\n\na = %d\nb = %d\nc = %d\n\n",a,b,c);
}