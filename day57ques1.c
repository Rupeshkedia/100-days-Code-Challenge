#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n], ans[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        int pg=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                pg=arr[j];
                break;
            }
        }
        ans[i]=pg;
    }

    for(int i=0;i<n;i++){
        printf("%d",ans[i]);
        if(i<n-1) printf(",");
    }
    return 0;
}