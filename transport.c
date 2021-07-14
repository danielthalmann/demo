#include <stdbool.h>
#include <stdio.h>

bool isValidWalk(const char *walk) {

  int n = 0, s = 0, w = 0, e = 0;
  char d;
  
  while((d = *(walk++)) ){
    printf("%c", d);
    switch(d){
        case 'n':
          n++;
        break;
        case 's':
          s++;
        break;
        case 'w':
          w++;
        break;
        case 'e':
          e++;
        break;
    
    }
  }

	printf("n: %d s: %d e: %d w: %d \n", n, s, e, w);  

  if (n != s || w != e){
    return false;
  }
  
  if( n + s + w + e != 10){
    return false;
  }
  
  return true;

}

void main()
{
    printf("\nresult %d\n", isValidWalk("nsnsnsnsns"));
}
