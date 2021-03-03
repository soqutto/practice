#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<unsigned int> ans(N);

    for(int i=0; i<32; ++i){
        bitset<200000> b;
        bitset<200000> as;
        as.set(0);
        for(int j=0; j<N; ++j){
            if((A[j] >> i) & 1) b.set(j);
        }
        for(int j=0; j<N-1; ++j){
            if(b[j] == b[j+1]) as[j+1] = as[j];
            else {
                as[j+1] = as[j];
                as.flip(j+1);
            }
        }
        int cnt = as.count();
        for(int j=0; j<N; ++j){
            if(as[j]) cnt--;
            if(j>=1 && as[j-1]) cnt++;
            if(b[j] && cnt%2==0){
                as.flip();
                break;
            } else if(!b[j] && cnt%2==1){
                as.flip();
                break;
            }
        }

        for(int j=0; j<N; ++j){
            ans[j] |= ((int)as[j] << i);
        }
    }

    for(int i=0; i<N; ++i){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
