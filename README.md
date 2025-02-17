# snake_game
This is a basic implementation of the snake game that uses c++.

# input
 The first line of input consists of two integers: the width and height of the grid. 
 
 The second line of input consists of two integers: the x,y coordinates of the apple. 
 
 The next line contains a single integer N, representing the number of snakes that will be on the grid.\
 The maximum number of snakes accepted is 4. N lines of input follow, each line representing a single snake.\ 
 Each line represents a snake’s coordinate chain and takes the following format:\
 k x1 y1 x2 y2 ... xk yk\
 The first integer is k ≥ 2. k pairs of integers follow, each being a coordinate that represents a
 point of interest in the snake’s body. The first coordinate is the snake’s head, the next represents
 the first turn in the snake. There can be any number of turns in the snake, all of which are all
 listed in order. Finally, the last coordinate represents the tail of the snake. For example, the line\
 4 0 0 2 0 2 5 6 5\
 represents a snake whose head is at (0,0), and whose body occupies all cells from (0,0) to
 (2, 0), from (2,0) to (2,5), and from (2,5) to (6,5).

# output
Output the grid with the apple and snake drawn on it. The apple is represented by a 5, while
 each snake is represented by an integer. The first snake is 1, the second snake is 2, and so on. If
 there is no snake or apple at a particular location, a 0 is used.
