#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int op, resp = 4;
	
	do{
	setlocale(LC_ALL, "portuguese");
	printf("\nENIGMA DO RIVOTRIL:\n");
	
	//FRASE CRIPTOGRAFADA
	printf("Chave profunda e desconhecida:\n2 15 18 1   17 21 5 18 5 18?\n");
	
	//ENIGMA PARA DESCOBRIR A FRASE CRIPTOGRAFADA
	printf("\nResolva para descobrir:\n2x + 5 = 15\nx = ");
	scanf("%d", &op);
	if(op == 5){
		printf("Revise o c�digo e encontre o erro!\n");
	} else if(op == resp){
		printf("\nFrase descriptografada:\nBora querer?"); 
	}
} while (op != 4);
}
