#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
/*Buscar el valor x en el arreglo A de N elementos ordenados ascendentemente,
retornando la posición P donde se ubica x. Si P = -1, x no se encontró*/

int BusBin(int a[9], int x, int i, int j);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int x,i,j;
	x=4;
	i=1;
	j=9;
	BusBin(a,x,i,j);
	if(BusBin(a,x,i,j)==-1){
		printf("La posicion de x no se encontro.");
	}else{
		printf("La posicion de x es: %i", BusBin(a,x,i,j));
	}
	return 0;
}
int BusBin(int a[9], int x, int i, int j){
int medio;
	medio = (i + j) / 2;
 if (a[medio] = x){
	 return medio;
 }else if ((x < a[medio]) && (i < medio)){
	 return BusBin(a, x, i, medio-1);
 }else if (medio<j){
 	return BusBin(a, x, medio+1, j);
 }else{
 	return -1;
 } 
}
