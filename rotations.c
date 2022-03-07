#include <stdio.h>

void rotate_left(int *number, int bits)
{
	/* TODO */
	(void) number;
	(void) bits;
	int rotleft = *number << bits;
	//printf("%d\n", rotleft);
	int rotright = *number >> (32 - bits);
	//printf("%d\n", rotright);
	int rotation = rotleft | rotright;
	printf("%d\n", rotation);
}

void rotate_right(int *number, int bits)
{
	/* TODO */
	(void) number;
	(void) bits;
	int rotright = *number >>  bits;
	//printf("%d\n", rotright);
	int rotleft = *number << (32 - bits);
	//printf("%d\n", rotleft);
	int rotation = rotright | rotleft;
	printf("%d\n", rotation);
}

int main()
{
	/* TODO: Test functions */
    int x, bits;
    scanf("%x %d", &x, &bits);
    rotate_left(&x,bits);
    rotate_right(&x,bits);
	return 0;
}

