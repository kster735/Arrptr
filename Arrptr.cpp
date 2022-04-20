#include <iostream>
#include <vector>
#include <bitset>

using namespace std;



int main(void) {

    unsigned long quiz1 = 0;

    quiz1 |= (1UL << 5);

    //quiz1 &= ~(1UL << 27);

    

    cout << bitset<32> {quiz1} << endl;


    bool status = quiz1 & (1UL << 27);

    cout << boolalpha;
    cout << status << endl;

    system("pause>null");
    return 0;
}
