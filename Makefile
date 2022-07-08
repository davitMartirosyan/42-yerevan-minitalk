CLIENT = client
SERVER = server
SRC = src/
LIBFT = libft.a
LIBC = -L./libft -lft
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

all : $(LIBFT) $(SERVER) $(CLIENT)
	@rm -f $(SRC)*.o

$(LIBFT) :
	@make -C libft

$(SERVER) : $(SRC)server.o $(SRC)handlers.o
	@$(CC) $(SRC)server.o $(SRC)handlers.o $(LIBC) -o $@

$(CLIENT) : $(SRC)client.o
	@$(CC) $(SRC)client.o $(LIBC) -o $@

$(SRC)%.o : $(SRC)%.c includes/minitalk.h
	@$(CC) $(CC_FLAGS) -c  $< -o $@

fclean : 
	@make fclean -C libft
	@rm -f $(SERVER) $(CLIENT)