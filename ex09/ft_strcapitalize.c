#include <stdio.h>

char	uppercase(char c)
{
	return (c - 32);
}

char	lowercase(char c)
{
	return (c + 32);
}

char	*ft_strcapitalize(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <='z')
		{
			if (counter == 0 || str[counter - 1] >= 32 && str[counter - 1] <= 47 || str[counter -1 ] >= 58 && str[counter - 1] <= 64 || str[counter - 1] >= 91 && str[counter - 1] <= 96 && str[counter - 1] >= 123 && str[counter - 1] <= 126)
			{
				str[counter] = uppercase(str[counter]);
			}
		}
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			if (str[counter - 1] >= 32 && str[counter - 1] <= 47 || str[counter - 1] >= 58 && str[counter - 1] <= 64 || str[counter - 1] >= 91 && str[counter - 1] <= 96 && str[counter - 1] >= 123 && str[counter - 1] <= 126)
			{
			}
			else
			{
				str[counter] = lowercase(str[counter]);
			}
		}
		counter++;
	}
	return (str);
}

int main(void)
{
	char name[150] = "donovan got married in Lexington, North Carolina.aa";
	printf("%s\n",ft_strcapitalize(name));
	return (0);

}