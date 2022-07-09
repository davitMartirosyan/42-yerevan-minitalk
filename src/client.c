#include "../includes/minitalk.h"
//on LINUX
// SIGUSR1 -> 10 -> 1
// SIGUSR2 -> 12 -> 0
//on MAC
// SIGUSR1 -> 30 -> 1
// SIGUSR2 -> 31 -> 0


int main(int argc, char *argv[])
{
    int pid;
    char *s;

    if (argc != 3)
        return (1);
    pid = ft_atoi(argv[1]);
    s = argv[2];
    kill(pid, SIGUSR1);
    return (0);
}