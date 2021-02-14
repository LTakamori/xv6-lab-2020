//
// Created by xabi on 2/14/21.
//
#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(2, "Usage: sleep..\n");
        exit(1);
    }

    for (int i = 1; i < argc; i++) {
        sleep(atoi(argv[i]));
    }

    exit(0);
}
