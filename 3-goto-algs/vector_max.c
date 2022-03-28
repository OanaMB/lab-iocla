#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;
	int n;
	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;

element:
   if(i > 7)
   goto print;

    n = v[i] - max;

    if (n > 0) 
       goto elementgasit;

    if (n <= 0) 
    	goto elementnegasit;
print:
    printf("%d\n", max);
    goto end;

elementnegasit:
	i++;
	goto element;

elementgasit:
	i++;
	max = v[i];
	goto element;
end:
	(void)i;
	(void) max;

	
}

