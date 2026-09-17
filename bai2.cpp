#include<bits/stdc++.h>
using namespace std ; 
int main() 
{
    ifstream f("bai2.inp") ; 
    ofstream g("bai2.out") ; 
    string s ;
    getline(f,s) ; 
    int k ; 
    f>>k ; 
    int n = s.size();
    vector<char> a(s.begin(), s.end());
    for(int i=0 ; i<n ; i++ ){
        for(int j=i+1 ; j<n ; j++ ){
            swap(s[i] , s[j]) ; 
        }
    }
    char h=65 ; 
    char tho=97 ; 
    for(int i=0 ;  i<s.size() ; i++ ){
        for(int j=65 ; j<=90 ; j++ ){
            h=j ; 
            
            if(h+k>90) h=90+k ; 
            if(s[i]==h) {
                h+=k ; 
                s[i]=h ; 
                break ; 
            }
        }
    }
    for(int i=0 ;  i<s.size() ; i++ ){
        for(int j=97 ; j<=122; j++ ){
            h=j ; 
            
            if(h+k>122) h=97+k ; 
            if(s[i]==h) {
                h+=k ; 
                s[i]=h ; 
                break ; 
            }
        }
    }
    g<<s<<endl ; 
    return 0 ; 
}
