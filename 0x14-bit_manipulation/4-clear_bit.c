Your answers to items #1 to 6 (The 5Ws + H) on the worksheet. Are the answers clear and complete?
Your answers items #19 and 20 (problem statement & sources). Specifically, does your problem statement:
Name the problem succinctly in the first sentence?
Indicate specific population affected?
Describe why your problem matters (the impact)?
Describe what reality would look like if the problem were solved?
Grammar and any writing errors that you need to correct.
#include "main.h"

/**
 * clear_bit - set the opposite of the mask
 * @num: number to set
 * @index: position
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*num &= ~mask;

	return (1);
}
