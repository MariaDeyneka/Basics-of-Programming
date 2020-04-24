#include <iostream>

using namespace std;

int main()
{
    string str;
        getline(cin, str);
    int count = 1;

    for (int i = 0; i < str.length(); ++i)
        if (str[i] == ' ')
            ++count;
    cout << count << endl;
}

//1.Ввід: Національний університет імені Івана Франка Вивід: 5
//2.Ввід: Дейнека МаріяЄвгенівнаВаріант 7 Вивід: 3
//3.Ввід: АндрусенкоМаксимОлександрович Вивід: 1
