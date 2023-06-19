# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eozdur <ozduremre06@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 00:23:33 by eozdur            #+#    #+#              #
#    Updated: 2023/04/13 12:41:55 by eozdur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	:= ../../objects
NAME	:= $(OBJDIR)/libft.a
CFLAGS	:= -Wall -Wextra -Werror -I ../../include -c
FILES	:= ft_check_doubles.c\
	ft_check_sorted.c\
	ft_error.c\
	ft_ps_atoi.c\
	ft_push_swap_strlen.c\

OBJ		:= $(FILES:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJDIR)/ft_*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
