#include <stdio.h>
#include <string.h>

char* longestSubString(char *arr,char *ans,int n){
    int i, j, res = 0; //Creating 2 indexes and result var
    i = j =0;
    int temp; //to locally store i
    int visited[256]; //Creating visited characters restroom 
    while (i <= n) {
        while (j <= n) {
            int c = arr[j]; //character with index j will be its index in visited
            if (visited[c] == 0 ) { //if c was not existed update it to 1
                visited[c] = 1;
                j++; //Continue moving c
            }
            if(visited[c] == 1){ //if c existed
                visited[c] == 0;
                j -= 1;
                if ((j-i+1)>=res){
                    res = j-i+1; //update new res 
                    temp = i; //update new temp
                } 
                i++;
            }
        }
    }
    for (int k = 0; k <= res; k++){
        ans[k] = arr[temp];
        temp++;
    }
    ans[res+1] = '\0';
    return ans;    

}
int main(){
    int n; //String length
    scanf("%d", n);
    char array[n+1];
    fgets(array, n, stdin);
    //Input
    char ans[n+1];
    longestSubString(array,ans,n);
    printf("%s", ans);
    return 0;
}
