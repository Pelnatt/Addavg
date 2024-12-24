#include <iostream>

using namespace std;

double Avg(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int scores[5];
    int num = 0;

    cout << "학생 다섯 명의 점수를 입력하세요:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "학생 " << (i + 1) << "의 점수: ";
        cin >> scores[i];
        num += scores[i];
    }

    double average = Avg(scores, 5);

    cout << "합산 결과: " << num << endl;
    cout << "평균 값: " << average << endl;

    return 0;
}
