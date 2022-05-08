NAME        :=	coffee_maker

CXX					:=	c++
CXXFLAGS		:=	-std=c++98 -Wall -Wextra -Werror

CLASS				:=	Bureaucrat GradeTooHighException GradeTooLowException Form \
								ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm \
								FormNotSignedException BureaucratException Intern
INTERFACE		:=

SRCS				:=	main.cpp $(addsuffix .cpp, $(CLASS))
OBJS				:=	$(SRCS:.cpp=.o)

INCLUDES		:=	$(addsuffix .hpp, $(CLASS)) $(addsuffix .hpp, $(INTERFACE))

RM					:=	rm -f

DEBUG				:=	0

ifeq ($(DEBUG), 1)
	CXXFLAGS	:=	-std=c++98 -g
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
