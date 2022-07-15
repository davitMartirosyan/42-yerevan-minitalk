/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:46:37 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/15 19:47:34 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	pid(void)
{
	char	*pid;

	pid = ft_itoa(getpid());
	write(1, "Server ID: ", 11);
	write(1, pid, ft_strlen(pid));
	write(1, "\n", 1);
	free(pid);
}

void	handle(int sig)
{
	static unsigned char	bits = 0;
	static int				octal = 0;

	++octal;
	bits = bits << 1;
	if (sig == SIGUSR1)
		bits = bits | 1;
	if (octal == 8)
	{
		write(1, &bits, 1);
		octal = 0;
	}
}

void	send_data(int id, char *data)
{
	int		i;
	char	c;

	while (*data)
	{
		i = 8;
		c = *data++;
		while (i--)
		{
			if (c >> i & 1)
				kill(id, SIGUSR1);
			else
				kill(id, SIGUSR2);
			usleep(100);
		}
	}
}
