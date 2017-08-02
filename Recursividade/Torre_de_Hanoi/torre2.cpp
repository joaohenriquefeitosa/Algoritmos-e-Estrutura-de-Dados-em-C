#include <stdio.h>
#define DISC 8

int count = 0;

int movimento(int d, char p1, char p3, char p4, char p2){
	if(d==1){
		printf("\nMover disco %d de %c para %c", d, p1, p3); // CASO BASE
		count ++;
		return 0;
	} else {
		movimento(d-1, p1, p2, p3, p4);
		printf("\nMover disco %d de %c para %c", d, p1, p3);
		count ++;
		movimento(d-1, p2, p3, p4, p1);
	}

}

int main(){
	movimento(DISC, 'A', 'B', 'C', 'D');

	printf("\n\n%d\n\n", count);

	return 0;
}