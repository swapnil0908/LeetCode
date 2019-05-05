#include <iostream>

int countTriplets(int arr[], int n, int sum){
    sort(arr,arr+n);
    int ans = 0;
    
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k] >= sum)
                k--;
            else{
                ans = ans+(k-j);
                j++;
            }
        }
    }
    
    return ans;
}


int main() 
{ 
    int arr[] = {-2, 0, 1, 3}; 
    int n = sizeof arr / sizeof arr[0]; 
    int sum = 12; 
    int a = countTriplets(arr, n, sum); 
    cout<<a<<endl;
    return 0; 
} 