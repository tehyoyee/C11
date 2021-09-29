NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
RM = rm -f
AR = ar
CR = cr
SRCDIR = srcs
INCDIR = includes
SRCS = calculator.c ft_atoi.c ft_put.c main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCDIR)
	
$(NAME): $(OBJS)
	$(AR) $(CR) $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all