/**
 *_strncat - updates the value of the variable
 * the pointer points to 98
 * @dest: pointer to the variable to update
 * @src: pointer to the variable
 * @n: bytes to copy
 * Return: pointer to the updated variable
 */

char *_strncat(char *dest, char *src, int n)
{
int lengthOfDest = 0, eachCharacter, lengthOfSrc = 0;

while (dest[lengthOfDest] != '\0')
{
lengthOfDest++;
}

for (eachCharacter = 0; eachCharacter <= lengthOfDest; eachCharacter++)
{
if (dest[eachCharacter] == '\0')
{
while (src[lengthOfSrc] != '\0' && lengthOfSrc < n)
{
dest[eachCharacter] = src[lengthOfSrc];
lengthOfSrc++;
eachCharacter++;
}
}
}
dest[eachCharacter] = '\0';
return (dest);
}
