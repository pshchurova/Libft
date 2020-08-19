#include <libft.h>

int		ft_count2darray(char **arr)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (arr[++i])
		count++;
	return (count);
}
