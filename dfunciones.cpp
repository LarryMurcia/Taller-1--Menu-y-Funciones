#include <stdio.h>
#include "funcion.h"
#include <iostream>

void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}

int exponenteFB( int x,int n){

for (int i=1; i<=n; i++){
	x*=x*x;
	return x;
	}
}

int busquedaSecuencial(int arreglo[],int n,int k){
	for(int i=1; i<=n;i++){
		if (arreglo[i]==k){
			return i;
		}
	}
	return -1;
}

int ordenamientoBurbuja(int arreglo[], int n){
	for (int i=0;i<=n-2;i++){
		for (int j=0;j<=n-2-i;j++){
			if (arreglo[j+1] < arreglo[j]){
				swap(arreglo[j], arreglo[j+1]);
			}
		}
	}
}

void ordenamientoSeleccion(int arreglo[], int n){
	for (int i=0;i<=n-2;i++){
		int min=i;
		for (int j=i+1;j<=n-1;i++){
			if (arreglo[j] < arreglo[min]){
				min=j;
			}
		swap(arreglo[i],arreglo[min]);
		}
	}
}

int emparejaCadena(char T[], char P[], int n, int m){
	for (int i=0;i<=(n-m);i++){
		int j=0;
		while (j<m and P[j]==T[i+j]){
			j+=1;
		}
		if (j==m){
			return i;
		}
	}
	return -1;
}




