#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int answer = 0;
    int seeLevel = 0;
    bool canAddValley = false;
    for (int i = 0; i < n; i ++) {
        if (s.at(i) == 'D') {
            seeLevel--;    
        } else if (s.at(i) == 'U') {
            seeLevel++;
        }

        if (seeLevel < 0) {
            canAddValley = true;
        } else if (seeLevel == 0 && canAddValley == true ) {
            answer++;
            canAddValley = false;
        }
    }
        
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
