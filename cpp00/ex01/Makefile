NAME			:=	phonebook

CXX				:=	c++
CXXFLAGS	:=	#-g -fsanitize=address #-Wall -Wextra -Werror -std=c++98

SRCS			:=	main.cpp phonebook.cpp contact.cpp util.cpp
OBJS			:=	$(SRCS:.cpp=.o)

INCLUDES	:=	phonebook.hpp contact.hpp

RM				:=	rm -f

.PHONY		:		all
all				:		$(NAME)

$(NAME)		:		$(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o				:		%.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

.PHONY		:		clean
clean			:
	$(RM) $(OBJS)

.PHONY		:		fclean
fclean		:		clean
	$(RM) $(NAME)

.PHONY		:		re
re				:		fclean all
