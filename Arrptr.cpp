#include <iostream>
#include <vector>

using namespace std;



int main(void){
    const bool t = true;
    bool f = false;

    f = t;

    cout << sizeof t << endl;

    decltype(t) boolean1 = false; //needs initialization because const t yields an lvalue
    //and lvalues return an lvalue with decltype.


    decltype(f) boolean2; //no need for initialization

    /// <summary>
    /// A new commit after 655ad480
    /// </summary>
    /// <param name=""></param>
    /// <returns></returns>

    system("pause>null");
    return 0;
}
