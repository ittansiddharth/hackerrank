#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack<int> element;
    stack<int> maximum;
    int t,i=1,n,v;
    cin>>n;
    while(i<=n){
      
        int p1;
        int p2;
       cin>>t;
        if(t==1){
            cin>>v;
            element.push(v);
            if(maximum.size()==0){
                
                maximum.push(v);
            } else {
                //p1=element.top();
                p2=maximum.top();
                if(v>p2){
                    maximum.push(v);                 
                } else {
                    maximum.push(p2);
                }
            }
        }
        else if(t==2){
            element.pop();
            maximum.pop();
        }
        else if(t==3){
           // <int> p2;
            p2=maximum.top();
            cout<<p2<<endl;
        }
            
        
        i++;
        
    }
    return 0;
}

