#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;

using namespace std;

struct Photo {
  char ori;
  int id;
  vector<int> entries;
  int eLength;
};

map<string, int> mapIds;

int main() {
  int n, count = 0;
  scanf("%d\n", &n);
  Photo p[n];
  for (int i = 0; i < n; i++) {
    p[i].id = i;
    cin >> p[i].ori >> p[i].eLength;
    p[i].entries.resize(p[i].eLength);
    string tag;
    for (int j = 0; j < p[i].eLength; j++) {
      if (cin >> tag) {
        if (mapIds.find(tag) == mapIds.end()) {
          mapIds[tag] = count++;
        }
        p[i].entries[j] = mapIds[tag];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << p[i].ori << " " << p[i].eLength << " " << p[i].id << "\n";
  }

}
