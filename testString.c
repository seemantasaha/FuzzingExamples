#include <stdio.h>

void fuzz(char* s) {
    if(s[0] == 'a') {
        printf("1st char matched");
        if(s[1] == 'b') {
            printf("2nd char matched");
            if(s[2] == 'c') {
                printf("3rd char matched");
                if(s[3] == 'd') {
                    printf("4th char matched");
                    if(s[4] == 'e') {
                        printf("5th char matched");
                        if(s[5] == 'f') {
                            printf("6th char matched");
                            if(s[6] == 'g') {
                                printf("7th char matched");
                                if(s[7] == 'h') {
                                    printf("8th char matched");
                                    if(s[8] == 'i') {
                                        printf("9th char matched");
                                        if(s[9] == 'j') {
                                            printf("10th char matched");
                                            if(s[10] == 'k') {
                                                printf("11th char matched");
                                                if(s[11] == 'l') {
                                                    printf("12th char matched");
                                                    if(s[12] == 'm') {
                                                        printf("13th char matched");
                                                        if(s[13] == 'n') {
                                                            printf("14th char matched");
                                                        } else {
                                                            printf("14th char did not match");
                                                        }
                                                    } else {
                                                        printf("13th char did not match");
                                                    }
                                                } else {
                                                    printf("12th char did not match");
                                                }
                                            } else {
                                                printf("11th char did not match");
                                            }
                                        } else {
                                            printf("10th char did not match");
                                        }
                                    } else {
                                        printf("9th char did not match");
                                    }
                                } else {
                                    printf("8th char did not match");
                                }
                            } else {
                                printf("7th char did not match");
                            }
                        } else {
                            printf("6th char did not match");
                        }
                    } else {
                        printf("5th char did not match");
                    }
                } else {
                    printf("4th char did not match");
                }
            } else {
                printf("3rd char did not match");
            }
        } else {
            printf("2nd char did not match");
        }
    } else {
        printf("no char match");
    }
}

int main(int argc, char *argv[])
{
    char *input = argv[1];
    printf("input = %s", input);
    fuzz(input);

    return 0;
}
