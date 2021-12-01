//Banker's Algorithm
//Holden Stallsmith
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, m, i, j, k, c,  q, a;
    n = 5; // Number of processes
    m = 3; // Number of resources
    c = 0;
    int alloc[5][3], max[5][3], avail[3];
    ifstream in("data.txt");
    q = 0;
    a = 0;
   
    while(!in.eof() && c<33){
        if (c < 15) {
            in >> alloc[q][a];
        }
        else if (c < 30){
            in >> max[q][a];
        }
        else avail[a];
        ++c;
        ++a;
        if(a==3){
            j = 0;
            ++q;
        }
        if (c==15 || c==30) q=0;
    }
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
        f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) need[i][j] = max[i][j] - alloc[i][j];
    }
    int y = 0;
    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {
  
                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]){
                        flag = 1;
                        break;
                    }
                }
  
                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++) avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
  
    cout << "Following is the SAFE Sequence" << endl;
    for (i = 0; i < n - 1; i++) cout << " P" << ans[i] << " ->";
    cout << " P" << ans[n - 1] <<endl;
    return (0);
}
