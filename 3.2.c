#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int table[4][3];
    //string name = get_string("Enter name: ");

    for (int j = 0; j <= 2; j++)
    {
        //get ID
        int id = get_int("Enter ID: ");
        table[0][j] = id;

        //get score
        for (int i = 1; i <= 3; i++)
        {
            int score = get_int("Score: ");
            table[i][j] = score;
        }
    }

    //print
    for(int k=0;k<=2;k++)
    {
        printf("id: %d => M: %d , S: %d , E: %d \n",table[0][k],table[1][k],table[2][k],table[3][k]);
    }
}
