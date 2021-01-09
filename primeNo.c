#include <stdio.h>

void Prime(int n){
    if(n % 2==0){
        printf("Prime No");
    }
    else
    {
        printf("Not");
    }
    
}
int main(){
    int n=1;
    Prime(n);
    return 0;
}