#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
	    return (0);
	while ((s1[i] == s2[i]) && (i <= n))
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
    unsigned int n = -1;
    char    *s1 = "salut ca va";
    char    *s2 = "oui ca va";
    
    printf("%i", ft_strncmp(s1, s2, n));

    return 0;
}
