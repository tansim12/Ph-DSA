#include <bits/stdc++.h>
using namespace std;

int r, c;
vector<string> maze;
bool visited[1005][1005];

// Movement order: right, left, up, down
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

// DFS with backtracking
bool dfs(int x, int y) {
    if (maze[x][y] == 'D') return true;

    visited[x][y] = true;

    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
            if (!visited[nx][ny] && (maze[nx][ny] == '.' || maze[nx][ny] == 'D')) {
                if (dfs(nx, ny)) {
                    if (maze[x][y] != 'R') maze[x][y] = 'X';
                    return true;  // only mark the valid path
                }
            }
        }
    }

    return false;
}

int main() {
    cin >> r >> c;
    maze.resize(r);
    int startX = -1, startY = -1;

    for (int i = 0; i < r; i++) {
        cin >> maze[i];
        for (int j = 0; j < c; j++) {
            if (maze[i][j] == 'R') {
                startX = i;
                startY = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    dfs(startX, startY);

    for (int i = 0; i < r; i++) {
        cout << maze[i] << endl;
    }

    return 0;
}
