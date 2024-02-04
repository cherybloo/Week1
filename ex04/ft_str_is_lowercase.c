#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		counter;
	int		lowercase;

	counter = 0;
	lowercase = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			lowercase++;
		}
		counter++;
	}
	if (lowercase == counter)
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
	char *str = "eavfAubernifa";

	printf("%i\n",ft_str_is_uppercase(str));
	return (0);
}