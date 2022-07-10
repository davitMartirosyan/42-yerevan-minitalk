/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:46 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/10 08:02:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minitalk.h"

static void	handle(int sig)
{
	 
}


int main(void)
{
   	pid();
	signal(SIGUSR1, handle);
	signal(SIGUSR2, handle);
	while (1)
		pause();

}