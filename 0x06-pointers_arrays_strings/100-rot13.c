#include <stdio.h>
/**
 *rot13 - updates the value of the variable
 * the pointer points to 98
 * @text: pointer to the variable to update
 *
 * Return: pointer to the updated variable
 */

char *rot13(char *text)
{
char ALPHABETS[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M' };
char alphabets[27] = { 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 'Y', 'Z' };

int i, j, k;

for (i = 0; text[i] != '\0'; i++)
{
for (j = 0; j < 27; j++)
{
if (text[i] == ALPHABETS[j])
{
k = alphabets[j];
text[i] = k;
}
else
{
k = ALPHABETS[j];
text[i] = k;
}
}
}

return (text);
}
