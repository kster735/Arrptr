#include <iostream>
#include <vector>
#include <bitset>

using namespace std;



int main(void) {

    int j = 5;
    int i = 2;

    /// <summary>
    /// Same as 
    /// double slope = double(j)/i;
    /// or
    /// double slope = (double) j/i;
    /// </summary>
    /// <param name=""></param>
    /// <returns></returns>


    double slope = static_cast<double> (j)/i;


    void* k=&i;

    int l =  * ((int*)k);

    cout << slope <<" "<< l << endl;

    system("pause>null");
    return 0;
}
