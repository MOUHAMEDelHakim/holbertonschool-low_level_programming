#include "main.h"
/**
 * print_chessboard - Print a chessb.
 * @a: chessb
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; a[i][7]; i++)
{
for (j = 0; j < 8; j++)
putchar(a[i][j]);

putchar('\n');
}
}
