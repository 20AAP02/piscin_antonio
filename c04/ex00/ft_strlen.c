#include <unistd.h>

int	ft_strlen(char *str)
{
	int		s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}
