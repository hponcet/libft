#include "libft.h"

void	ft_putendl(char const *s)
{
	int	retline;
	size_t	i;

	i = 0;
	retline = '\n';
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &retline, 1);
}
