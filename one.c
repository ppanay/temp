#include <stdio.h>

int main() {
    int i,a,b,c;
    a=b=c=i=1;
    for(i=0;i<1000;i++) {
        a--;
        b++;
        c=3*a+b+i;
    }
    printf("c= %d\n",c);
    printf("End\n");
}