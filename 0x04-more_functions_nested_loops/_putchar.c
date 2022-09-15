#include "main.h"
#include <unstd.h>

/**
 * _putchar -write chracter c to stdout
 * @c :  the character to print
 *
 * return: on success 1.
 * on error, -1 is returned and errno is set aproximately.
 */
int _putchar(char c)
{
	return (write 1 &c, 1 ));
}
