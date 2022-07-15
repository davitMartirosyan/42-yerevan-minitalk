#include "../includes/minitalk.h"

void pid(void)
{
    char *pid;

    pid = ft_itoa(getpid());
    write(1, "Server ID: ", 11);
    write(1, pid, ft_strlen(pid));
    write(1, "\n", 1);
    free(pid);
}
