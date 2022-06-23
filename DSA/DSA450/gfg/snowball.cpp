#include<bits/stdc++.h>
#include <vector>
using namespace std;

int snowball(int N, vector<int> weights){
        int sum = 0;
        for (int i =0;i<N;i++)
            sum += weights.at(i);
        return sum;
    }

int main(){
  int N = 3;
  vector<int> weights(1,2,4);
  cout << (snowball(N, vector<int> weights));
}
