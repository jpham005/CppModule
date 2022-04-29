NAME				:=	phonebook

CXX					:=	c++
CXXFLAGS		:=	-std=c++98 -Wall -Wextra -Werror
DEBUGFLAGS	:=	-g -fsanitize=address

SRCS				:=	main.cpp phonebook.cpp contact.cpp util.cpp
OBJS				:=	$(SRCS:.cpp=.o)

INCLUDES		:=	phonebook.hpp contact.hpp util.hpp system_message.hpp

RM					:=	rm -f

.PHONY			:		all
all					:		$(NAME)

$(NAME)			:		$(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

.PHONY			:		debug
debug				:		clean $(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) $(OBJS) -o $(NAME)

%.o					:		%.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

.PHONY			:		clean
clean				:
	$(RM) $(OBJS)

.PHONY			:		fclean
fclean			:		clean
	$(RM) $(NAME)

.PHONY			:		re
re					:		fclean all
