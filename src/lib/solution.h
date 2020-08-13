#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class AcademicRecord{
public:
    AcademicRecord(){maths =0; science=0; physics=0;};
    AcademicRecord(int m, int s, int p){maths =m; science=s; physics = p;};
    AcademicRecord(const AcademicRecord & record) {
        maths = record.maths;
        science = record.science;
        physics = record.physics;
    };

    void operator++(int){
    maths = maths + 10;
    science = science + 10;
    physics = physics + 10;

    if(maths > 100) {maths = 100;}
    if(science > 100) {science = 100;}
    if(physics >100) {physics = 100;}

    };

    void operator--(int){
    maths -= 20;
    science -= 20;
    physics -= 20;
    if(maths < 0) {maths = 0;}
    if(science < 0) {science = 0;}
    if(physics < 0) {physics = 0;}
    };

    void operator+= (int i){
    maths += i;
    science += i;
    physics += i;
    if(maths > 100){maths = 100;}
    if(science > 100) {science = 100;}
    if(physics >100) {physics = 100;}
    };

    void operator-= (int i){
    maths -= i;
    science -= i;
    physics -= i;
    if(maths < 0) {maths = 0;}
    if(science < 0) {science = 0;}
    if(physics < 0) {physics = 0;}
    };

    bool operator== ( const AcademicRecord & obj2){
    return maths == obj2.maths && science == obj2.science && physics == obj2.physics;
    };

    void print(){
    cout << "Maths::" << maths << endl;
    cout << "Science::" << science << endl;
    cout << "Physics::" << physics << endl;
    };

private:
    int maths;
    int science;
    int physics;
};

#endif