/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:46 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/15 19:02:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minitalk.h"

static void	handle(int sig)
{
    //01000001 -> A
    //
    unsigned char bits;
    
    
    if(sig == SIGUSR1)
        write(1, "1", 1);
    else if(sig == SIGUSR2)
        write(1, "0", 1);
}


int main(void)
{
   	pid();
	signal(SIGUSR1, handle);
	signal(SIGUSR2, handle);
	while (1)
		pause();

}