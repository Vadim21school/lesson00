size_t	strlcpy (char *dst, const char *src, size_t size)
{
	unsigned int	i;

	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	
	i = 0;
	while (src[i])
		i++;
	return (i);
}