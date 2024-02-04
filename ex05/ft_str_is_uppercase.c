#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		counter;
	int		uppercase;

	counter = 0;
	uppercase = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			uppercase++;
		}
		counter++;
	}
	if (uppercase == counter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char *str = "XDTCYFVGBUNIa";

	printf("%i\n",ft_str_is_uppercase(str));
	return (0);
}