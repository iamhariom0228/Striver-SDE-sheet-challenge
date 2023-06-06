#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zeros=0, ones = 0, twos = 0;
   for(int i=0;i<n;i++){
      if(arr[i]==0) zeros++;
      else if(arr[i]==1) ones++;
      else twos++;
   }
   int i=0;
   while(zeros-->0) arr[i++] = 0;
   while(ones-->0) arr[i++] = 1;
   while(twos-->0) arr[i++] = 2;
}