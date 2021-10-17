#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int temp = a[i];
        for (int y = 0; y < n; y++){
            if (temp == a[y])
                b[a[i]]++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (b[i] != 0) {
            cout << i << " - " << b[i] <<"; ";
        }
    }
    return 0;
}