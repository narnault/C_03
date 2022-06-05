#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
	int    i;
	int    j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if(to_find[j] == '\0')
				return (to_find);
		}
		if (str[i] != to_find[j])
			j = 0;
		i++;
	}                
	return 0;
}

int main()
{
        char *ret;
        char str[] = "salut c'est cool";
        char to_find[] = "est";
        ret = ft_strstr(str, to_find);
        printf("%s", ret);
	return 0;
}

