#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//Maximo comun divisor entre dos numeros
int MCD(int a, int b);
int main(){
	int a,b;
	printf("Ingrese el valor de a: ");
	scanf("%i", &a);
	printf("Ingrese el valor de b: ");
	scanf("%i", &b);
	MCD(a,b);
	printf("%i",MCD(a,b));
	return 0;
}
int MCD(int a, int b){
	if(a<b){
		return MCD(b,a);
	}else if(b==0){
		return a;
	}else{
		return MCD(b,(a%b));
	}
}