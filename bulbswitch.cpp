class Solution {
public:
    int bulbSwitch(int n) {
        if (n<1)
            return 0;
        int round = 2;
        int count = 0;
        int arr[n];
        fill_n(arr, n, 1);
        while(round<=n){
            count++;
            for(int i=count;i<n;){
                arr[i] = !arr[i];
                i=i+count+1;
            }
            round++;
        }
        
        int num=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1)
                num++;
        }
        return num;
    }
};