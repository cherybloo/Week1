#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int		counter;
	int		numeric;

	counter = 0;
	numeric = 0;
	while(str[counter] != '\0')
	{
		if (str[counter] >= '0' && str[counter]  <= '9') {
			numeric++;
		}
		counter++;
	}
	if (numeric == counter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	char *str = "2321424";

	printf("%i\n",ft_str_is_numeric(str));
	return (0);
}