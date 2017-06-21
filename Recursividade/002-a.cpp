#include <stdio.h>

int func1(int n){
	if(n == 0)
		printf("FIM");
	else{
		printf("%d",n);
		func1(n-1);
	}
}

int func2(int n){
	if(n == 0)
		printf("FIM");
	else{
		func2(n-1);
		printf("%d",n);
	}
}

int func3(int n){
	if(n == 0)
		printf("FIM");
	else{
		printf("%d",n);
		func3(n-1);
		printf("%d",n);
	}
}


int func4(int n){
	if(n == 0)
		printf("FIM");
	else{
		func4(n-1);
		printf("%d",n);
		func4(n-1);
	}
}
int main(){
	int a, b, c, d, e, f, g, h;
	a = func1(0);
	printf("\n");
	b = func1(5);
	printf("\n\n\n ============================ \n\n\n");

	c = func2(0);
	printf("\n");
	d = func2(5);
	printf("\n\n\n ============================ \n\n\n");

	e = func3(0);
	printf("\n");
	f = func3(5);
	printf("\n\n\n ============================ \n\n\n");

	g = func4(0);
	printf("\n");
	h = func4(5);

	printf("\n\na = %d\nb = %d\nc = %dn\nd = %d\ne = %d\nf = %d\ng = %d\n\n",a,b,c,d,e,f,g);
}