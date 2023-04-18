#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//Funcion para saber si es par o impar
int par(int m);
int impar(int m);
int main(){
	int m;
	printf("Ingrese el valor de m: ");
	scanf("%i", &m);
	if(par(m)==1){
		printf("El numero es par.");
	}else{
		printf("El numero es impar.");
	}
	return 0;
}
int par(int m){
 if(m==0){
	return 1;
}else{
	return impar(m-1);
}
}
int impar(int m){
 if(m==0){
	return 0;
 }else{
    return par(m-1);
 }
}