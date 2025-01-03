//A simple snake game program.
//Author: Ivan Lun Hui Chen
//Date: 2023-09-15

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    //width and height of the matrix
    int width;
    int height;
    cin >> width >> height;

    //x and y coordinates of the apple
    int xApple;
    int yApple;
    cin >> xApple >> yApple;

    //number of snakes
    int N;
    cin >> N;

    int number_snakes = 0;

    vector<vector <int>> matrix(height, vector <int> (width));

    matrix[yApple][xApple] = 5;

    while (number_snakes < N) {
        //k is the number of pair of segments of the snake
        int k;
        cin >> k;

        //populating the snake vector with the x and y coordinates of the points of interest of the snake
        int size = 2 * k + 1;
        vector<int> snake(size);
        snake[0] = k;

        for (size_t i = 1; i < snake.size(); i++) {
            cin >> snake[i];
        }

        //populating the matrix with the snake's body
        for (size_t j = 1; j < (snake.size() - 2); j += 2) {
            int x = snake[j];
            int l = j + 1;
            int y = snake[l];
            matrix[y][x] = (number_snakes + 1);

            //populating the matrix with the snake's body using two consecutive coordinates given
            if (j < snake.size()) {
                int nextX = snake[j + 2];
                int nextL = j + 3;
                int nextY = snake[nextL];

                while (x != nextX) {
                    if (x < nextX) {
                        x++;
                    }
                    else if (x > nextX) {
                        x--;
                    }
                    matrix[y][x] = (number_snakes + 1);
                }

                while (y != nextY) {
                    if (y < nextY) {
                        y++;
                    }
                    else if (y > nextY) {
                        y--;
                    }
                    matrix[y][x] = (number_snakes + 1);
                }
            }
        }

        number_snakes += 1;
    }

    //printing the matrix
    for (auto row : matrix) {
        for (auto element : row) {
            cout << element << ' ';
        }
        cout << endl;
    }

    return 0;
}