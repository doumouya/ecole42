#include <unistd.h>

int main()
{
    char greet[] = "Hello World!\n";

    for (int i = 0; greet[i]; i++)
        write(1, &greet[i], 1);
    
    return (0);
}