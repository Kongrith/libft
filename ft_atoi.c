/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:14:00 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 13:59:51 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int ch)
{
	if ((9 <= ch && ch <= 13) || ch == 32)
	{
		return (1);
	}
	else
		return (0);
}

int	manage_character(char *str, int *ptr)
{
	int	index;
	int	sign;

	sign = 1;
	index = 0;
	while (ft_isspace(str[index]))
		index++;
	while (str[index] && (str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
		{
			sign *= -1;
		}
		index++;
	}
	*ptr = index;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	input_number;
	int	sign;
	int	index;

	sign = manage_character(str, &index);
	input_number = 0;
	while (str[index] != '\0' && '0' <= str[index] && str[index] <= '9' )
	{
		input_number = 10 * input_number + (str[index] - '0');
		++index;
	}
	return (input_number * sign);
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	return (0);
}
*/
