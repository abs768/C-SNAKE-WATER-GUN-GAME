                                     /*  PROJECT 2 : SNAKE,WATER,GUN  */

/*

PROBLEM STATEMENT:

SNAKE,WATER,GUN is a game most of us have played during our school time.

Write a C program capable of playing this game with you.

Your program should be able to print the result after you choose SNAKE/WATER Or GUN.

*/

// Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's'))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number;
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water , 'g' for gun\n");
    scanf("%c", &you);
    int result;
    result = SnakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Drawn\n");
    }
    else if (result == 1)
    {
        printf("You Win\n");
    }
    else
    {
        printf("You Loose\n");
    }
    printf("You chose %c and the computer chose %c\n", you, comp);
    return 0;
}