#include <stdio.h>

int main (void)
{
    
    for (int i = 0; i < 21; i++) {
        if (i==0) {
            continue;
        }
        else if (i==1)
        {
            printf("Hi for the %ist time\n", i);
        }
        else if (i==2)
        {
            printf("Hi for the %ind time\n", i);
        }
        else if (i==3)
        {
            printf("Hi for the %ird time\n", i);
        }
        else {
            printf("Hi for the %ith time\n", i);
        }
    }
}
