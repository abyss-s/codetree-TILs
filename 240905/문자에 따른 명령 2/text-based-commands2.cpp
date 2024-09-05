#include <iostream>
#include <string>
using namespace std;

int main() {
  string direction;
  cin >> direction;

  // 초기 좌표 위치
  int x = 0, y = 0;

  // 북 동 남 서
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  // 초기 위치 북쪽에서 시작
  int dir_num = 0;

  for (int i = 0; i < direction.length(); i++) {
    char dir_char = direction[i];

    // 방향에 따른 인덱스 결정
    if (dir_char == 'L')
      dir_num = (dir_num + 3) % 4;
    else if (dir_char == 'R')
      dir_num = (dir_num + 1) % 4;
    else if (dir_char == 'F') {
      // 한 칸 이동
      x += dx[dir_num];
      y += dy[dir_num];
    }
  }

  cout << x << " " << y << endl;

  return 0;
}