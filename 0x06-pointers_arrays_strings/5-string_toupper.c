/**
 *string_toupper - updates the value of the variable
 * the pointer points to 98
 * @word: pointer to the variable to update
 *
 * Return: pointer to the updated variable
 */

char *string_toupper(char *word)
{
char LOWERCASE[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char UPPERCASE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
int numOfElements, specificElement, i;

for (numOfElements = 0; word[numOfElements] != '\0'; )
{
numOfElements++;
}

for (specificElement = 0; specificElement < numOfElements; specificElement++)
{
for (i = 0; i < 26; i++)
{
if (word[specificElement] == LOWERCASE[i])
{
word[specificElement] = UPPERCASE[i];
}
}
}

return (word);
}
