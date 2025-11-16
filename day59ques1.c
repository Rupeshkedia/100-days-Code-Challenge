#include <stdio.h>

int main() {
    int n, k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);

    int maxSum = 0;
    for(int i=0;i<k;i++) maxSum += arr[i];

    int currSum = maxSum;
    for(int i=k;i<n;i++) {
        currSum = currSum - arr[i-k] + arr[i];
        if(currSum > maxSum) maxSum = currSum;
    }

    printf("%d", maxSum);
    return 0;
}