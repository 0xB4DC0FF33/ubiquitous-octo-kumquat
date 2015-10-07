#include <unistd.h>


int ft_strlen(char *str)               //////Return the length of a string//////
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_revStr(char *strIn)           //////Reverse a string//////
{
	int i;
	int j;
	char *strOut;

	i = 0;
	j = strlen(strIn);
	while (i != '\0')
	{
		strOut[j] = strIn[i];
		j--;
		i++;
	}
	return strOut;
}

void ft_putstr (char *str)             //////Print a string without formatting//////
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, str[i], 1);
    }
}

int ft_power(int nb, int pow)       ///////Return Arg1 ^ Arg2 //////
{
	int i;

	i = 0;
	while(i <= pow)
	{
		nb = nb * nb;
	}
	return(nb);
}

int ft_atoi(char *str)              //////Converts a char to an int//////
{
	int result;
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);
	while(str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] < = '9')
		{
			result = (str[j] - 48) * ft_power(10, i);
		}
	}
	return (result);
}
