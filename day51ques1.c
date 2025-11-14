#include <stdio.h>

int first(int a[], int n, int t){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==t){ res=m; r=m-1; }
        else if(a[m]<t) l=m+1;
        else r=m-1;
    }
    return res;
}

int last(int a[], int n, int t){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==t){ res=m; l=m+1; }
        else if(a[m]<t) l=m+1;
        else r=m-1;
    }
    return res;
}

int main(){
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&t);
    int f=first(a,n,t);
    int l=last(a,n,t);
    printf("%d %d",f,l);
    return 0;
}