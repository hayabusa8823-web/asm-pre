NAME := libasm.a 

CC := gcc 

# CFLAGS := -Wall -Werror -Wextra

SRCS :=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

BSRCS := ft_list_size_bonus.s ft_list_push_front.s

OBJS := $(SRCS:%.s=%.o)

BOBJS := $(BSRCS:%.s=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o:%.s
	nasm -fmacho64 -o $@ $<
	# $(CC)$(CFLAGS) -c $< -o $@

bonus: all $(BOBJS)
	ar -rc $(NAME) $(BOBJS)

# $(BOBJS):%.s
# 	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all