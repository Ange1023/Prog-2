#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//Funcion para saber el numero mayor
int fq(int a, int b);
int main(){
	int a,b;
	printf("Ingrese el valor de a: ");
	scanf("%i", &a);
	printf("Ingrese el valor de b: ");
	scanf("%i", &b);
	fq(a,b);
	if(fq(a,b)==0){
		printf("El numero %i es el mayor.", b);
	}else{
		printf("El numero %i es  el mayor.", a);
	}
	return 0;
}
int fq(int a, int b){
	if(a<b){
		return 0;
	}else if(a>b){
		return fq(a-b,b)+1;
	}
}