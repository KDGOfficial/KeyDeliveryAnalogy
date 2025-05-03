#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>

using namespace std;

mutex mtx;

void deliverKey(string building, int keyId) {
    lock_guard<mutex> lock(mtx);
    cout << "Доставка ключа " << keyId << " в " << building << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Ключ " << keyId << " успешно доставлен в " << building << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    vector<thread> threads;
    string buildings[] = { "Дом", "Фабрика", "Банк" };
    int keyIds[] = { 1, 2, 3 };

    for (int i = 0; i < 3; i++) {
        threads.push_back(thread(deliverKey, buildings[i], keyIds[i]));
    }

    for (auto& th : threads) {
        th.join();
    }

    cout << "Все ключи успешно доставлены!" << endl;

    return 0;
}