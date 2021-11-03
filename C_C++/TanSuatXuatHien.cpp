#include<iostream>

using namespace std;

int a[100001], b[100001];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int Max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > Max){
            Max = a[i];
        }
    }
    for (int i = 0; i <= Max; i++){
        b[i] = 0;
    }
    for (int i = 0; i < n; i++){
        b[a[i]] += 1;
    }
    for (int i = 0; i <= Max; i++){
        if (b[i] > 0){
            cout << i << " - " << b[i] << "; ";
        }
    }
    return 0;
}