class Solution {
public:
    void moveZeroes(std :: vector<int>& arr){
    int j = 0;
    for (int i=0; i<arr.size(); i++){
        if(arr[i] != 0){
            std :: swap(arr[i], arr[j]);
            j++;
        }
    }
}
};