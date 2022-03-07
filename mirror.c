#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	/* TODO */
	(void) s;
	char *oglindit;
	oglindit = malloc(1000);
	if(!oglindit)
		printf("ALocare nereusita\n");
	int i, j = 0;
	for(i = strlen(s) - 1; *(s + i)!=0 ; i--){
		*(oglindit + j) = *(s + i);
		j++;
	}
		printf("%s\n", oglindit);
		free(oglindit);
}

int main()
{
	/* TODO: Test function */
    char *c;
    c = malloc(10000);
    if(!c)
    	printf("Alocare nereusita\n");
    scanf("%[^\n]s", c);
    mirror(c);
    free(c);
	return 0;
}

