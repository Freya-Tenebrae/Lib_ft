/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:20:24 by freya             #+#    #+#             */
/*   Updated: 2021/04/15 19:33:43 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int value;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '	' || 
		str[i] == 't' || str[i] == 'n' || str[i] == 'v' || str[i] == 'f' || 
		str[i] == 'r'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] != '\0' && str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * sign);
}
