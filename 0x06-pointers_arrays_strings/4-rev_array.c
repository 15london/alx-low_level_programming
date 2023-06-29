4-rev_array.c
#include &quot;main.h&quot;
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i &lt; n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
