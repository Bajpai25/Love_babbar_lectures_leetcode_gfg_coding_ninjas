Here is the code for bubble sort :

void bubble_sort(vector<int>& arr , int n){
  for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
}
}
  }
// Here in bubble sort we use the approach that we find compare the ith element with its (i+1)th element if it is found greater we just swap them thus in this way the largest is 
floated all the way to its ith largest position at the last of the array .
  Time complexity ::
Best Case : If the array is itself sorted out It is o(N) .
Wosrst Case:O(N*N)
  Space complexity :
Cause no additional data structure is generated . So it is O(1) constant.
  
