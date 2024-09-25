/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <jalbiser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:54:21 by jalbiser          #+#    #+#             */
/*   Updated: 2024/09/25 02:17:32 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	if (argc < 5 || argc > 6)
	{
		printf("Error: Usage: <number_of_philosophers> <time_to_die> <time_to_eat>\
<time_to_sleep> [number_of_times_each_philosopher_must_eat]\n");
		return (1);
	}
	if (!is_valid_arguments(argv + 1))
	{
		printf("Error: These arguments are poorly formatted\n");
		return (1);
	}
	return (0);
}
