2-strncpy.c

#include &quot;main.h&quot;
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j &lt; n &amp;&amp; src[j] != &#39;\0&#39;)
{
dest[j] = src[j];
j++;
}
while (j &lt; n)
{
dest[j] = &#39;\0&#39;;
j++;
}
return (dest);
}
