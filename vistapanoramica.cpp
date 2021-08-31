#include <stdio.h>

int hum, edad, esp, guia, porc, contguia,troll, i, edadS, cont;

int main(){
	
	printf("  \n**Ingrese edad**\n  ");
	scanf("%d", &edad);

	esp= 10;
	
	while(edad > 0 && esp != 0){

	printf("  \n ¿Con guia? 1(si)|| 0 (no)\n  ");
	scanf("%d", &guia);
	
		if(guia == 1){
			contguia= contguia + 1;
		}	
		
	printf("  \n**Ingrese edad**\n  ");
	scanf("%d", &edad);
	cont= cont + 1;
	esp= esp - 1;

    if( guia == 0){
    	edadS= edadS + 1;
	}
	
}
	porc= ( edadS * 100)/ cont;
	printf("  \n Personas con guia = %d", contguia);
	printf(" \n Personas solas =% %d", porc);
}
