#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int x,y,c=0,k,w,e;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&k);
    x=strlen(a);
    y=strlen(b);
    if(x>y){
        for(int i=0;i<x;i++){
            if(a[i]==b[i]){
                c++;
            }
        }
        w=x-c;
        e=y-c;
        if((w+e)<=k){
            printf("Yes");
        }
        else{
            printf("No");
        }

    }
    else{
        for(int i=0;i<y;i++){
            if(a[i]==b[i]){
                c++;
            }
        }
        w=x-c;
        e=y-c;
        if((w+e)<=k){
            printf("Yes");
        }
        else{
            printf("No");
        }

    }
    return 0;
}