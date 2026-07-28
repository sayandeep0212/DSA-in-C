//WACP TO PRINT ALL NUMBERS BETWEEN 1 AND 500 THAT ARE DIVISIBLE BY BOTH 5 AND 7.
#include <stdio.h>
int main() {
    for(int i=1; i<=500; i++) {
        if (i%5==0&&i%7==0)
        printf("%d\n", i);
    }
    return 0;
}
