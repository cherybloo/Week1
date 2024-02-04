#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0') {
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}

int	main(void)
{
	char testing[5] = "testi";

	printf("%s\n",ft_strlowcase(testing));
	return (0);
}