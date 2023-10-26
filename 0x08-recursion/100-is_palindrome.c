#include "main.h"

/**
 * str_len - recursively finds the length of a string
 * @s: string to evaluate
 *
 * Return: the length of s
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - recursively checks if a string is a palindrome
 * @s: string to evaluate
 * @start: pointer to the start of the string
 * @end: pointer to the end of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;
	char *start;
	char *end;

	start = s;
	len = str_len(s);
	end = s + len - 1;
	return (check_palindrome(s, start, end));
}

