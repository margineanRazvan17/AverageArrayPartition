#include <iostream>
#include "ArrayPartitionProblem.h"
#include "Test.h"
#include <vector>

int main()
{
    //Vom rula testele predefinite in Test.cpp
    Test();

    int A[29], n;
    bool runMenu = true;
    cout << "Hello UMT Software Internship Fest 2023 team!" << endl;

    //Se creeaza un meniu pentru a putea testa de la tastatura algoritmul cerut in problema.
    //Deoarece in cerinta nu sa precizat creerea unor metode pentru validarea datelor
    //acestea nu au mai fost adaugate, rezolvarea axandu-se in mare parte doar pe partea algoritmica.
    //Atentie:Se asteapta introducerea datelor valide de la tastatura(de tip int, 0 < n <29)
    while (runMenu) {
        cout << "Meniu:" << endl;
        cout << "1.Testare problema 3(split array problem) de la tastatura." << endl;
        cout << "2.Exit" << endl;

        int optiune;
        cout << "Alegeti optiunea:" << endl;
        cin >> optiune;
        if (optiune == 1) {
            cout << "Selectati numarul elemetelor din array(0 < n < 29):" << endl;
            cin >> n;
            cout << "Adaugati elemente array(separate prin tasta Enter)" << endl;
            for (int i = 0; i < n; i++)
                cin >> A[i];
            if (averageArrayPartition2(A, n) == true)
                cout << "True" << endl;
            else
                cout << "False" << endl;

        }
        else if (optiune == 2) break;
    }
}

