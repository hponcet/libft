#include <stdio.h>


static unsigned int	ft_count_word(char const *s, char c)
{
	size_t				i;
	unsigned int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			if (s[i + 1] != c && s[i + 1])
				   count++;
			i++;
		}
		while (s[i] != c && s[i])
		{
			if (count == 0)
				count++;
			i++;
		}
	}
	return (count);
}

int main(void)
{
	const char *str = "";

	printf("%u", ft_count_word(str, '*'));
	return(0);
}

