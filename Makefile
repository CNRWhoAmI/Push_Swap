NAME		:= push_swap.a 

OBJDIR		:= objects
LIBFT		:= $(OBJDIR)/libft.a
FT_PRINTF	:= $(OBJDIR)/ft_printf.a
RULES		:= $(OBJDIR)/rules.a
SORT		:= $(OBJDIR)/sort.a
QUICK		:= $(OBJDIR)/quick.a
ARG			:= $(OBJDIR)/arg.a
UTILS		:= $(OBJEDIR)/utils.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -I ./include

$(NAME): $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(GNL) $(ARG) $(SORT) $(RULES) $(UTILS) $(QUICK) 
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc ./src/push_swap.c push_swap.a ./libft/libft.a -I ./include -o push_swap

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@echo "LIBFT"
	@make -C libft

$(FT_PRINTF):
	@echo "FT_PRINTF"
	@make -C ft_printf

$(RULES):
	@echo "RULES"
	@make -C src/rules

$(SORT):
	@echo "SORT"
	@make -C src/sort

$(ARG):
	@echo "ARG"
	@make -C src/arg

$(UTILS):
	@echo "UTILS"
	@make -C src/utils

$(QUICK):
	@echo "QUICK"
	@make -C src/sort/quick_sort

all: $(NAME)

clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)
	@rm -rf push_swap
	@make -C libft fclean

re: fclean all

lunch_gui:
	@pip3 install push_swap_gui
	@python3 -m push_swap_gui

.PHONY: all re clean fclean m lunch_gui
