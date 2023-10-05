#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("Outer loop number %d\n", i);

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\tInner loop number %d\n", j);
            printf("\t\ti,j,k\n");
            printf("\t\t--------\n");
            
            
            // note the use of the tab (\t) option at the start to improve the layout
            
            //Task - Write another level of nesting here
            for(int k = 1; k <5;k++)
            {    
                printf("\t\t%d,%d,%d\n", i , j , k );
            }
        }
    }
}
