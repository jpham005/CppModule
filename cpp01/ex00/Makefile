NAME				:=	BraiiiiiiinnnzzzZ

CXX					:=	c++
CXXFLAGS		:=	-std=c++98 -Wall -Wextra -Werror
DEBUGFLAGS	:=	-std=c++98 -g -fsanitize=address

SRCS				:=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS				:=	$(SRCS:.cpp=.o)

INCLUDES		:=	Zombie.hpp

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
re					:
	make fclean
	make all
