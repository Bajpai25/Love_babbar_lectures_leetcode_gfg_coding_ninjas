In insertion we have to firstly pick up a element lets say pick out first element it is already sorted 
So know we will pick the next element and compare it with the previous element in the array if it is large we will keep it be at its position
and if its small we will shift the element to its left most desired place by shifting the rest element of array . This is how we use Insertion Sort.
  Here we shift not swap remember .

  Code :
#include <bits/stdc++.h> 
  void insertionSort(int n, vector<int> &arr){
  for(int i=1;i<n;i++){
int temp=arr[i];
int j=i-1;
for(;j>=0j--){
if(arr[j]>temp){
  // shifting 
arr[j+1]=arr[j];
}
else{
break
  }
}
    // copying the element.
arr[j+1]=temp;
  }
}

Time complexity :
Best case : o(n)
  Worst case : o(n*n)
  Space complexity:
O(1) constant cause only temp variable is declared.

  Use case :For small data-sets.
