
#include <inttypes.h>
#include <stdio.h>

uint64_t descendingOrder(uint64_t n)
{

    uint64_t temp;
    uint64_t result;
    temp = n;
    int size = 0; // nombre de chiffre
    int x, i;

    //
    // ici, je compte combien de chiffre il y a en tout pour créer un tableau en mémoire
    //
    while(temp){
        temp = temp / 10;
        size++;
    }

    temp = n;
    char str[size];

    //
    // on place chaque nombre dans un tableau
    //
    for(i = 0;i < size;i++){
        str[i] = (temp % 10) + '0';
        temp = temp / 10;
    }

    int pos = 0;
     

    for(i = 0; i < size - 1; i++){

        for(x = 0; x < size - 1; x++){

            //
            // si la valeur est plus grande, on interverti
            //
            if(str[x] < str[x+1]){
                temp = str[x];
                str[x] = str[x+1];
                str[x+1] = temp;
            }

			printf("char : %s\n", str);       
 
        }

    }

    
    //
    // on replace les chiffres du tableau dans une seul variable
    // 
    result = 0;

    for(i = 0;i < size; i++){
        if(i == 0) {
        
            result = (str[i] - '0');

        } else {

            result = result *10 + (str[i] - '0');
        }
        printf("value : %d\n", (int)result);
    
	}

    printf("char : %s\n value : %d\n", str, (int)result);

    return result;

}


void main() {

    fputs("je fput aulieu de printf\n", stdout);
    printf("final : %d\n", (int)descendingOrder(14523));


}

