NAME				:=	Hi_this_is_brain

CXX					:=	c++
DEBUGFLAGS	:=	-std=c++98 -g

SRCS				:=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS				:=	$(SRCS:.cpp=.o)

INCLUDES		:= Weapon.hpp HumanA.hpp HumanB.hpp

RM					:=	rm -f

DEBUG				:=	0

ifeq ($(DEBUG), 1)
	CXXFLAGS 	:=	-std=c++98 -g
else
	CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror
endif

.PHONY			:		all
all					:		$(NAME)

$(NAME)			:		$(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

.PHONY			:		debug
debug				:		fclean
	make DEBUG=1 all

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
