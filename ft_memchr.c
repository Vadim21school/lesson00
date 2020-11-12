
#include <stdio.h>
#include <string.h>

void *memchr (const void *arr, int c, size_t n)
{
	size_t i = 0;

	while (i < n)
	{
		if (((unsigned char *)arr)[i] == (unsigned char)c)
			return ((unsigned char*)arr + i);
		i++;
	}
}

int main (void)
{
   // Исходный массив
   unsigned char src[15] = "1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = memchr (src, '4', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
   	sym[0] = '!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

   return 0;
}