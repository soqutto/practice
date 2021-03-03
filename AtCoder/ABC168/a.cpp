#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string N; cin >> N;
    char n = N[N.size()-1];

    switch(n){
        case '0':
        case '1':
        case '6':
        case '8':
            cout << "pon" << endl;
            break;
        case '2':
        case '4':
        case '5':
        case '7':
        case '9':
            cout << "hon" << endl;
            break;
        case '3':
            cout << "bon" << endl;
            break;
    }
    return 0;
}
