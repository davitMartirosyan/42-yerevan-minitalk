#include "../includes/minitalk.h"
//on LINUX
// SIGUSR1 -> 10 -> 1
// SIGUSR2 -> 12 -> 0
//on MAC
// SIGUSR1 -> 30 -> 1
// SIGUSR2 -> 31 -> 0

 void send_data(int id, char *data)
{
    int i;
    char c;

    while(*data)
    {
        i = 8;
        c = *data++;
        while(i--)
        {
            if(c >> i & 1)
                kill(id, SIGUSR1);
            else
                kill(id, SIGUSR2);
            usleep(100);
        }
    }
}

int main(int argc, char **argv)
{
    char *data;
    int id;

    if(argc != 3)
        return (-1);
    data = argv[2];
    id = ft_atoi(argv[1]);
    send_data(id, data);
    return (0);
}