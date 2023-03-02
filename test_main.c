#include <stdio.h>

#define LIST_LEN    5

int get_max(int *list)
{
    int i;
    int max = -1;

    if (list == NULL) {
        return -1;
    }

    for (i = 0; i < LIST_LEN; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }

    return max;
}

int main()
{
    int i;
    int *p;
    int list[LIST_LEN] = {4, 2, 5 ,9 ,1};

    i = get_max(list);
    i = *p;
    
    printf("i = %d\r\n", i);

    return 0;
}
