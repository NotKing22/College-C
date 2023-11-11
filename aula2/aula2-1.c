#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t t;
    time(&t);
    
    printf("A hora atual é %s", ctime(&t));

    return 0;
}
