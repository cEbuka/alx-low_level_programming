#include "main.h"
/**
 * _abs - computes the absulute value of an  integer
 * @a: integer to be computed
 *
 * Return: absolute value;
 */
int _abs(int a)
{
	int abs_con;

	abs_con = -1;
	if (a < 0)
		return (a * abs_con);
	return (a);
}
