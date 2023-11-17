#include <stdio.h>
#include <stdlib.h>
#include "regex.h"

/**
 * main - entry point
 * Return: EXIT_SUCESS|FAILURE
 */

int main(void)
{
	TEST_MATCH("H", "H");
	TEST_MATCH("HH", "H");
	TEST_MATCH("HH", "H*");
	TEST_MATCH("HHHHHHHHHHHHHHHHHHH", "H*");

	TEST_MATCH("Holberton", ".*");
	TEST_MATCH("Alex", ".*");
	TEST_MATCH("Guillaume", ".*");
	TEST_MATCH("Julien", ".*");

	TEST_MATCH("Holberton", "Z*H.*");		  /* 1 */
	TEST_MATCH("Holberton", "Z*H.*olberton"); /* 1 */
	TEST_MATCH("Holberton", "Z*H.*o.");		  /* 0 */
	TEST_MATCH("Holberton", "Z*H.*o");		  /* 0 */

	TEST_MATCH("Holberton", "holberton"); /* 0 */
	TEST_MATCH("Holberton", ".olberton"); /* 1 */

	TEST_MATCH("!H@o#l$b%e^r&t(o)n_", "!.@.#.$.%.^.&.(.)._"); /* 1 */

	return (EXIT_SUCCESS);
}
