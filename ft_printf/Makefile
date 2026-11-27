NAME := libftprintf.a
CC_FLAG := cc -Wall -Wextra -Werror
FILES :=
OBJS := $(FILES:.c=.o)
LIBFT := libft.a

all: $(NAME)

NAME: $(LIBFT)

LIBFT: $(MAKE) -C ./libft

%.o:%.c
	$(CC_FLAG) -C $< -o $@

clean: $(MAKE) clean -C ./libft

fclean: $(MAKE) fclean -C ./libft

re: $(MAKE) re -C ./libft