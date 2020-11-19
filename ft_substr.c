
#include <string.h>

#include <stdlib.h>
#include <stdio.h>


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int s_len;
	char *substr;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
	{
		j++;
	}
	s_len = j - 1;
	if (s_len < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int main(void)
{
  char str[] = "Helloooooo, world!";
  char *t;
  t = ft_substr(str, 12, 3);
  printf ("%s", t);
  return (0);
}