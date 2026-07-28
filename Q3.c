//WACP TO PRINT FIRST 10 TERMS OF FIBONACCI SERIES.
#include <stdio.h>
int main() {
    int t1=0, t2=1, nextTerm, n=10;
    for (int i =1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}
