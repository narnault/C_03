#include <stdio.h>

char    *ft_strncat(char *str, char *dest, unsigned int nb)
{
        unsigned int     i;
        unsigned int     j;

        i = 0;
        j = 0;
        while (dest[i])
          i++;  
        while (str[j] && j < nb)
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
    unsigned int nb = 10;
    char str[] = " salut ca va";
    char dest[] = "oui je vais bien";
    ft_strncat(str, dest, nb);
    printf ("%s", (dest));
}
