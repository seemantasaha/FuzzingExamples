#include <stdio.h>

void fuzz(int i) {
    if (i > 0) {
        printf("Positive input");
        if (i < 1073741823) {
            printf("Less than 2 to the power 30");
            if (i < 65535) {
                printf("Less than 2 to the power 16");
                if (i < 256) {
                    printf("Less than 2 to the power 8");
                    if (i < 16) {
                        printf("Less than 2 to the power 4");
                        if (i < 8) {
                            printf("Less than 2 to the power 3");
                            if (i < 4) {
                                printf("Less than 2 to the power 2");
                                if (i < 1) {
                                    printf("Less than 2 to the power 1");
                                } else {
                                    printf("Greater than 2 to the power 1");
                                }
                            } else {
                                printf("Greater than 2 to the power 2");
                            }
                        } else {
                            printf("Greater than 2 to the power 3");
                        }
                    } else {
                        printf("Greater than 2 to the power 4");
                    }
                } else {
                    printf("Greater than 2 to the power 8");
                }
            } else {
                printf("Greater than 2 to the power 16");
            }
        } else {
            printf("Greater than 2 to the power 30");
        }
        
    } else {
        printf("Negative input");
    }
}

int main(int argc, char *argv[])
{
    int input = atoi(argv[0]);
    printf("input = %d", input);
    fuzz(input);

    return 0;
}
