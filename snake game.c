#include <stdio.h>
#include <conio.h>

#define WIDTH 20
#define HEIGHT 20

int snake_x[WIDTH * HEIGHT], snake_y[WIDTH * HEIGHT];
int snake_length = 3;
int food_x, food_y;
int direction;

void init() {
    // Initialize snake
    snake_x[0] = WIDTH / 2;
    snake_y[0] = HEIGHT / 2;
    snake_x[1] = snake_x[0] - 1;
    snake_y[1] = snake_y[0];
    snake_x[2] = snake_x[0] - 2;
    snake_y[2] = snake_y[0];

    // Generate initial food
    food_x = rand() % WIDTH;
    food_y = rand() % HEIGHT;
}

void draw() {
    system("cls"); // Clear the console
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
                printf("#"); // Draw border
            } else if (i == food_y && j == food_x) {
                printf("F"); // Draw food
            } else {
                int is_snake = 0;
                for (int k = 0; k < snake_length; k++) {
                    if (snake_x[k] == j && snake_y[k] == i) {
                        is_snake = 1;
                        break;
                    }
                }
                if (is_snake) {
                    printf("O"); // Draw snake
                } else {
                    printf(" "); // Draw empty space
                }
            }
        }
        printf("\n");
    }
}

void input() {
    if (kbhit()) {
        char key = getch();
        switch (key) {
            case 'w':
                direction = 0;
                break;
            case 's':
                direction = 1;
                break;
            case 'a':
                direction = 2;
                break;
            case 'd':
                direction = 3;
                break;
        }
    }
}

void logic() {
    int prev_x = snake_x[0];
    int prev_y = snake_y[0];

    // Move the snake
    switch (direction) {
        case 0: // Up
            snake_y[0]--;
            break;
        case 1: // Down
            snake_y[0]++;
            break;
        case 2: // Left
            snake_x[0]--;
            break;
        case 3: // Right
            snake_x[0]++;
            break;
    }

    // Check for collisions
    if (snake_x[0] < 0 || snake_x[0] >= WIDTH || snake_y[0] < 0 || snake_y[0] >= HEIGHT) {
        printf("Game Over!\n");
        exit(0);
    }

    for (int i = 1; i < snake_length; i++) {
        if (snake_x[0] == snake_x[i] && snake_y[0] == snake_y[i]) {
            printf("Game Over!\n");
            exit(0);
        }
    }

    // Eat food
    if (snake_x[0] == food_x && snake_y[0] == food_y) {
        snake_length++;
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;
    } else {
        // Move the rest of the snake
        for (int i = snake_length - 1; i > 0; i--) {
            snake_x[i] = snake_x[i - 1];
            snake_y[i] = snake_y[i - 1];
        }
    }
}

int main() {
    init();
    while (1) {
        draw();
        input();
        logic();
    }
    return 0;
}
