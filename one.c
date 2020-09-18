#include <stdio.h> 
#define C 23 
int global = 10; 
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int local = 5; 
    const int b = 3;
    local = sum(global, b);
    printf("%d", local);
    return 0; 
}
