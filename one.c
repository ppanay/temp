#include <stdio.h>

int main() {
    int i,a,b,c;
    a=b=c=i=1;
    for(i=0;i<1000;i++) {
        a--;
        b++;
        for(int j=0;j<1E7;j++) c=3*a+b+i+c;
        printf("%d\n",c);
    }
    printf("c= %d\n",c);
    printf("Ended!\n");
}