#include "main.h"
#include <stdio.c>

/**
  * main - Prints the number of args
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
