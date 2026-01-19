#include<stdio.h>
#include<conio.h>
int while_loop(int n) {
    printf("\n This is a while loop \n");
    while (n<300) {
        printf("%d \n",n);
        n++;
    }
}
int do_while_loop(int n){
        printf(" \n This is a do_while loop \n ");
        do {
            printf("%d \n ",n);
            n++;
        }while (n<300);
    }
int for_loop(int n) {
    printf("\n This is a for_loop \n");
    int i;
    for (i = n ; i<300 ; i++) {
        printf("%d \n",i);

    }
}
void main() {
    int n=201;
    while_loop(n);
    do_while_loop(n);
    for_loop(n);

}