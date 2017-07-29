#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        string s;
        cin >> s;
        stack<char> st;
        char* ch;
        //cout<<s.length()<<endl;
        ch=(char*)malloc(sizeof(char)*(s.length()+1));
        
        
        //ch=(char*)malloc(sizeof(char)*100;
        strcpy(ch,s.c_str());
        for(int i=0;i<s.length();i++)
        {
            if(ch[i]=='{' || ch[i]=='[' || ch[i]=='(')
            {
                st.push(ch[i]);
            }
            else
            {
                //cout<<"jkl";
                if(ch[i]=='}')
                {
                    if(st.size()==0)
                    {
                        st.push(ch[i]);
                //        cout<<"NO"<<endl;
                        //cout<<"hjk";
                        break;
                    }
                    else
                    {
                        if(st.top()=='{')
                        {
                            st.pop();
                        }    
                        else{
                  //          cout<<"NO"<<endl;
                            break;
                        }
                    }
                    
                    //cout<<"abc";
                }
                else if(ch[i]==']')
                {
                    if(st.size()==0){
                        st.push(ch[i]);
                 //       cout<<"NO"<<endl;
                        break;
                    }
                    else{
                        if(st.top()=='['){
                            st.pop();
                        }
                        else{
                   //         cout<<"NO"<<endl;
                            break;
                        }
                    }
                }
                else if(ch[i]==')')
                {
                    if(st.size()==0){
                        st.push(ch[i]);
                        //cout<<"NO"<<endl;
                        break;
                    }
                    else{
                        if(st.top()=='('){
                            st.pop();
                        }
                        else{
                      //      cout<<"NO"<<endl;
                            break;
                        }
                    }
                }
                //else
              //  {
            //        break;
          //      }
            }
        }
        if(st.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
    
