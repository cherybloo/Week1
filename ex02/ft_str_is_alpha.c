#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		counter;
	int		alphabets;

	counter = 0;
	alphabets = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter]  <= 'Z' ||  str[counter] >= 'a' && str[counter] <= 'z') {
			alphabets++;
		}
		counter++;
	}
	if (alphabets == counter)
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
	char *str = "aafdwefq@fqefqf";

	printf("%i\n",ft_str_is_alpha(str));
	return (0);
}