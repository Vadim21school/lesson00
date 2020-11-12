#include <string.h>
#include <stdio.h>

int	ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(((char *)arr1)[i] != ((char *)arr2)[i])
			return(((unsigned char*)arr1)[i] - (((unsigned char*)arr2)[i]));
		i++;
	}
	return (0);
}

int main (void)
{
   // Исходные массивы
   unsigned char src[15]= "1234567890";
   unsigned char dst[15]= "123456890";

   // Сравниваем первые 10 байт массивов
   // и результат выводим на экран
   if (ft_memcmp (src, dst, 10) == 0)
      printf("indenticli.");
   else
      printf("No indenticli");

   return 0;
}