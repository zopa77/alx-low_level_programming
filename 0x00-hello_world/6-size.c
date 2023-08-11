#include <stdio.h>

 /**
  * main -  function is main caluclate the size
  *
  * Return: always 0
  */

int main(void)
{


	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(S)\n", sizeof(float));
	return (0);

}

