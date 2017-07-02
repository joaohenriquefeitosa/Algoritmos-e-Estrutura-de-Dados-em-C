#include <stdio.h>
#define DISC 4

int movimento(int d, char p1, char p3, char p4, char p2){
	if(d==1){
		printf("\n    *Mover disco %d de %c para %c", d, p1, p3);
		return 0;
	} else {
		movimento(d-1, p1, p2, p3, p4);
		printf("\n   **Mover disco %d de %c para %c", d, p1, p3);
		movimento(d-1, p2, p3, p4, p1);
	}

}

int main(){
	
	movimento(DISC, 'A', 'B', 'C', 'D');

	return 0;
}