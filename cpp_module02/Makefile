NAME=cpp02
CPP=c++
FALGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM=rm -rf
SRC=ASpell.cpp\
	ATarget.cpp\
	Dummy.cpp\
	Fwoosh.cpp\
	main.cpp\
	Warlock.cpp\
	BrickWall.cpp\
	Polymorph.cpp\
	SpellBook.cpp\
	TargetGenerator.cpp\
	Fireball.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re: fclean all
