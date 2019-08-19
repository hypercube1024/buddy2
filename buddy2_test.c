#include "buddy2.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char cmd[80];
    int arg;
    struct buddy2 *buddy = buddy2_new(32); // 2^5
    buddy2_dump(buddy);
    while (true) {
        scanf("%s %d", cmd, &arg);
        if (strcmp(cmd, "alloc") == 0) {
            printf("allocated@%d\n", buddy2_alloc(buddy, arg));
            buddy2_dump(buddy);
        } else if (strcmp(cmd, "free") == 0) {
            buddy2_free(buddy, arg);
            buddy2_dump(buddy);
        } else if (strcmp(cmd, "size") == 0) {
            printf("size: %d\n", buddy2_size(buddy, arg));
            buddy2_dump(buddy);
        } else if (strcmp(cmd, "exit") == 0) {
            buddy2_destroy(buddy);
            return 0;
        } else {
            buddy2_dump(buddy);
        }
    }
}
