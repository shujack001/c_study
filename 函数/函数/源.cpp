
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // �����������

    int secretNumber = rand() % 100 + 1; // ����1��100֮��������
    int guess;
    int attempts = 0;

    std::cout << "�²���������������Ƕ��٣�1-100����" << std::endl;

    do {
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "��С�ˣ�����һ�Σ�" << std::endl;
        }
        else if (guess > secretNumber) {
            std::cout << "�´��ˣ�����һ�Σ�" << std::endl;
        }
        else {
            std::cout << "��ϲ��¶��ˣ������� " << attempts << " �β��������� " << secretNumber << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}