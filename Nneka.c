#include <stdio.h>

int main(void)
{
	int beans;
	int *t;

	beans = 10;

	t = &beans;

	printf(" the address of 'beans' is: %p\n", &beans);

	printf(" the address stored in 't': %p\n", t);

	printf(" value of beans stored in t: %d\n", *t);

	return 0;

}
