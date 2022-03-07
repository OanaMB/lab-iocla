#include <stdio.h>
#include <stdlib.h>

void print_binary(int number, int nr_bits)
{
	/* TODO */
	(void) number;
	(void) nr_bits;
    printf("0b");
	for (int i = 7; i >= 0; i--) {
        int k = number >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

void check_parity(int *numbers, int n)
{
	/* TODO */
	(void) numbers;
	(void) n;
	for (int i = 0; i < n; i++) {
		if(*(numbers+i) & 1)
			printf("0x%08x\n", *(numbers + i));
		else{
			print_binary(*(numbers + i), 32);
		}
	}
}

int main()
{
	/* TODO: Test functions */
   int *str;
   str = malloc(30);
   if(!str)
   	printf("Alocare nereusita\n");
   int n;
   scanf("%d", &n);
   for(int i = 0; i < n; i++) {
   	scanf("%d", str + i);
   }
   check_parity(str, n);

   free(str);
	return 0;
}

