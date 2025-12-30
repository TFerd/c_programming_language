// Write a program to check a C program for rudimentary syntax errors like
// unmatched parentheses, brackets and braces. Don't forget about quotes, both
// single and double, escape sequences, and comments.
//
// I am NOT taking into account escape sequences because I don't want to
#include <stdio.h>

int is_opening_brace(char c);
char get_match(char c);

int main() 
{
  // support for 50 deep brackets
    char opened[50];
	opened[0] = '\0';

	int c, i, single_quote_f, double_quote_f;
	char match;
	i = single_quote_f = double_quote_f = 0;
	while ((c = getchar()) != EOF)
	{
		// this is written poorly and confusingly, but i want to move on in the book lol
		// not currently in a quote
		if (is_opening_brace(c) == 1 && single_quote_f == 0 && double_quote_f == 0)
		{
			if (c == '\'')
			{
				single_quote_f = 1;
			}				
			else if (c == '\"')
			{
				double_quote_f = 1;
			}
			opened[i] = c;
			i++;
		}
		else if ((match = get_match(c)) != '\0' && single_quote_f == 0 && double_quote_f == 0)
		{
			if (opened[i-1] == match)
			{
				opened[--i] = '\0';
			}
			else
			{
				printf("Unmatched char %c found for closing char %c\n", match, c);
				return 1;
			}
		}
		// currently in a quote
		else if ((match = get_match(c)) != '\0')
		{
			if (match == '\'' && single_quote_f == 1)
			{
				// attempt to close single quote
				if (opened[i-1] != '\'')
				{
					// error
					printf("Found single quote while single_quote_f flag was true,\
						but latest open tag was not single quote!\n");
					return 1;
				}
				else 
				{
					opened[--i] = '\0';
					single_quote_f = 0;
				}
			}
			else if (match == '\"' && double_quote_f == 1)
			{
				// attempt to close double quote
				if (opened[i-1] != '\"')
				{
					// error
					printf("Found double quote while double_quote_f flag was true, \
						but latest open tag was not double quote!\n");
					return 1;
				}
				else 
				{
					opened[--i] = '\0';
					double_quote_f = 0;
				}
			}
		}
	}

  
	if (opened[0] != '\0')
	{
		printf("Number of brackets does not match!\n");
		return 1;
	}

	printf("Valid number of brackets detected!\n");
	return 0;
}

// Returns 1 if character `c` is an opening bracket.
// I know there's better ways to do this but I'm only using knowledge
// from the book up to this exercise.
int is_opening_brace(char c)
{
	if (c == '\''
		|| c == '\"'
		|| c == '{'
		|| c == '('
		|| c == '[')
		return 1;
	else
		return 0;
}

// Returns expected opening sequence to a closed bracket, or '\0' if the char `c`
// is not a closing bracket.
char get_match(char c)
{
	if (c == '\'')
		return c;
	else if (c == '\"')
		return c;
	else if (c == '}')
		return '{';
	else if (c == ')')
		return '(';
	else if (c == ']')
		return '[';
	else
		return '\0';
}
