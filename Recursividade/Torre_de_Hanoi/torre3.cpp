//Torre de Hanoi

//bibliotecas
#include <stdio.h>
#include "conio.h"
#include <stdlib.h>

// varialvel de valor continuo
#define max 4

//prototipo das funçoes
void move_discos(void);
void imprimi_torre(void);
void limpa_tela(void);
void mover_de_a_para_c(void);
void mover_de_a_para_b(void);
void mover_de_c_para_b(void);
void mover_de_b_para_a(void);
void resolver(void);
// vairiáveis globais( antes da função main())
	   int i;
	   int a[5]={5,4,3,2,1},n=4;
	   int b[5]={0,0,0,0,0},m=0;
	   int c[5]={0,0,0,0,0},o=0;
	   int movimentos=0;

//programa principal	   
main()
{
	  
	   
			   
						   
		  imprimi_torre();
		  mover_de_a_para_c();
		  mover_de_a_para_b();
		  mover_de_c_para_b();
		  mover_de_a_para_c();
		  mover_de_b_para_a();
		  
		  
	   
	   
	   system("PAUSE");
}



void mover_de_a_para_c(void)// move destino - origem
{
	if(c[o]<a[n])
	{
				  //Operação de Push p/ pilha C
				  c[o]=a[n];
				  o++;
				  //Operação pop p/A
				  a[n]=0;
				  n--; 
	 movimentos++;							 
	 }
	 
	 imprimi_torre();
	 
}	 


void mover_de_a_para_b(void)
{
	if(b[m]<a[n])
	{
				  //Operação de Push p/ pilha B
				  b[m]=a[n];
				  m++;
				  //Operação pop p/A
				  a[n]=0;
				  n--; 
								  
	 movimentos++;
	 }
	 
	 imprimi_torre();
	
}  
void mover_de_c_para_b(void)
{
	
	if(b[m-1]>c[o-1])
	{
				  //Operação de Push p/ pilha B
				  b[m]=c[o-1];
				  m++;
				  //Operação pop p/C
				  o--;
				  c[o]=0; 
								  
	 movimentos++;
	 }
	 
	 imprimi_torre();
}  
void limpa_tela(void)
{
	 system("cls");
}	 
void imprimi_torre(void)
{
	 for(i=max;i>=0;i--)
	 
						 printf("%d %d %d\n", a[i], b[i], c[i]);
	 printf("A B C\n");
	 printf("-----\n");	 
	 printf("\n Movimentos: %d",movimentos);
}
void mover_de_b_para_a(void)// move aux - origem
{
	
	if(a[n]>b[m-1])
	{
				  //Operação de Push p/ pilha A
				  a[n+1]=b[m-1];
				  n++;
				  //Operação pop p/B
				  m--; 
				  b[m]=0;
								  
	 movimentos++;
	 }
	 
	 imprimi_torre();
	 
}	 
void resolver(void)
{
	 do
	 {
		  imprimi_torre();
		  mover_de_a_para_c();
		  mover_de_a_para_b();
		  mover_de_c_para_b();
		  mover_de_b_para_a();
				   
	 }while(o<=5);			  
}