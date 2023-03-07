/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
int i, j;

for (i = 0; s[i] != '\0'; )
{
i++;
}

for (j = 0; j < i; j++)
{
if (s[j] == c)
{
break;
}
if (s[j] != c && s[j] == '\0')
{
break;
}
}

return (&s[j]);
}
