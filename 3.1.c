#include <stdio.h>
#include <cs50.h>
#include <string.h> //strlen

int main(void)
{
    int table[2][4];
    //string name = get_string("Enter name: ");

    for (int j = 0; j <= 2; j++)
    {
        //get ID
        int id = get_int("Enter ID: ");
        table[j][0] = id;

        //get score
        for (int i = 1; i <= 3; i++)
        {
            int score = get_int("Score: ");
            table[j][i] = score;
        }
    }

    //print
    for(int k=0;k<=2;k++)
    {
        printf("id: %d => M: %d , S: %d , E: %d \n",table[k][0],table[k][1],table[k][2],table[k][3]);
    }
}
