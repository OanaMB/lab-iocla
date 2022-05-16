#include <stdio.h>

unsigned int get_max(unsigned int *arr, unsigned int len, unsigned int *pos)
{
	unsigned int max = 0;
	unsigned int i;

	for (i = 0; i < len; i++)
		if (max < arr[i]) {
			max = arr[i];
			*pos = i;
			printf("%d\n", *pos);
		}

	return max;
}
