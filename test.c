#include <stdio.h>
#include <stdbool.h>

bool is_uppercase(const char *source){

 printf("emplacement mémoire : %p, cet espace contient la valeur : %c \n", source, *source);

  char c;
  int chiffre = 0;

   fputs("test \n", stdout);


  printf("valeur de chiffre : %d \n", chiffre);

  chiffre++;

  printf("valeur de chiffre : %d \n", chiffre);

  chiffre++;

  printf("valeur de chiffre : %d \n", chiffre);
 
  c = *source;

  while( c ){

   printf("contenu de C : %c \n", c);

      if( c >= 97 && c <= 'z' ){

          return false;

      }
    

	(source++);

    c = *source; 

  }

  return true;

}

void main() {

	
	printf("le retour %d \n", is_uppercase("SDFHGKDLGK dd SD"));


}




