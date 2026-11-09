#include <stdio.h>
#include <stdlib.h>
#include <conio.h>    
#include <windows.h>  
#include <time.h>      

#define W 40
#define H 20

int x[800], y[800];   
int len, fx, fy, dir, over;

void start() {
    len = 3;
    x[0] = 20; y[0] = 10;
    x[1] = 19; y[1] = 10;
    x[2] = 18; y[2] = 10;
    dir = 4;
    over = 0;
    
    fx = rand() % (W-2) + 1;
    fy = rand() % (H-2) + 1;
}

void draw() {
    
   
   COORD pos = {0, 0};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
for (int i = 0; i < H; i++) {
               for (int j = 0; j < W; j++) {

                if (i == 0 || i == H-1 || j == 0 || j == W-1) {
                printf("/");                  // wall
                    }
           
                else if (j == fx && i == fy) {
                    printf("$");                  // food
                  }
                  else {
                     int onSnake = 0;
                   
                     for (int k = 0; k < len; k++) {
                       if (x[k] == j && y[k] == i) {
                        if (k == 0) printf("@");   // head
                        else printf("o");          // body
                        onSnake = 1;
                           break;
                       }
                 }
                     if (onSnake == 0) printf(" ");
                  }
              }
                     printf("\n");
    }

       printf("score: %d\n", len - 3);
       printf("w/a/s/d = move, q = quit\n");
        ;
}
    



void step() {
    int nx = x[0];
    int ny = y[0];

      if (dir == 1) ny = ny - 1;     // up
      if (dir == 2) ny = ny + 1;     // down
      if (dir == 3) nx = nx - 1;     // left
      if (dir == 4) nx = nx + 1;     // right

    //for hit wall 
    if (nx == 0 || nx == W-1 || ny == 0 || ny == H-1) {
        over = 1;
        return;
    }

    //snake bite himself
    for (int i = 0; i < len; i++) {
          if (x[i] == nx && y[i] == ny) {
              over = 1;
                return;
           }
       }

    // moving body forward
    for (int i = len; i > 0; i--) {
        x[i] = x[i-1];
        y[i] = y[i-1];  }
    x[0] = nx;
    y[0] = ny;

    // eatimg the food 
    if (nx == fx && ny == fy) {
        len = len + 1;
        
         fx = rand() % (W-2) + 1;
         fy = rand() % (H-2) + 1;
    }
}

int main() {
    srand(time(0));
    start();

    // Clear the screen just once at the very beginning
    system("cls");

    while (!over) {
        draw();

        
        if (_kbhit()) {
            char c = _getch();
            if (c == 'w' && dir != 2) dir = 1;
            if (c == 's' && dir != 1) dir = 2;
            if (c == 'a' && dir != 4) dir = 3;
            if (c == 'd' && dir != 3) dir = 4;
            if (c == 'q') over = 1;
        }

        step();
        Sleep(220); // Game speed
    }

    printf("game over! final score: %d\n", len - 3);
    return 0;
}