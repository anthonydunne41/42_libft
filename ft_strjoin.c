
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	len;
	int	i;
	int	j;
	char	*str;
	
	while (s1[i])
		len++;
	i = 0;
	while (s2[i])
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1);
	i = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;	
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
