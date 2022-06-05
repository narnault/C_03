#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *str, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;

        i = 0;
        j = 0;
        while (dest[i])
                i++;
        while (str[j])
                j++;
        if (i + j > size)
                return (i + j);
        j = 0;
        while (str[j] != '\0')
        {
                dest[i] = str[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (i);
}

int main()
{
    unsigned int size = 50;
    char str[] = "debutnnn";
    char dest[] = "findashge";
    

    printf ("\n%i\n", ft_strlcat(dest, str, size));
    printf ("\n%s", dest);
}

