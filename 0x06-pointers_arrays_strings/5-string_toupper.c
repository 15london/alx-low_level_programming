5-string_toupper.c
#include &quot;main.h&quot;
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != &#39;\0&#39;)

{
if (n[i] &gt;= &#39;a&#39; &amp;&amp; n[i] &lt;= &#39;z&#39;)
n[i] = n[i] - 32;
i++;
}
return (n);
}
