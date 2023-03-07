/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; )
{
for (j = 0; j < i; j++)
{
if (s[i] == accept[j])
{
count++;
}
}
i++;
}

return (count);
}
