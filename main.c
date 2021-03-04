#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if ((x>y) & (y>z))
        printf("%d", x);
        if ((y>x) & (y>z))
            printf("%d", y);
            if ((z>y) & (z>x))
                printf("%d", z);
                if (z==y)
                    printf("%d", z);
                    if (x==y)
                        printf("%d", x);
    return 0;
}
