#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nums[n], ans[n];
    for(int i=0;i<n;i++) scanf("%d",&nums[i]);

    for(int i=0;i<n;i++){
        int p=1;
        for(int j=0;j<n;j++){
            if(i!=j) p*=nums[j];
        }
        ans[i]=p;
    }

    for(int i=0;i<n;i++){
        printf("%d",ans[i]);
        if(i<n-1) printf(",");
    }
    return 0;
}