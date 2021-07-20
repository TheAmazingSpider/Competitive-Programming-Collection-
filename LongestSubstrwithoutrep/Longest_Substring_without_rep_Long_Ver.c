#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int ch[256];
    int i,j,len,imax=0,jmax=0,lmax=0;

    fgets(str,1000,stdin);
    len = strlen;
    int t;
    for(t=0; t<256; t++) ch[t] =0;

    for(i=0; i<len-1; i++) {
        ch[str[i]] = 1;

        for(j=i+1; j<len; j++)
        {
            if (ch[str[j]] == 0)
                ch[str[j]] =1;
            else {
                if (j-i+1 > lmax)
                {
                    imax = i;
                    jmax = j-1;
                    lmax = j-i+1;
                }
                break;
            }
        }
        int t;
        for(t=0; t<256; t++) ch[t] =0;

    }
    printf("i=%d j=%d",i,j);
    return 0;
}
