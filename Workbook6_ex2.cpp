#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map <char, int> Table(string s){
    unordered_map <char, int> table;
    for (auto el: s){
        table[el]++;
    }
    return table;
}

int main(){
    cout << "Введите строку: ";
    string line;
    getline(cin,line);
    auto table = Table(line);
    for (auto& pair: table){
        cout << pair.first << ": " << pair.second << "\n";
    }
}