#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int     i;
        unsigned int     j;
        unsigned int     k;

        i = 0;
        j = 0;
        k = 0;
        while (s1[i] != '\0' && i <= n) {
                j += s1[i];
                i++;
        }
        i = 0;
        while (s2[i] != '\0' && i <= n) {
                k += s2[i];
                i++;
        }
        if (j < k)
          return (0);
        if (j > k)
          return (1);
        if (j == k)
          return (NULL);
}

int main()
{
        unsigned int n = 7;
        char    *s1 = "qqqqqqqqqqqqq";
        char    *s2 = "tqqqqqqqqqqqq";

        printf ("%i", ft_strncmp(s1, s2, n));
}
