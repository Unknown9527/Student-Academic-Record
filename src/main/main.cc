#include <iostream>
#include "src/lib/solution.h"

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    AcademicRecord obj1;
    obj1.print();
    obj1 ++;
    obj1 ++;
    obj1 ++;
    obj1.print();
    obj1 --;
    obj1.print();

    AcademicRecord obj2(10,10,10);
    AcademicRecord obj3(obj1);
    // cout << (obj1==obj2) << endl;
    // cout << (obj1==obj3) << endl;

    obj1.print();
    obj1 += 200;
    obj1.print();

    obj1 -= 14;
    obj1.print();

    return EXIT_SUCCESS;
}
