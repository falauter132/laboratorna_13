#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    int const n = 10;

    int A[n][n];

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Елементи головної діагоналі:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " ";
    }

    cout << "Елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Елементи першого стовпчика:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i][0] << " ";
    }

    return 0;
}

//2////////////////////////////////////////////////////////

int main() {
    int const n = 10;

    int A[n][n];

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                A[i][j] = 0;
            }
            else {
                A[i][j] = pow(A[i][j], 2);
            }
        }
    }

    cout << "Перетворена матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//3////////////////////////////////////////////////////////

int main() {
    int const n = 10;

    int A[n][n];

    int max1 = A[0][0];
    int max2 = A[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > max1) {
                max2 = max1;
                max1 = A[i][j];
            }
            else if (A[i][j] > max2 && A[i][j] != max1) {
                max2 = A[i][j];
            }
        }
    }

    cout << "Перший найбільший елемент: " << max1 << endl;
    cout << "Другий найбільший елемент: " << max2 << endl;
}

//4////////////////////////////////////////////////////////

int main() {
    int const n = 10, m =10;
    int A[n][m], B[n][m], C[n][m];

    cout << "Введіть елементи матриці A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Введіть елементи матриці B:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Елементи матриці C:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//5////////////////////////////////////////////////////////

int main() {
    int const n = 10, m = 10;
    int A[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int maxInRow = A[i][0];
        for (int j = 1; j < m; j++) {
            if (A[i][j] > maxInRow) {
                maxInRow = A[i][j];
            }
        }
        sum += maxInRow;
    }

    cout << "Сума найбільших елементів рядків: " << sum << endl;

    return 0;
}

//6////////////////////////////////////////////////////////

int main() {
    int const n = 10, m = 10;
    int A[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int minV = A[0][0], maxV = A[0][0];
    int minR = 0, minC = 0, maxR = 0, maxC = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < minV) {
                minV = A[i][j];
                minR = i;
                minC = j;
            }
            if (A[i][j] > maxV) {
                maxV = A[i][j];
                maxR = i;
                maxC = j;
            }
        }
    }

    cout << "Мінімальний елемент: " << minV << " на індексах (" << minR << ", " << minC << ")" << endl;
    cout << "Максимальний елемент: " << maxV << " на індексах (" << maxR << ", " << maxC << ")" << endl;

    return 0;
}