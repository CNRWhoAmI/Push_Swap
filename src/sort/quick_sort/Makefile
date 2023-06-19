OBJDIR	:= ../../../objects
NAME	:= $(OBJDIR)/libft.a
CFLAGS	:= -Wall -Wextra -Werror -I ../../../include -c
FILES	:= ft_quicksort_stack_a.c\
	ft_quicksort_stack_b.c\
	ft_quicksort_three_root_a_and_b.c\
	ft_sort_three_b.c\
	ft_mediane_of_numbers.c
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
