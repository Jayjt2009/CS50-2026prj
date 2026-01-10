#include <stdio.h>

int main(void)
{
    int n;
    while(true)
    {
        printf("how many times to meow? ");
        scanf("%d", &n);

        if(n >= 0)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("meow\n");
    }
}
