#include <string.h>
#include <stdio.h>

size_t	*ft_strlen (const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return ((int*)i);
}

int main (void)
{    
   // Массив с исходной строкой
   char str [11] = "0123456789";

   //Определение длины строки и вывод результата на консоль
   printf ("%s - %d\n", str, ft_strlen(str));

   return 0;
}
