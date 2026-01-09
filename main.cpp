#include <iostream>
#include <vector>

using namespace std;

void imprimirGrade(int grade[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0) cout << "-----------" << endl;

        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0 && j != 0) cout << "|";
            
            cout << grade[i][j];
        }
        cout << endl;
    }
}

int main() {
    int grade[9][9] = {0};

    grade[0][0] = 5;
    grade[4][4] = 9;
    grade[8][8] = 1;
    
    grade[1][1] = 6;
    grade[2][2] = 7;
    grade[3][3] = 3;
    
    grade[5][5] = 4;
    grade[6][6] = 2;
    grade[7][7] = 8;



    imprimirGrade(grade);

    return 0;
}