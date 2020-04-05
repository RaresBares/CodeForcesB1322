#include <iostream>

const int max = 400001;
int ar[max];

using namespace std;

int main() {
    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> ar[i] ;
    }

    int cur = 0;

    for (int i = 0; i < n; i++) {
        for (int k = i +1; k < n; k++) {
            cur ^= (ar[i]  + ar[k]);
        }
    }

    cout <<"\n"<< cur;

    return 0;
}
