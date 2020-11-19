#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t y;

	i = 0;
	j = 0;
	while (dst[i] && i < n)
		i++;
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < n)
		dst[i + j] = '\0';
	y = 0;
	while (src[y])
		y++;
	return (i + j);
}

int main(void)
{
	char my_strlcat_src[7] = "banana";
	char my_strlcat_dst[12] = "goodу";
	size_t t;
	t = ft_strlcat(my_strlcat_dst, my_strlcat_src, 15);
	printf ("%d", t);
}