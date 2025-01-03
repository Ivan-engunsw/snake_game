#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int width;
    int height;
    cin >> width >> height;

    int xApple;
    int yApple;
    cin >> xApple >> yApple;

    int N;
    cin >> N;

    int number_snakes = 0;

    vector<vector <int>> matrix(height, vector <int> (width));

    matrix[yApple][xApple] = 5;

    while (number_snakes < N) {
        int k;
        cin >> k;

        int size = 2 * k + 1;
        vector<int> snake(size);
        snake[0] = k;

        for (size_t i = 1; i < snake.size(); i++) {
            cin >> snake[i];
        }

        for (size_t j = 1; j < (snake.size() - 2); j += 2) {
            int x = snake[j];
            int l = j + 1;
            int y = snake[l];
            matrix[y][x] = (number_snakes + 1);
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

    for (auto row : matrix) {
        for (auto element : row) {
            cout << element << ' ';
        }
        cout << endl;
    }

    return 0;
}