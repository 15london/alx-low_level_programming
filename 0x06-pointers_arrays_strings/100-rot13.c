100-rot13.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
int i;
int j;
char data1[] =
&quot;ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz&quot;;
char datarot[] =
&quot;NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm&quot;;
for (i = 0; s[i] != &#39;\0&#39;; i++)
{
for (j = 0; j &lt; 52; j++)
{
if (s[i] == data1[j])
{

s[i] = datarot[j];
break;
}
}
}
return (s);
}
