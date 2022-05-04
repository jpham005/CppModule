NAME				:=	fixed

CXX					:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror

SRCS				:=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS				:=	$(SRCS:.cpp=.o)

INCLUDES		:= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

RM					:=	rm -f

DEBUG				:=	0

ifeq ($(DEBUG), 1)
	CXXFLAGS	:=	-std=c++98 -g
endif

ifeq ($(SHADOW), 1)
	CXXFLAGS	:=	-Wshadow
endif

.PHONY			:		all
all					:		$(NAME)

$(NAME)			:		$(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

.PHONY			:		debug
debug				:		fclean
	make DEBUG=1 all

.PHONY			:		shadow
shadow			:		fclean
	make SHADOW=1 all

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
