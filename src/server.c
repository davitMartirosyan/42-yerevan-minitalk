/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:46 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/15 19:48:38 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	main(void)
{
	struct sigaction	sync;

	pid();
	sync.sa_handler = &handle;
	sync.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sync, NULL);
	sigaction(SIGUSR2, &sync, NULL);
	while (1)
		pause();
}
