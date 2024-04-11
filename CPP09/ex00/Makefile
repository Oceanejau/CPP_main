NAME = btc_tester

YOUR_BTC = ./btc

TEST = input.csv
TEST_1 = input_errors.csv
TEST_2 = input_ok.csv
TEST_3 = input_chmod.csv
TEST_4 = input_main.csv

FILE_1 = res_input_errors.txt
FILE_2 = res_input_ok.txt
FILE_3 = res_input_chmod.txt
FILE_4 = res_input_main.txt

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 
INCLUDES = ./includes

SRCS =	main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: exec_tests $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $(NAME)

exec_tests: $(YOUR_BTC)
	-cp $(TEST_1) $(TEST)
	-$(YOUR_BTC) < $(TEST) > $(FILE_1);\
	-/bin/mv $(TEST) $(TEST_1);\
	-/bin/mv $(TEST_2) $(TEST);\
	-$(YOUR_BTC) < $(TEST) > $(FILE_2);\
	-/bin/mv $(TEST) $(TEST_2);\
	-/usr/bin/touch $(TEST);\
	-/bin/chmod u-r $(TEST);\
    -$(YOUR_BTC) < $(TEST) > $(FILE_3);\
	-/bin/mv $(TEST) $(TEST_3);\
	-/bin/mv $(TEST_4) $(TEST);\
    -$(YOUR_BTC) < $(TEST) > $(FILE_4)

.cpp.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $^ -o $@

clean:
	@rm -rf $(NAME) $(OBJS)
	@rm -rf $(FILE_1) $(FILE_2) $(FILE_3) $(FILE_4)


fclean: clean
	@rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re
.SILENT:
