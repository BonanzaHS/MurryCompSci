#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *line = NULL;
    size_t  len = 0;
    ssize_t read;

    getline(&line, &len, stdin);
    printf("The user typed in this line:\n%s", line);

    free(line);
    return 0;
}
