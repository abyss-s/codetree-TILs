#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x = 0, y = 0;

  // 동서남북에 따른 좌표가 움직이는 거리
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, -1, 1};

  for (int i = 0; i < n; i++) {
    string direction;
    int distance;
    cin >> direction >> distance;

    int dir_num;

    // 방향에 따른 인덱스 결정
    if (direction == "E")
      dir_num = 0;  // 동쪽
    else if (direction == "W")
      dir_num = 1;  // 서쪽
    else if (direction == "S")
      dir_num = 2;  // 남쪽
    else if (direction == "N")
      dir_num = 3;  // 북쪽

    x += dx[dir_num] * distance;
    y += dy[dir_num] * distance;
  }

  // 최종 좌표 출력
  cout << x << " " << y << endl;

  return 0;
}