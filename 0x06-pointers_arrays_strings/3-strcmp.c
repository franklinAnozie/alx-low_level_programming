/**
 *_strcmp - updates the value of the variable
 * the pointer points to 98
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable
 *
 * Return: pointer to the updated variable
 */

int _strcmp(char *s1, char *s2)
{
int lengthOfs1 = 0, retVal = 0, comp = 0;

while (s1[lengthOfs1] != '\0')
{
lengthOfs1++;
}

while (s1[comp] != '\0')
{
if (s1[comp] == s2[comp])
{
comp++;
}
if (s1[comp] > s2[comp])
{
retVal = 15;
break;
}
if (s1[comp] < s2[comp])
{
retVal = -15;
break;
}
}

return (retVal);
}
