#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,r,i;
    int* a = NULL;
    int* b = NULL;
    //int a[z]= (int)malloc(100 * sizeof(int),b[x]= (int)malloc(100 * sizeof(int);
    cin>> n;
    a = new int[n];
    b = new int[n];
    cin>> r;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0 ; i < n;i++)
    {
        if((n-r+i) >= n)
        {
            int m;
            m = (n-r+i) % n;
            b[m] = a[i];
        }
        
        b[n-r+i] = a[i];
    }
    for(i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}

