#include "libft.h"

char	*ft_strnchr(char *s, char c, int offset)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (s + i + offset);
	return (NULL);
}
