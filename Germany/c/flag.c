#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KBLK  "\x1B[30m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void printFlag(int width) {
    int height = 3*width/20;
    
    char* colors[] = {KBLK, KRED, KYEL};
    
    for(int c = 0; c < 3; c++) {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) { 
                printf("%s#", colors[c]);
            }
            printf("\n");
        }
    }
    puts(KNRM);
}

int main() {
    printFlag(79);
    return 0;
}

