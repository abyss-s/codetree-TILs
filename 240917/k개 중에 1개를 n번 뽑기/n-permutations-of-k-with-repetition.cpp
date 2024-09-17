#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 1부터 n까지의 숫자를 수열에 입력 가능
// m = 재귀 수행할 깊이 
int n, m; 
vector<int> v;

// 백트래킹을 수행할 함수
void backtracking(int depth) {
  if (depth == m) {
    for (int i = 0; i < m; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
    return;
  }

  for (int i = 1; i <= n; i++) {
   
  
      v.push_back(i);           // 수열에 추가
      backtracking(depth + 1);  // 다음 깊이로 재귀 호출
    
      v.pop_back();             // 수열에서 제거
    }
  
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;

  backtracking(0);

  return 0;
}