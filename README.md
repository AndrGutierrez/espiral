#include<stdio.h>
#include<conio.h>

main(){
	
	int num,h,esq;
	printf("ingresa un numero impar:");
	scanf("%d",&num);
	h=num%2;
	
	if(h==0){
		printf("es un numero par, no puede ingresar a la matriz.\n");
	}
	else
	{
	printf("es un numero impar , puede ingresar a la matriz.\n");
	printf("\n");
		do{
	  printf("ingresa el numero de la esquina desde donde quieres empezar a llenar la matriz.");
	     printf("\n");
	       printf("\n");
	        printf("*las esquinas se enumeran en sentido horario*\n");
	          scanf("%d",&esq);
		system("cls");
	}while(esq>4);
	}
	
	
	
	
}
