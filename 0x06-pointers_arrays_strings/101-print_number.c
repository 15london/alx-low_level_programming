101-print_number.c
#include &quot;main.h&quot;
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n &lt; 0)
{
_putchar(&#39;-&#39;);
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + &#39;0&#39;);
}
