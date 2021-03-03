#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int64_t> num(N+1);
    vector<int64_t> div(N+1, 1);
    vector<int> prime;
    vector<bool> isprime(N+1, true);

    // Sieve of Eratosthenes:
    for(int i=2; i*i<=N; ++i){
        for(int d=i*i; d<=N; d+=i) isprime[d] = false;
    }
    for(int i=2; i<=N; ++i) if(isprime[i]) prime.push_back(i);
    for(int i=1; i<=N; ++i) num[i] = i;

    for(auto p: prime){
        for(int i=p; i<=N; i += p){
            int divn = 0;
            while(num[i]%p==0){
                num[i] /= p;
                divn++;
            }
            div[i] *= divn+1;
        }
    }
    
    int64_t ans = 0;
    for(int i=1; i<=N; ++i){
        ans += i * div[i];
    }

    cout << ans << endl;

    return 0;
}
