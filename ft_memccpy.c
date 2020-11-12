
#include <stdio.h>
#include <stdlib.h>

void *memccpy (void *destination, const void *source, int ch, size_t count)
{
	size_t i = 0;

	while (i < count)
	{
		((char *)destination)[i] = ((char *)source)[i];
		if (((char *)destination)[i] == (char)ch)
			return (destination);
		i++;
	}
	return (0);
}

int main (void)
{
   // Массив источник данных
   unsigned char src[15] = "1234567890";

   // Массив приемник данных
   unsigned char dst[15] = "";

   // Копируем данные из массива src в массив dst
   memccpy (dst, src,'5', 10);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);
}
