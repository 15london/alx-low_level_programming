6-cap_string.c
#include &quot;main.h&quot;
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while (!(str[index] &gt;= &#39;a&#39; &amp;&amp; str[index] &lt;= &#39;z&#39;))
index++;
if (str[index - 1] == &#39; &#39; ||

    str[index - 1] == &#39;\t&#39; ||
    str[index - 1] == &#39;\n&#39; ||
    str[index - 1] == &#39;,&#39; ||
    str[index - 1] == &#39;;&#39; ||
    str[index - 1] == &#39;.&#39; ||
    str[index - 1] == &#39;!&#39; ||
    str[index - 1] == &#39;?&#39; ||
    str[index - 1] == &#39;&quot;&#39; ||
    str[index - 1] == &#39;(&#39; ||
    str[index - 1] == &#39;)&#39; ||
    str[index - 1] == &#39;{&#39; ||
    str[index - 1] == &#39;}&#39; ||
    index == 0)
str[index] -= 32;
index++;
}
return (str);
}
