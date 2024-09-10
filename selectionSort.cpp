#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cstring>
#define f first
#define s second
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

void selectionSort(int a[], int l, int r){
    for(int i = l ; i <= r ; i ++){
        int min = a[i];
        int k = i;
        for(int j = i + 1 ; j <= r ; j ++){
            if(a[j] < a[i]){
                min = a[j];
                k = j;
            }
        }
        swap(a[i], a[k]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[8] = {1, 7, 8, 6, 5, 3, 2, 4};
    selectionSort(a, 0, 7);
    for(int i = 0; i < 8 ; i ++){
        cout << a[i] << ' ';
    }

    return 0;
}