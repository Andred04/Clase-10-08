#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int r, i, np, cm, ch, cp, cca, mayor=0;
	char sexo, tipo, nombre [20], aux[20];
	float pttl;
	
	printf("\t\t\t\t****LAVANDERIA****");
	
	printf("\nHay Algun Estudainte? S/N:\t");
	r=tolower(getch(r));
	
	cm=0;
	ch=0;
	while(r=='s'){
		
		printf("\n\nNombre: \t");
		fflush(stdin);
		gets(nombre);
		
		printf("Sexo M - F: \t");
		sexo=tolower(getche(sexo));
		
		if(sexo=='f'){
			cm++;
		}else{
			ch++;
		}
		
		printf("\n\nIndique el Numero de Prendas: \t");
		scanf("%d",&np);
		
		cp=0;
		cca=0;
		for(i=0; i<np; i++){
			
			printf("\n\nDescripcion de Prendas:\n(P)antalon \n(C)amisa \n(V)estido \n(O)tro\t\t");
			tipo=tolower(getche(tipo));
			
			if(tipo=='p'){
				cp++;
			}
			if(tipo=='c'){
				cca++;
			}
		}//fin for
		
		printf("\n\nEl Estudiante Trajo %d Pantalones y %d Camisas",cp, cca);
		
		if(cp>=mayor && cca>4){ //el igual (=) antes del signo hace que tome el ultimo 
			mayor=cp;
			strcpy(aux,nombre);
		}
		
		pttl=(cca*450)+(cp*650)/1000;
		printf("\n\nEl Peso Total de las Prendas Entregadas es %.1f Kg", pttl);
		
		printf("\n\nHay Otro Estudiante? S/N");
		r=tolower(getch(r));

	}//fin while
	
	if(ch+cm >0){
	
	
	
	if(ch<cm){
		printf("\n\n%s Trajo la Mayor Cantidad de Pantalones (%d)",aux,cp);
		printf("\n\nLa Lavanderia es mas Usada por las Mujeres");
	}else{
		if(cm<ch){
			printf("\n\nLa Lavanderia es mas Usada por los Hombres");
		}else{
			printf("\n\nLa Lavanderia es Usada de Igual Manera por Hombres y Mujeres");
		}
	}
	}		
	return 0;
}
