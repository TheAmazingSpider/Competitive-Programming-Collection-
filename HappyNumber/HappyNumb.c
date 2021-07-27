#include <stdio.h>

int DigitSquareSum(int n){ //Calc the square sum of each digit
    int SquareSum = 0;
    while(n){
        SquareSum += (n%10)*(n%10);
        n = n/10;
    }
    return SquareSum; 
}

//As 4 and 7 is the only 
int HappyOrNot(int n){
    int temp = n;
    while(n > 9){ 
        n = DigitSquareSum(n);  
    }
    if ((n == 1)||(n == 7)){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if (HappyOrNot(n) == 1){
       printf("%d is a happy number", n);
    }
    else {
        printf("%d is not a happy number", n);
    }
}
