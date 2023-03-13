#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * count_words - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}

/**
 * copy_word - copy a word from a string
 * @str: the string to copy the word from
 * @start: the start position of the word
 * @end: the end position of the word
 *
 * Return: a pointer to the copied word
 */
char *copy_word(char *str, int start, int end)
{
	int i;
	char *word;

	word = malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
		return (NULL);

	for (i = start; i <= end; i++)
	{
		word[i - start] = str[i];
	}
	word[i - start] = '\0';
	return (word);
}
/**
 * strtow - split a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < count; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			len = 0;
			for (k = i; str[k] != '\0' && str[k] != ' '; k++)
			{
				len++;
			}
			words[j] = copy_word(str, i, i + len - 1);
			if (words[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
