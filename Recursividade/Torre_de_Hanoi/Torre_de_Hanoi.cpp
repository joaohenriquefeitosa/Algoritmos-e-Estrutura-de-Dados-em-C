#include <stdio.h>
#define DISC 4
#define PINOS 4
/*

int movetorre (int N,char orig, char dest, char aux){
     if(N==1)
             cont=cont+1;
     else{
           movetorre(N-1,orig,aux,dest);
           cont=cont+1;
           movetorre(N-1,orig,aux,dest);
         }  
         
}

*/
int movimento(int d, char p1, char p3, char p2){
	if(d==1){
		printf("\n    *Mover disco %d de %c para %c", d, p1, p3);
		return 0;
	} else {
		movimento(d-1, p1, p2, p3);
		printf("\n   **Mover disco %d de %c para %c", d, p1, p3);
		movimento(d-1, p2, p3, p1);
	}

}

int main(){
	
	movimento(DISC, 'A', 'B', 'C');

	return 0;
}

// jogas as posições dos numeros em um array
// o numero anterior não pode ser menor que o prox (seguir a regra)
