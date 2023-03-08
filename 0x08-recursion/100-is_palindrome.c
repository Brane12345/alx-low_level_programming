#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _check_palindrome - checks if a substring is a palindrome
 * @s: the string to check
 * @start: the starting index of the substring
 * @end: the ending index of the substring
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_check_palindrome(s, 0, len - 1));
}
