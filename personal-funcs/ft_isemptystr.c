#include "libft.h"

int		ft_isemptystr(char *str, int consider_space)
{
	int		i;
	int		min;
	int		max;

	i = -1;
	min = 32 + consider_space;
	max = 126;
	while (str[++i])
	{
		if (str[i] >= min && str[i] <= max)
			return (0);
	}
	return (1);
}
