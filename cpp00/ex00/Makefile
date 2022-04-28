NAME			:=	megaphone

CXX				:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98

SRCS			:=	megaphone.cpp
OBJS			:=	$(SRCS:.cpp=.o)

RM				:=	rm -f

.PHONY		:		all
all				:		$(NAME)

$(NAME)		:		$(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o				:		%.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

.PHONY		:		clean
clean			:
	$(RM) $(OBJS)

.PHONY		:		fclean
fclean		:	clean
	$(RM) $(NAME)

.PHONY		:		re
re				:		fclean all
