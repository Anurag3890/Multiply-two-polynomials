#include <stdio.h>
int main(){
    int n1,n2;scanf("%d",&n1);
    int a[n1+1];for(int i=0;i<=n1;i++)scanf("%d",&a[i]);
    scanf("%d",&n2);
    int b[n2+1];for(int i=0;i<=n2;i++)scanf("%d",&b[i]);
    int n=n1+n2,c[n+1];
    for(int i=0;i<=n;i++)c[i]=0;
    for(int i=0;i<=n1;i++)for(int j=0;j<=n2;j++)c[i+j]+=a[i]*b[j];
    for(int i=n;i>=0;i--){
        printf("%d",c[i]);
        if(i>0)printf(" ");
    }
    printf("\n");
    return 0;
}