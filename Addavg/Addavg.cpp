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

    cout << "�л� �ټ� ���� ������ �Է��ϼ���:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "�л� " << (i + 1) << "�� ����: ";
        cin >> scores[i];
        num += scores[i];
    }

    double average = Avg(scores, 5);

    cout << "�ջ� ���: " << num << endl;
    cout << "��� ��: " << average << endl;

    return 0;
}
