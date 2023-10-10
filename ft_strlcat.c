/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:41:19 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/03 14:01:11 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_string(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
		++index;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	length;

	length = count_string(dest);
	index = 0;
	while (*(src + index) != '\0')
	{
		*(dest + index + length) = *(src + index);
		++index;
	}
	*(dest + index + length) = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	num_src;
	unsigned int	num_dest;

	num_src = count_string(src);
	num_dest = count_string(dest);
	if (size < num_src + num_dest - 1)
		return (num_dest);
	dest = ft_strcat(dest, src);
	num_dest = count_string(dest);
	return (num_dest + num_src);
}

/*
int	main(void)
{
	char dest[] = "42";
	char src[] = "bangkok";
	printf("%u\n", ft_strlcat(dest, src, 15));
	return (0);
}
*/
