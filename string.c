#include <stdio.h>

int main(void)
{
     string answer = get_string("what's your name?\n");
     printf("hello, %s\n", answer)
}

$ clang -o string string.c


