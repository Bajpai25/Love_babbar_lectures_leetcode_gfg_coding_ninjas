#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    // space complexity o(1) constant hain kyuki hum log khaali variable declare kar rhe hh
    // time complexity saare cases mein o(n^2) hh. in best,worst,avg case.
}
// Approach 
1. Firstly we need to to declare the min element to the first element to make it sort .
2. And then when the first one is sorted we will move on to the rest left over array to find the min element and if any element in left over array is found
to be minimum we just update the min index and swap the original min element with the new min index element.
  3. Here we go through two nested loops .
