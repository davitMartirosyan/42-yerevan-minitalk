/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:46 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/10 02:30:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minitalk.h"

void bits(int i)
{
    printf("%d\n", i);
}

int main(void)
{
    struct sigaction synack;
    synack.sa_handler = &bits;
    synack.sa_flags = SA_RESTART;
    sigaction(SIGUSR1, &synack, NULL);
    sigaction(SIGUSR2, &synack, NULL);
    pid();
    while(1)
    {

        pause();
    }
}