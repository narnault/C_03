#include <stdio.h>

char    *ft_strcat(char *str, char *dest)
{
        int     i;
        int     j;

        i = 0;
	j = 0;
        while (dest[i])
        	i++;  
        while (str[j])
        {
          dest[i] = str[j];
          i++;
          j++;
        }
	dest[i] = '\0';
	return (dest);
}

int main()
{
    char str[] = "debut";
    char dest[] = "fin";
    ft_strcat(str, dest);
    printf ("%s"(dest));
}
