#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int Maximo(int a[], int i, int j);
int main(){
	int a[]={2,6,1,8,4,5,9,7,3};
	int i,j;
	i=2;
	j=3;
	Maximo(a,i,j);
	printf("El valor mayor del arreglo es: %i", Maximo(a,i,j));
	return 0;
}
int Maximo(int a[], int i, int j){
	int medio, max1, max2;
 	if(i==j){
 		return a[i];
 	}else{
 	medio = (i+j) / 2;
 	max1 = Maximo(a, i, medio);
 	max2 = Maximo(a, medio+ 1, j);
 	if(max1 > max2){
 		return max1;
 	}else{
		return max2;
 	}
 }
}