#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct producto{
	int codigo;
	char descripcion[40];
	float precio;
	float descuento;
	char fecha_v[30];
	int cantidad;
}productos[5];

void escribir_p(){
	for(int i=0; i<5; i++){
		fflush stdin;
		printf("Ingrese el codigo del producto #%i: \n", i+1);
		scanf("%i", &productos[i].codigo);
		fflush stdin;
		printf("Ingrese la descripcion del producto #%i: \n", i+1);
		gets(productos[i].descripcion);
		fflush stdin;
		printf("Ingrese el precio del producto #%i: \n", i+1);
		scanf("%f", &productos[i].precio);
		fflush stdin;
		printf("Ingrese el descuento del producto #%i: \n", i+1);
		scanf("%f", &productos[i].descuento);
		fflush stdin;
		printf("Ingrese la fecha de vencimiento del producto #%i: \n", i+1);
		gets(productos[i].fecha_v);
		fflush stdin;
		printf("Ingrese la cantidad del producto #%i: \n", i+1);
		scanf("%i", &productos[i].cantidad);
	}
}
void imprimir_p(struct producto a){
	for(int i=0; i<5; i++){
		printf("\nCodigo del producto #%i: %i \n", i+1,productos[i].codigo);
		printf("Descripcion del producto #%i: %s \n",i+1, productos[i].descripcion);
		printf("Precio del producto #%i: %.2f \n",i+1, productos[i].precio);
		printf("Descuento del producto #%i: %.2f \n",i+1, productos[i].descuento);
		printf("Fecha de vencimiento del producto #%i: %s \n", i+1, productos[i].fecha_v);
		printf("Cantidad del producto #%i: %i \n\n", i+1, productos[i].cantidad);
	}
}
int main(){
	struct producto a;
	escribir_p();
	imprimir_p(a);
	getch();
	return 0;
}