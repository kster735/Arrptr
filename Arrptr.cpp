#include <iostream>
#include <vector>

using namespace std;



int main(void){
    vector<int> vec{ 90,2,3,4 };

    auto b = * (vec.begin() + 3);


    /*int x=9, y=10, z=2;

    int w = x * y + z;*/

    int i = 0;
    cout << i << " " << i++ << endl;

    int x = (b < 0) ? 1 : 0;
    cout << x << endl;

    system("pause>null");
    return 0;
}
