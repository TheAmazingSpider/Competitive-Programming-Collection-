#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for(i=2; i<=n; i++){
        while(n%i==0){
            printf("%dx", i);
            n /= i;
        }
    }
    printf("1");
    return 0;
}
