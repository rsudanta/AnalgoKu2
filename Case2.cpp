/*
Nama 	: Muhammad Risqullah Sudanta Gorau
NPM 	: 140810180066
Kelas 	: B
*/

#include <iostream>
using namespace std;

#define N 4
int SequentialSearch(int *x, int y){
    int idx;
    int i = 0;
    bool found = false;
    while( i < sizeof(x) && !found){
        if(x[i] == y)
            found = true;
        else
            i++;
    }

    if(found)
        idx = i;
    else
        idx = 0;
    return idx;
}
int main(){
    int x[N] = {1,2,3,4};
    cout << "Index key : " << SequentialSearch(x,2);
}

