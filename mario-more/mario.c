#include <stdio.h>
#include <cs50.h>

void row(int bricks);
void left_row(int spaces, int bricks);

int main(void){
    int brick_height;
    string spaces = "  ";
    do{
        brick_height = get_int("What's the height ?");
    }
    while (brick_height > 8 || brick_height < 1);
    for (int i = 1; i <= brick_height; i++){
        left_row(brick_height, i);
        row(i);
        printf("  ");
        row(i);
        printf("\n");
    }
}


// call function row
void row(int bricks){
    for (int i = 0; i < bricks; i++){
        printf("#");
    }
}

void left_row(int spaces, int bricks){
    for (int i = spaces; i > bricks;i--){
        printf(" ");
    }
}
