#include<stdio.h>
#include<conio.h>

main(){
	
	int num,h;
	printf("ingresa un numero:");
	scanf("%d",&num);
	h=num%2;
	
	if(h==0){
		printf("es un numero par, no puede ingresar a la matriz");
	}
	else
	{
	printf("es un numero impar , puede ingresar a la matriz");
	}
	
	getch();
	
	
	
}
