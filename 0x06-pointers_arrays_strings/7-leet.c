/**
 *leet - updates the value of the variable
 * the pointer points to 98
 * @text: pointer to the variable to update
 *
 * Return: pointer to the updated variable
 */
char *leet(char *text)
{
int i, j;

for (i = 0; text[i] != '\0'; )
{
i++;
}
for (j = 0; j < i; j++)
{
if (text[j] == 'a' || text[j] == 'A')
{
text[j] = '4';
}
if (text[j] == 'e' || text[j] == 'E')
{
text[j] = '3';
}
if (text[j] == 'o' || text[j] == 'O')
{
text[j] = '0';
}
if (text[j] == 't' || text[j] == 'T')
{
text[j] = '7';
}
if (text[j] == 'l' || text[j] == 'L')
{
text[j] = '1';
}
}
return (text);
}
