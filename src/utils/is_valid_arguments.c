/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <jalbiser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 02:04:00 by jalbiser          #+#    #+#             */
/*   Updated: 2024/09/25 02:22:32 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_valid_arguments(char **args)
{
	int	i;
	int	a;

	i = 0;
	while (args[i])
	{
		if (args[i][0] == '\0')
			return (0);
		a = 0;
		while (args[i][a])
		{
			if (!ft_isdigit(args[i][a]))
				return (0);
			a++;
		}
		if ((ft_atoi(args[i]) <= 0))
			return (0);
		i++;
	}
	return (1);
}
