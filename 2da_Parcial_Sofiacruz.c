#include<stdio.h>
//profe no va a compilar lo siento:(
void pseudo_examen(int n){
	int min;
for(int i=1; i<=n-1; i++ )
	min=i;{

		for(int j=i+1; j<=n; j++){
			if(lista[j]<lista[min])
			min=j;
		}
	}
     if(min! = i){
	     int key = lista[min];
	     lista[min]=lista[i];
	     lista[i]=lista[min];
     }

}


void main(){
	int n=5;
	int lista[];
        
	for(int i=0; i < n; i++){
                printf("Introduce 5 enteros:");
                scanf("%d", &lista[i]);}
        printf("valores ordenados:");
	pseudo_examen(n);
}

