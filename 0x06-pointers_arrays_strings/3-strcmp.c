3-strcmp.c
#include &quot;main.h&quot;
/**
 * _strcmp - compare string values
 * @s1: input value

 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != &#39;\0&#39; &amp;&amp; s2[i] != &#39;\0&#39;)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
