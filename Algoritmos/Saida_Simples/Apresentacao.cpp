#include <stdio.h>
#include <stdlib.h>

int main(){
	char msg1[300] = "\n\n\nA água e os sais minerais absorvidos pelas raízes sobem através dos vasos lenhosos do caule e chegam às folhas", 
		 msg2[300] = "\n\n\nNas folhas, existe uma substância verde, a clorofila, que absorve a energia luminosa do sol. Ao esmo tempo, por meio dos estômatos presentes nas folhas, a planta absorve gás carbônico do ar", 
		 msg3[300] = "\n\n\nUsando a energia solar, o gás carbônico e o hidrogênio contido na água retirada do solo, após complicadasreações químicas, a planta produz açúcares (glicose).";
	
	system("clear");
	printf("%s", msg1);
	printf("\n\n\nPressione enter:");
	getchar();
	system("clear");
	printf("%s", msg2);
	printf("\n\n\nPressione enter:");
	getchar();
	system("clear");
	printf("%s", msg3);
	printf("\n\n\nPressione enter:");
	getchar();
}