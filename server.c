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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_sigusr1(int n)
{
    printf("Remember thaht multiplication is repetitive addition\n");
}

int main(int argc, char* argv[])
{
    int pid = fork();
    if (pid == -1)
    {
        return (1);
    }

    if(pid == 0)
    {
        sleep(5);
        kill(getppid(), SIGUSR1);
    }
    else
    {
        struct sigaction sa;
        sa.sa_flags = SA_RESTART;
        sa.sa_handler = &handle_sigusr1;
        sigaction(SIGUSR1, &sa, NULL);

        int x;
        printf("What is the result of 3 x 5: ");
        scanf("%d", &x);
        if(x == 15)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
}