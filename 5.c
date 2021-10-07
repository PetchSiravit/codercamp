#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int table[3][3];
    //string name = get_string("Enter name: ");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int number = get_int("Input Number: ");
            table[j][i] = number;
        }
    }

    //print
    for(int k=1;k<=3;k++)
    {
        printf("%d %d %d\n",table[k][1], table[k][2], table[k][3]);
    }
}
