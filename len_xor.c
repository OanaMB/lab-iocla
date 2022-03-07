#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	(void) str;
        int i;
        for(i = 0; *(str + i)!=0; ++i);
        return i;
	return -1;
}

void equality_check(const char *str)
{
	/* TODO */
	(void) str;
       int i ;
       for(i = 0; *(str + i)!=0; i++){
       	unsigned char diff = *(str + i) ^ *(str + (i + (1<<i)) % my_strlen(str));
         if(!diff)
         	printf("%p\n", str+i);

}
}

int main(void)
{
	/* TODO: Test functions */
      char *c;
      c = malloc(1000);
      scanf("%[^\n]s",c);
      int length = my_strlen(c);
      printf("%d\n", length);
      equality_check(c);
      free(c);
	return 0;
}

