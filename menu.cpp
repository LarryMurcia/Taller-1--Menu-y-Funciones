#include <stdio.h>
#include "funcion.h"
#include <iostream>


using namespace std;

int main(){
	int mExponente,mbusqueda, moburb, mosec;
	cout<<"Este es el Menu \n"<<endl;
	int opcion;
	while (opcion!=-1) {
		cout<<"Digite Opcion: \n"<<endl;
		cin>>opcion;
		switch (opcion){
			case 1:
				int base,exponente;
				cout<<"Ingrese Base y Exponente: "<<endl;
				cin>>base,exponente;
				mExponente=exponenteFB(base,exponente);
				cout<<mExponente;
				break;
			case 2: 
				int ns;
				cout<<"Ingrese la longitud del arreglo: "<<endl;
				cin>>ns;
				int arreglosec[0+ns],ks;
				cout<<"Ingrese el Arreglo, k"<<endl;
				cin>>arreglosec[ns],ks;
				mbusqueda=busquedaSecuencial(arreglosec,ns, ks);
				cout<<mbusqueda;
				break;
			case 3: 
				int arregloburb[],nb;
				cout<<"Ingrese el Arreglo, n"<<endl;
				cin>>arregloburb,nb;
				moburb=ordenamientoBurbuja(arregloburb, nb);
				break;
			case 4: 
				int arreglosel[],nl;
				cout<<"Ingrese el Arreglo, n"<<endl;
				cin>>arreglosel,nl;
				mosec=ordenamientoSeleccion(arreglosel, nl);
				break;
			case 5: 
				char T[], P[];
				int nc, mc;
				cout<<"Ingrese el Arreglo T, P, n, m"<<endl;
				cin>>T,P,nc,mc;
				emparejaCadena(T, P, nc, mc);
				break;
		}
	}
	return 0;		
				
}
