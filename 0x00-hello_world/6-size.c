#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("The size of char is %lu byte(s).\n", sizeof(char));
	printf("The size of int is %lu byte(s).\n", sizeof(int));
	printf("The size of long int is %lu byte(s).\n", sizeof(long int));
	printf("The size of long long int is %lu byte(s).\n", sizeof(long long int));
	printf("The size of float is %lu byte(s).\n", sizeof(float));

return (0);
}
