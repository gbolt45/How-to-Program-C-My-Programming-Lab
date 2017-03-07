#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score1, score2;
    int player_number;

    while ((score1<=40)&&(score2 <=40))
    {

        puts("Enter the player number who won the pt");
        scanf("%d", &player_number);

        if(player_number==1);
        {
        if(score1==40)
            score1 =50;
        if(score1 ==30)
            score1=40;
        if(score1 ==15)
            score1=30;
        if(score1 ==0)
            score1=15;

        }

        if(player_number==2)
        {
        if(score2==40)
            score2 =50;
        if(score2 ==30)
            score2=40;
        if(score2 ==15)
            score2=30;
        if(score2 ==0)
            score2=15;

        printf("Current score: %d, $d\n", score1, score2);
        if(score1 >40)
            puts("Player 1 has won");
        else
            puts("Player 2 has won");
        }
    } return 0;

}
