#include<stdio.h>

int main () {

    // for(int i = 19; i <= 190; i+=19) {
    //     printf("%d \n", i);
    // }


    // take positive integer input N , print its multiplication table from 1-10

    // int n;
    // printf("Enter value of n :- ");
    // scanf("%d" , &n);

    // for(int i = n; i <= n*20; i+=n) {
    //     printf("%d * 1 =  %d \n",n, i);
    // }

    // 5 * 1 = 5
    // 5 * n = 5(n)



    // int n;
    // printf("Enter value of n :- ");
    // scanf("%d" , &n);
    // int iter = 1;
    // for(int i = n; i <= n*20; i+=n) {
    //     printf("%d * %d =  %d \n",n,iter, i);
    //     iter++;
    // }


    // Question 1
    // int n;
    // printf("Enter value of n :- ");
    // scanf("%d" , &n);

    // for(int i = 1; i <= 10; i++) {
    //     printf("%d * %d =  %d \n", n , i , n*i);
    // }



    int n;
    printf("Enter value of n :- ");
    scanf("%d" , &n);


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d * %d =  %d \n", i , j , i*j);
        }
        printf("\n\n");
    }


    


    return 0;
}