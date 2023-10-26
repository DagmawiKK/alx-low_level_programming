/**
 * wildcmp - recursively compares two strings with support for wildcard patterns
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

