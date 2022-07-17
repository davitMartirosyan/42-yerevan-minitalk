# 🖥 -> 🖥 42-yerevan-minitalk

![Contributors](https://img.shields.io/github/contributors/davitmartirosyan/42-yerevan-minitalk)
![Forks](https://img.shields.io/github/forks/davitmartirosyan/42-yerevan-minitalk)
![Stars](https://img.shields.io/github/stars/davitmartirosyan/42-yerevan-minitalk)
![Licence](https://img.shields.io/github/license/davitmartirosyan/42-yerevan-minitalk)
![Issues](https://img.shields.io/github/issues/davitmartirosyan/42-yerevan-minitalk)


## The project will discover how to communicate between two processes

### Description

The minitalk project discover how to create a communication between two terminals like a client and server architecture. For that we used __signal.h__ library. 

### Mandatory

- Produce `server` & `client` mini architecture
- `client` must communicate a string passed as a parameter to `server`
- We can only use 2 default signals: `SIGUSR1` AND `SIGUSR2`

### Allowed Functions

- [`malloc`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`free`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`write`](https://man7.org/linux/man-pages/man2/write.2.html)
- [`getpid`](https://man7.org/linux/man-pages/man2/getpid.2.html)
- [`signal`](https://man7.org/linux/man-pages/man2/signal.2.html)
- [`sigemptyset & sigaddset`](https://man7.org/linux/man-pages/man3/sigsetops.3.html)
- [`sigaction`](https://man7.org/linux/man-pages/man2/sigaction.2.html)
- [`pause`](https://man7.org/linux/man-pages/man2/pause.2.html)
- [`kill`](https://man7.org/linux/man-pages/man2/kill.2.html)
- [`sleep`](https://man7.org/linux/man-pages/man3/sleep.3.html)
- [`usleep`](https://man7.org/linux/man-pages/man3/usleep.3.html)
- [`exit`](https://man7.org/linux/man-pages/man3/exit.3.html)

### How to use?

#### You can use these package for practical purpose.

#### Cloning Process

- Clone [`minitalk`](https://github.com/davitmartirosyan/42-yerevan-minitalk) repository.
- Clone [`libft`](https://github.com/davitmartirosyan/42-yerevan-libft) package from my github profile.
- Put the libft repo to the Cloned minitalk repository.
- Run [`make`] command in main directory. ($ > make).