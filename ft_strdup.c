#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(*dest) * len + 1);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main (void)
{    
   // Исходная строка
   char str [11] = "0123456789";
   // Переменная, в которую будет помещен указатель на дубликат строки
   char *istr;

   // Дублирование строки
   istr = ft_strdup (str);

   // Вывод дубликата на консоль
   printf ("Dublicate: %s\n", istr);

   // Очищаем память, выделенную под дубликат
   free (istr);

   return 0;
}