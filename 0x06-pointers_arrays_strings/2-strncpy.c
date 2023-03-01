/**
 *_strncpy - updates the value of the variable
 * the pointer points to 98
 * @dest: pointer to the variable to update
 * @src: pointer to the variable
 * @n: bytes to copy
 * Return: pointer to the updated variable
 */

char *_strncpy(char *dest, char *src, int n)
{
int lengthOfDest = 0;

while (lengthOfDest < n)
{
dest[lengthOfDest] = src[lengthOfDest];
if (src[lengthOfDest] == '\0')
{
break;
}
lengthOfDest++;
}

return (dest);
}
