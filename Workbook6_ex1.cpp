#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

const int Table_size = 7;

int hash_Key(int value){
    return value % Table_size;
}

int main(){
    vector<int> numbers;
    unordered_map<int, vector<int>> table;
    int kolvo;
    cout << "Введите количество элементов ";
    cin >> kolvo;
    cout << "Введите элементы" << endl;
    int el;
    for (int i = 0; i < kolvo; i++){
        cin >> el;
        numbers.push_back(el);
    }
    for (auto num: numbers){
        table[hash_Key(num)].push_back(num);
    }
    cout << "Хэш таблица\n";
    for (auto& pair: table){
        cout << pair.first << ": ";
        for (auto el: pair.second){
            cout << el << ' ';
        }
        cout << endl;
    }
}