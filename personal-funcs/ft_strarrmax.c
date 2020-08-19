#include <libft.h>

int		ft_strarrmax(char **arr)
{
	int		i;
	int		max;
	int		curr_len;

	i = -1;
	max = 0;
	while (arr[++i])
	{
		curr_len = ft_strlen(arr[i]);
		if (curr_len > max)
			max = curr_len;
	}
	return (max);
}
