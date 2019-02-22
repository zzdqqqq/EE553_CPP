#include <iostream>
using namespace std;

int binarySearch(int x[], int n, int target) {
    int L = 0, R = n - 1;
    
    while (L <= R) {        // this can also change to <
        int mid = (L+R)/2;
        if (x[mid] > target) {
            R = mid - 1;        // and here should be R = mid
        } else if (x[mid] < target) {
            L = mid + 1;           // here should be L = mid - 1;
        } else
            return mid;
    }
    return -1;
}

int binarySearchRec(int x[], int L, int R, int target) {
    if (L >= R) {
        return -1;
    }
    int mid = (L + R) / 2;
    if (x[mid] > target) {
        return binarySearchRec(x, L, mid-1, target);
    } else if (x[mid] < target){
        return binarySearchRec(x, mid+1, R, target);
    } else{
        return mid;
    }
}




int x[] = {1,3,4,5,6,7,8,9,11,23,24,25,46,78,90};

int main(){
    int target = 11;
    
    cout << binarySearch(x, sizeof(x) / sizeof(int), target) << endl;
}
