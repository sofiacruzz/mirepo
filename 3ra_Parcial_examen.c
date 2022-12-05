//Estructura de datos

#include <stdio.h>
#include <stdlib.h>

struct nodo{
	struct nodo* hijo_izq;
	struct nodo* hijo_der;

	int info;
};


struct nodo* nuevoNodo(int dato){
	size_t tam_nodo = sizeof(struct nodo);

	struct nodo* nuevo_nodo = (struct nodo*) malloc(tam_nodo); //malloc/memory allocation = alojar en memoria
	
	nuevo_nodo-> info = dato;
	nuevo_nodo-> hijo_izq = NULL;
	nuevo_nodo-> hijo_der = NULL;

	return nuevo_nodo;
}
void insertarNodo(struct nodo* nd, int dato)
{
	if (dato > nd -> info){
		if(nd -> hijo_der == NULL){
			nd-> hijo_der=nuevoNodo(dato);
		} else{
		insertarNodo(nd->hijo_der, dato);
		}
	}else{
	if(nd->hijo_izq==NULL){
		nd-> hijo_izq=nuevoNodo(dato);
	}else{
		insertarNodo(nd->hijo_izq, dato);
	}
	}
}
void busqueda(int arreglo[],int busqueda, int izquierda, int derecha){

	if (izquierda > derecha)return -1;
	int indice= floor((izquierda+derecha)/2);

	int media = arreglo[indice];
	if(busqueda == indice){
          return indice;
	}
	if (busqueda < media){
	  derecha = indice -1;
	}else{
	  izquierda = indice +1;
	
	}
	return busqueda(arreglo, busqueda, izquierda,derecha)

}
int main()
{
	int numeros[]={6,5,4,3,11,8,9,12,21};
	int busqueda;
	printf("ingrese el numero que desea buscar del arbol que contiene los numeros {6,5,4,3,1,8,9,12,21}:\n");
	scanf("%d",&busqueda);
	int longitudarreglo= sizeof(numeros)/sizeof(numeros[0]);

	void busqueda();

	print("%d",&busqueda);

	//struct nodo* raiz=NULL;
	//raiz = nuevoNodo(8);
	//insertarNodo(raiz,3);
	//insertarNodo(raiz,20);

	return 0;
}
