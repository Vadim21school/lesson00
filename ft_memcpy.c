
#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		((char *)destination)[i] =  ((char *)source)[i];
		i++;
	}
	return (destination);
}

void main (void)
{
	char src[10] = "123456";
 
   // Массив приемник данных
	char dst[10] = "";

   // Копируем 6 байт из массива src в массив dst
   ft_memcpy (dst, src, 6);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);
}
