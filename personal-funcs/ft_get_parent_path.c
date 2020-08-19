#include <libft.h>

char	*ft_get_parent_path(char *path)
{
	char	*last_slash;
	char	*parent;

	last_slash = strrchr(path, '/');
	parent = strndup(path, last_slash - path);
	return (parent);
}
