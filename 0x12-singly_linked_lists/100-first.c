#include <stdio.h>
/**
 * beforeMain - prints before the main function is executed.
 */
void beforeMain(void) __attribute__((constructor));

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
