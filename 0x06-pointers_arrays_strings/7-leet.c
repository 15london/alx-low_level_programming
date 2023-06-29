7-leet.c
#include &quot;main.h&quot;
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int i, j;
char s1[] = &quot;aAeEoOtTlL&quot;;
char s2[] = &quot;4433007711&quot;;
for (i = 0; n[i] != &#39;\0&#39;; i++)
{
for (j = 0; j &lt; 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}

}
return (n);
}
