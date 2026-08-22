class Solution {
public:
    void merge(std::vector<int>& arr1, int m, std::vector<int>& arr2, int n) {

    int a = m - 1;
    int b = n - 1;
    int k = m + n - 1;

    while (a >= 0 && b >= 0) {

        if (arr1[a] > arr2[b]) {
            arr1[k] = arr1[a];
            a--;
        }
        else {
            arr1[k] = arr2[b];
            b--;
        }

        k--;
    }

    while (b >= 0) {
     arr1[k] = arr2[b];
         b--;
        k--;
    }
}
};