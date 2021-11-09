// String-Join, Ref. https://docs.python.org/3/library/stdtypes.html#str.join
//
// Copyright (c) 2021, Timothy Lin. All rights reserved.
// BSD-2-Clause-Patent

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define version_string  "StrJoin - Join Strings, version 0.1" "\nRef. https://docs.python.org/3/library/stdtypes.html#str.join"

void usage(void)
{
    printf("Usage: StrJoin glue-string [string1, string2 ...]");
    exit(0);
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        if (_stricmp(argv[1], "--h") == 0 || _stricmp(argv[1], "--help") == 0) {
            usage();
        }
        else if (_stricmp(argv[1], "--version") == 0) {
            printf("%s", version_string);
            exit(0);
        }
    }
    if (argc < 2) {
        usage();
    }
    if (argc > 2) {
        for (int i=2; i<(argc-1); i++) {
            if (strlen(argv[i]) > 0) {
                printf("%s%s", argv[i], argv[1]);
            }
        }
        printf("%s\n", argv[argc-1]);
    }
    return 0;
}
