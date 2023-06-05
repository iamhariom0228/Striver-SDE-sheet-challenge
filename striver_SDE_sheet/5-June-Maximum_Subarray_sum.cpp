#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long max_so_far = INT_MIN, maxi = 0;
    for(int i=0;i<n;i++){
        maxi += arr[i];
        if(maxi < 0) maxi = 0;
        if(max_so_far < maxi) max_so_far = maxi;
    }
    return max_so_far;
}