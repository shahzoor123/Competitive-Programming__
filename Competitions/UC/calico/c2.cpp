#include <bits/stdc++.h>
using namespace std;

struct Piece {
    char type;
    int x, y;
};

bool blocked(const Piece &a, const Piece &b, const vector<Piece> &pieces) {
    for (auto &p : pieces) {
        if ((p.x == a.x && a.x == b.x && p.y > min(a.y, b.y) && p.y < max(a.y, b.y)) ||
            (p.y == a.y && a.y == b.y && p.x > min(a.x, b.x) && p.x < max(a.x, b.x)) ||
            (abs(p.x - a.x) == abs(p.y - a.y) && abs(a.x - b.x) == abs(a.y - b.y) &&
             p.x > min(a.x, b.x) && p.x < max(a.x, b.x))) {
            if (&p != &a && &p != &b) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        vector<Piece> pieces(K);
        for (int i = 0; i < K; i++)
            cin >> pieces[i].type >> pieces[i].x >> pieces[i].y;

        int attacks = 0;

        for (int i = 0; i < K; i++) {
            for (int j = 0; j < K; j++) {
                if (i == j) continue;
                Piece &a = pieces[i];
                Piece &b = pieces[j];
                bool can = false;

                if ((a.type == 'R' || a.type == 'Q') && (a.x == b.x || a.y == b.y))
                    if (!blocked(a, b, pieces)) can = true;

                if ((a.type == 'B' || a.type == 'Q') && (abs(a.x - b.x) == abs(a.y - b.y)))
                    if (!blocked(a, b, pieces)) can = true;

                if (can) attacks++;
            }
        }

        cout << attacks << "\n";
    }
}
