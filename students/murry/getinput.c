#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *line = NULL;
    size_t  len = 0;
    ssize_t read;

    printf("Please enter a line of text:\n");
    getline(&line, &len, stdin);
    printf("the user is a dumb dumb\n%s", line);

    free(line);
    return 0;
}
