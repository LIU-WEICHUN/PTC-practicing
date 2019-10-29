#include<stdio.h>
#include<stdlib.h>

void one(int n){
    if(n == 1){
        printf("*");
    }
    if(n == 2){
        printf("*");
    }
    if(n == 3){
        printf("*");
    }
    if(n == 4){
        printf("*");
    }
    if(n == 5){
        printf("*");
    }
}
void two(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("    *");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("*    ");
    }
    if(n == 5){
        printf("*****");
    }
}
void three(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("    *");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("    *");
    }
    if(n == 5){
        printf("*****");
    }
}
void four(int n){
    if(n == 1){
        printf("*   *");
    }
    if(n == 2){
        printf("*   *");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("    *");
    }
    if(n == 5){
        printf("    *");
    }
}
void five(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("*    ");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("    *");
    }
    if(n == 5){
        printf("*****");
    }
}
void six(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("*    ");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("*   *");
    }
    if(n == 5){
        printf("*****");
    }
}
void seven(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("    *");
    }
    if(n == 3){
        printf("    *");
    }
    if(n == 4){
        printf("    *");
    }
    if(n == 5){
        printf("    *");
    }
}
void eight(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("*   *");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("*   *");
    }
    if(n == 5){
        printf("*****");
    }
}
void nine(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("*   *");
    }
    if(n == 3){
        printf("*****");
    }
    if(n == 4){
        printf("    *");
    }
    if(n == 5){
        printf("*****");
    }
}
void zero(int n){
    if(n == 1){
        printf("*****");
    }
    if(n == 2){
        printf("*   *");
    }
    if(n == 3){
        printf("*   *");
    }
    if(n == 4){
        printf("*   *");
    }
    if(n == 5){
        printf("*****");
    }
}
void diginumber(int n, int row){
    if(n == 1){
        one(row);
    }
    if(n == 2){
        two(row);
    }
    if(n == 3){
        three(row);
    }
    if(n == 4){
        four(row);
    }
    if(n == 5){
        five(row);
    }
    if(n == 6){
        six(row);
    }
    if(n == 7){
        seven(row);
    }
    if(n == 8){
        eight(row);
    }
    if(n == 9){
        nine(row);
    }
    if(n == 0){
        zero(row);
    }
}
int main(void){
    char data[5];
    fgets(data, 5, stdin);
    for (int row = 1; row <= 5; row++)
    {
        for (int n = 0; n < 4; n++)
        {
            diginumber(data[n]-'0',row);
            if (n != 3)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    

}