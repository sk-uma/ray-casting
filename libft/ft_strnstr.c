#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (little[0] == '\0')
		return ((char *)&(big[0]));
	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
			if (little[++j] == '\0')
				return ((char *)&(big[i]));
		i++;
	}
	return (NULL);
}
