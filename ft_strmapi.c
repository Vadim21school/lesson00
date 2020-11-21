#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	n;

	if (!s)
		return (NULL);
	n = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[n] != '\0')
	{
		ptr[n] = (*f)(n, s[n]);
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
