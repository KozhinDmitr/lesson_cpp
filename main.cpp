#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Sotrudn
{
public:
    int age;
    string SerName;
    string Name;
    string otch;
    string Dolzh;
};
int Menu()
{
    int menu;
    cout << "Список операций:" << endl;
    cout << "1. Вывести список сотрудников" << endl;
    cout << "2. Добавить сотрудника" << endl;
    cout << "3. Удалить сотрудника" << endl;
    cout << "4. Выход" << endl;
    cout << "Выбирите операцию: ";
    cin >> menu;
    return menu;
}

int main() {
    setlocale(LC_ALL,"ru");
    vector <Sotrudn> sotrudnik;
    string path1 = "/home/dmitry/CLionProjects/untitled/sort1.txt";
    string path2 = "/home/dmitry/CLionProjects/untitled/sort2.txt";
    string path3 = "/home/dmitry/CLionProjects/untitled/sort3.txt";
    string path;
    int var;
    cout << "Добро пожаловать в программу работы с списком сотрудников" << endl;
    cout << "Сотрудники Торгового дома" << endl;
    cout << "Сотрудники Диреции М3" << endl;
    cout << "Сотрудники Технической дирекции" << endl;
    cout << "Выбирите файл с сотрудниками: ";
    cin >> var;
    switch (var) {
        case 1:
        {
            path = path1;
            break;
        }
        case 2:
        {
            path = path2;
            break;
        }
        case 3:
        {
            path = path3;
            break;
        }
    }
    fstream sort;
    string text;
    sort.open(path, fstream::in| fstream::out);
    if (!sort.is_open())
    {
        cout << "Ошибка открытия файла!!!"<<endl;
    } else
    {
        cout << "Файл открыт" << endl;
        getline(cin,text);
        sort << text;
        sort << endl;
    }
    sort.close();
    return 0;
}
