#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all alphabet except q & e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if(ch != q && ch != e)
		{
			putcher("ch");
		}
		ch++
	}
	putcher("\n");
	return(0);
}
