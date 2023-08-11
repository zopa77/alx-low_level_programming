#include <stdio.h>
 /**
  * main - this function print type of my machin
  *
  * Return:zero
  */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of long long int: %lu byte(s)", sizeof(long long int));
	printf("size of float: %lu byte(S)", sizeof(float));
	return (0);
}

