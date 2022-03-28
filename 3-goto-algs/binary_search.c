#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = 51; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;
    int mid;
	/* TODO: Implement binary search */
searchagain:
     if (start > end)
     	goto endfunction;
     
     mid = (start + end) / 2;
     if (dest == v[mid]) 
     	goto result;

    if(dest < v[mid]) {
        mid--;
        end = mid;
    }
    if(dest < v[mid])
    	goto searchagain;
    if(dest >= v[mid]) {
    	mid++;
    	start = mid;
    }
     if(dest >= v[mid])
     	goto searchagain;

result:
    printf("%d\n", mid);
    goto endfunction;

endfunction:
	(void) dest;
	(void) start;
	(void) end;
}
