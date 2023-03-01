/**
 *cap_string - updates the value of the variable
 * the pointer points to 98
 * @word: pointer to the variable to update
 *
 * Return: pointer to the updated variable
 */

char *cap_string(char *word)
{
char LOWERCASE[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char UPPERCASE[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}' };

int specificCharacter, wordLength, specificSeparator, separatorLength, i;
for (wordLength = 0; word[wordLength] != '\0'; )
{
wordLength++;
}
for (separatorLength = 0; separators[separatorLength] != '\0'; )
{
separatorLength++;
}
for (specificCharacter = 0;
specificCharacter < wordLength;
specificCharacter++)
{
for (specificSeparator = 0;
specificSeparator < separatorLength;
specificSeparator++)
{
if (word[specificCharacter] == separators[specificSeparator])
{
for (i = 0; i < 27; i++)
{
if (word[specificCharacter + 1] == LOWERCASE[i])
{
word[specificCharacter + 1] = UPPERCASE[i];
}
}
}
}
}
return (word);
}
