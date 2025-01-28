#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N, K;  // N - количество белочек, K - количество орешков

    cout << "Введите количество белочек (N): ";
    cin >> N;

    cout << "Введите количество орешков (K): ";
    cin >> K;

    // Рассчитываем количество орешков, которое получит каждая белка
    int Orexi1 = K / N;

    // Рассчитываем количество оставшихся орешков
    int Orexi2 = K % N;

    cout << "Каждая белка получит " << Orexi1 << " орешков." << endl;
    cout << "Оставшиеся орешки: " << Orexi2 << endl;

    return 0;
} 
