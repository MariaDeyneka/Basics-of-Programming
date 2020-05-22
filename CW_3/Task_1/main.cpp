#define _CRT_SECURE_NO_WARNINGS
#include "struct.h"

void sorted(Univ equa[10], int len) {
    ofstream file;
    file.open("educationinstitution_output.txt", ios_base::app);

    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            if (equa[i].age == equa[j].age && equa[i].amontStudent > equa[j].amontStudent) {
                Univ temp = equa[i];
                equa[i] = equa[j];
                equa[j] = temp;
            }
            else if (equa[i].age > equa[j].age) {
                Univ temp = equa[i];
                equa[i] = equa[j];
                equa[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        file << equa[i].Name << "," << equa[i].city << "," << equa[i].age << ", " << equa[i].amontStudent << endl;

    }
    file.close();
}


int main()
{
    Univ univArr[10];
    ifstream fin("educatio institution_input.txt");
    int sizeStruct = 0;
    char str[100];

    try {
        if (!fin) {
            throw "Error";
        }

        while (fin.getline(str, 100))
        {
            char* pch;
            pch = strtok(str, " ");
            int j = 1;
            while (pch != NULL)
            {
                switch (j)
                {
                case 1:
                    strcpy(univArr[sizeStruct].Name, pch);
                    j++;
                    break;
                case 2:
                    strcpy(univArr[sizeStruct].city, pch);
                    j++;
                    break;
                case 3:
                    univArr[sizeStruct].age = atoi(pch);
                    j++;
                    break;
                case 4:
                    univArr[sizeStruct].amontStudent = atoi(pch);
                    j = 1;
                    break;
                default:
                    break;
                }
                pch = strtok(NULL, " ");
            }

            sizeStruct++;

        }


        int min = univArr[0].age;
        int ind = 0;
        for (int i = 1; i < sizeStruct; i++) {
            if (univArr[i].age < min)
            {
                min = univArr[i].age;
                ind = i;
            }
        }
       

        cout << "The oldest University: \n";
        cout << univArr[ind].Name << ", " << univArr[ind].city << ", " << univArr[ind].age << ", " << univArr[ind].amontStudent << endl;
        cout << "UnSorted list: \n";
        for (int i = 0; i < sizeStruct; i++) {
            cout << univArr[i].Name << ", " << univArr[i].city << ", " << univArr[i].age << ", " << univArr[i].amontStudent << endl;

        }
        sorted(univArr, sizeStruct);
    }

    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }

    return 0;
}
