#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

int p(int a, int b){
    assert(a > 0 && b > 0);
    
    if (a < b) swap(a, b);
    if (a % b == 0) return b;

    return dice(b, a % b);
}

int main(){

    int total = 6 * 6;
    int count = 0;

    for (i = 1; i <=6; i++)
        for (j = 1; i <= 6; j++)
            if (i + j <=9)
                count +=1;
    out << p(total, count);

}