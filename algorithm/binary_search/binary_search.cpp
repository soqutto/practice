#include <bits/stdc++.h>

using namespace std;

vector<int> randVec(int n, pair<int, int> p){
    vector<int> vec(n);
    for(int i=0; i<n; ++i){
        vec[i] = rand() % (p.second - p.first) + p.first;
    }
    return vec;
}

template<typename T>
void vec_dump(vector<T> vec){
    int m = *max_element(vec.begin(), vec.end());
    int k = max(to_string(vec.size()-1).length(), to_string(m).length());
    for(int i=0; i<vec.size(); ++i) cout << "[" << setw(k) << right << i << "]";
    cout << endl;
    for(auto v : vec) cout << setw(k+1) << right << v << " ";
    cout << endl;
}

int my_binary_search(vector<int> vec, int key){
    int left = 0, right = vec.size()-1;
    int mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        printf("left: %d, right: %d, mid: %d\n", left, right, mid);
        if(vec[mid] == key) return mid;
        else if(vec[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    int N, MIN, MAX;
    cout << "Input element num: ";
    cin >> N;

    cout << "Input Minimum num: ";
    cin >> MIN;

    cout << "Input Maximum num: ";
    cin >> MAX;

    if(MIN > MAX){
        cout << "Error: min > max." << endl;
        return -1;
    }

    if(N < 1){
        cout << "Error: n < 1." << endl;
        return -1;
    }

    int n = N;
    pair<int, int> p = {MIN, MAX};
    vector<int> vec = randVec(n, p);
    vec_dump(vec);

    // sort
    sort(vec.begin(), vec.end());
    vec_dump(vec);
    
    // input value to search
    printf("Value to search (%d-%d): ", p.first, p.second);
    int val;
    cin >> val;

    int ret;
    ret = my_binary_search(vec, val);

    if(ret == -1){
        cout << "Key value not found." << endl;
    } else {
        cout << "Key value found at index " << ret << "." << endl;
    }

    return 0;
}
