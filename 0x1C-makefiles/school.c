#include "m.h"

void printSchool()
{
    char *letters[5] = {"###   ", "#  #  ", "#   # ", "#  #  ", "###   "};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%c", letters[i][j]);
        }
        printf("#####  #####  #     #\n");
    }
}
