/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:11:06 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/19 02:23:00 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	return (ft_strncmp(s1, s2, MIN(ft_strlen(s1), ft_strlen(s2)) + 1));
}