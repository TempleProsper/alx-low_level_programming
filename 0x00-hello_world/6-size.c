#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d 1byte(s)\n", sizeof(char));
	printf("Size of an int: %d 4byte(s)\n", sizeof(int));
	printf("Size of long int: %d 4byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d 8byte(s)\n", sizeof(long long int));
	printf("Size of a  float: %d 4byte(s)\n", sizeof(float));
	return (0);
}
