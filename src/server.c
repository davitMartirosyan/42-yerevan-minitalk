/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:46 by dmartiro          #+#    #+#             */
/*   Updated: 2022/07/04 15:10:48 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minitalk.h"

int main(void)
{
    int pid = fork();
    if(pid == 0)
    {
        sleep(5);
        kill(getppid(), SIGSEGV);
    }
    else{
        while(1)
        {
            printf("1\n");
            sleep(1);
        }
    }

}