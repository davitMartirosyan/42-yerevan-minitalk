#include "../includes/minitalk.h"
// SIGUSR1 -> 10 -> 1
// SIGUSR2 -> 12 -> 0


int main(int argc, char *argv[])
{
    int pid;
    int c;
    char *s;

    if (argc != 3)
        return (1);
    pid = ft_atoi(argv[1]);
    s = argv[2];
    while (*s)
    {
        c = 7;
        while (c >= 0)
        {
            if (((*s & 1 << c ) ? 1 : 0) == 0)
                kill(pid, SIGUSR2);
            else if (((*s & 1 << c ) ? 1 : 0) == 1)
                kill(pid, SIGUSR1);
            c--;
        }
        ++s;
    }
}