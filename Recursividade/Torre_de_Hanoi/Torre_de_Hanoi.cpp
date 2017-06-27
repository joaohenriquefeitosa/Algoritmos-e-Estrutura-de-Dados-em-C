#include <stdio.h>
#define DISC 4
#define PINOS 8

int movimento(int d, char p1, char p2, char p3, char p4){
	if(d==1){
		printf("\n   *Mover disco %d de %c para %c", d, p1, p2);
		return 0;
	} else {
		movimento(d-1, p1, p3, p2, p4);
		printf("\n  **Mover disco %d de %c para %c", d, p1, p3);
		movimento(d-1, p2, p4, p3, p1);
		printf("\n ***Mover disco %d de %c para %c", d, p2, p4);
		movimento(d-1, p4, p1, p3, p1);
		printf("\n****Mover disco %d de %c para %c", d, p4, p1);
		movimento(d-1, p1, p3, p2, p4);
		printf("\n****Mover disco %d de %c para %c", d, p1, p3);
	}

}

int main(){
	movimento(DISC, 'A', 'B', 'C', 'D');

	return 0;
}

// jogas as posições dos numeros em um array
// o numero anterior não pode ser menor que o prox (seguir a regra)
