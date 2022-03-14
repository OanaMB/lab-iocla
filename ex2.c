#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern);

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";
	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s\n", delete_first(s, pattern));

    

	return 0;
}

char* delete_first(char *s, char *pattern) {
    static char s1[13];
    static char pattern1[3];

    strcpy(s1, s);
    strcpy(pattern1, pattern);
   int c = strlen(pattern1);
   for(int i = 0; s[i] != 0; i++){
      char *p = strstr((char*)(s1+i),pattern1);
     if(p) {

          for(int j = p - s1; j < strlen(s1); j++) {
          	s1[j] = s1[j+2];}
           break;
     }

   }
   
    return s1;

}
