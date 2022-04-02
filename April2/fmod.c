
#include <stdio.h>
#include <math.h>

int main()
{
    int rem;
    rem = fmod(3.14,6.1); //fmod() performs floating point divisions.
    printf("%d",rem);

    return 0;
}
