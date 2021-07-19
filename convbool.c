/**
*
* programme qui convertie un caractère en binaire
*
*/

#include <stdio.h>

void main(int argc, char **argv){

	int v = 64; 

	char temp[128];
	char binary[128];
	int idx = 0;

	printf("\n");

	printf("le nombre d'argument de la ligne de commande est : %i\n", argc);
	
	for(int i = 0; i < argc; i++)
	{
		printf("argument %i : %s\n", i, argv[i]);
	
	}

	if (argc < 2){

		printf("Veuillez saisir un caractère.\n");
		return;

	}

	do {
		
		if (v % 2 == 1){
			temp[idx] = '1';
		} else {
			temp[idx] = '0';
		}
	
		v = v >> 1;
		idx++;


	} while(v != 0);


	int pos = 0;
	for(int i = idx - 1; i > -1;i--){
		binary[pos] = temp[i];
		pos++;
	}
	binary[pos] = 0;

	printf("%s\n", binary);
	
}
