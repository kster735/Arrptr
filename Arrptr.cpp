#include <iostream>
#include <vector>

using namespace std;

const int sza = 10;
const int szb = 10;

bool arr_compare(int a[], int sa, int b[], int sb) {
    bool result = true;
    if (sa == sb) {
        for (int i = 0; i < sa; i++) {
            if (a[i] != b[i])
                result = false;
        }
    }
    else{
       result = false;
    }
    return result;
}

int main(void){
    /*vector<int> arr{10, 90, 5, 78, 9, 0, 2, 87, 90, 34};
    vector<int> brr{ 10, 90, 5, 78, 9, 0, 2, 87, 90, 34};*/

    int  arr[sza]{10, 90, 5, 78, 9, 0, 2, 87, 90, 34};
    int  brr[szb]{10, 90, 5, 78, 9, 0, 2, 87, 90, 34};

    if (arr_compare(arr, sza, brr, szb))
        cout << "They are equal." << endl;
    else
        cout << "They are not equal." << endl;

    system("pause>null");
    return 0;
}
