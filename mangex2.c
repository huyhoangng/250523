#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
    char alpha[26];
    int i, j;
    for (i=65,j=0; i<91; i++ , j++){
        alpha [j]=i;
        printf("the charactor : \t %c \t %c\n", alpha[j], alpha[j]+32);

    }
    system("PAUSE");
    return 0;
}
