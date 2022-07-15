/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:46:28 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/15 19:46:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	main(int argc, char **argv)
{
	char	*data;
	int		id;

	if (argc != 3)
		return (-1);
	data = argv[2];
	id = ft_atoi(argv[1]);
	send_data(id, data);
	return (0);
}
