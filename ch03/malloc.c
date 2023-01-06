#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	*ptr;

	ptr = malloc(sizeof(int));
	*ptr = 10;
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	free(ptr);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
}
