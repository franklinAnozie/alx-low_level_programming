int _strlen(char *s);
int check(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
int i = (_strlen(s) - 1);
int j = 0;
return (check(s, i, j));
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @i: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check(char *s, int i, int j)
{
if (j >= i)
{
return (1);
}
if (s[i] != s[j])
{
return (0);
}
return (check(s, i - 1, j + 1));
}
