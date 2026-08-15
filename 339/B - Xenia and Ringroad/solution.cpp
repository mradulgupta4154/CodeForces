#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, m;
    cin >> n >> m;
 
    long long total_time = 0;
    long long current_house = 1;
 
    for (int i = 0; i < m; ++i) {
        long long next_house;
        cin >> next_house;
 
        if (next_house >= current_house) {
            total_time += next_house - current_house;
        } else {
            total_time += n - current_house + next_house;
        }
        current_house = next_house;
    }
 
    cout << total_time << "
";
    return 0;
}