/*
Universidad Politecnica De Tulancingo 
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Juan Carlos Martinez Montero


¨*/


#include <iostream>
#include<stdlib.h>
#include<stdio.h>



const int n = 4;

void captura(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("Captura el elemento [%d,%d] ", ren, col);
			scanf_s("%d", &matriz[ren][col]);
			col++;
		}
		ren++; col = 0;
	}
}

void Llenado(int matriz[n][n]) {
	int ren = 0, col;
	int seq = 1;
	while (ren < n) {
		col = 0;
		while (col < n) {
			matriz[ren][col] = seq;
			seq++;
			col++;
		}
		ren++; col = 0;
	}
}

void Muestra(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("%4d", matriz[ren][col]);
			col++;
		}
		printf("\n");
		ren++;
	}
}

int main()
{
	int cuadro[n][n];
	char rspt;
	printf("Desea capturar (S/N): ");
	rspt = getchar();
	if (rspt == 'S' || rspt == 's') {
		captura(cuadro);
	}
	else {
		Llenado(cuadro);
	}
	Muestra(cuadro);
}

