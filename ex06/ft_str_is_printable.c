#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int     counter;
    int     printable;

    counter = 0;
    printable = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] >= ' ' && str[counter] <= '~')
        {
            printable++;
        }
        counter++;
    }
    if (printable == counter)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    char *str = "hi this is everyhing okay!";
    printf("%i\n",ft_str_is_printable(str));
    return (0);
}