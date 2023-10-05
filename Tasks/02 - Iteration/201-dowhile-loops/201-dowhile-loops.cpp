#include <stdio.h>

int main()
{
    int i = 0;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i + 1;              // Alternatively, write i++;
    } while (i < 5);            //Repeat if condition is met
                                // Do while Loop will Loop through at least once before it leaves the loop.
    printf("Finished: i = %d\n", i);


     int i = 5;

     printf("Start of Descending while loop\n");


    do
    {
         printf("i = %d\n", i);
         i = i - 1;
    } while (i >= 0);        // the descending loop added aswell

    printf("Finished Descending while Loop: i = %d\n", i);

    
}


