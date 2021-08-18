FILES			=	./project/draw_line.c \
					./project/main.c \
					./project/my_put_pixel.c

HEADS			=	./includes/fdf.h

HEADS_DIR   	=   ./includes/
LIBFT_DIR		=	./libft/
MINILIB_DIR		=	./minilibx_macos/

LIBS			=   -lmlx -lft -L$(MINILIB_DIR) -L$(LIBFT_DIR) -framework OpenGL -framework AppKit
INCLUDES		=	-I$(HEADS_DIR) -I$(LIBFT_DIR) -I$(MINILIB_DIR)

GCC             =   gcc
OBJS            =   $(FILES:.c=.o)
FLAGS           =   -Wall -Wextra -Werror
NAME            =   fdf
LIBFT			=	$(LIBFT_DIR)libft.a
MINILIB			=	$(MINILIB_DIR)libmlx.a

.c.o: $(HEADS)
	${GCC} ${FLAGS} -c $(INCLUDES) $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(MINILIB) $(LIBFT)
	$(GCC) $(FLAGS) $(LIBS) $(INCLUDES) $(OBJS) -o $(NAME)

$(MINILIB):
	$(MAKE) -sC $(MINILIB_DIR)

$(LIBFT):
	$(MAKE) -sC $(LIBFT_DIR)

clean:
	$(MAKE) -sC $(MINILIB_DIR) clean
	$(MAKE) -sC $(LIBFT_DIR) clean
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(MINILIB_DIR)libmlx.a
	rm -rf $(LIBFT_DIR)libft.a
	rm -rf $(NAME)

re: fclean all

.PHONY: all, re, clean, $(NAME), fclean