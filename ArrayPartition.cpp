#include "ArrayPartitionProblem.h"

//Check2(...) returneaza true la momentul gasirii PRIMEI partitii de numere a carei sume este egala cu cea data ca parametru.
//Explicatie detaliata in fisierul README.md 
bool check2(int ind, int sum, int element, int A[], int n) {
    if (element == 0) return (sum == 0);
    if (ind >= n) return false;

    if (A[ind] <= sum) {
        if (check2(ind + 1, sum - A[ind], element - 1, A, n))
            return true;
    }
    if (check2(ind + 1, sum, element, A, n))
        return true;
    return false;
}

bool averageArrayPartition2(int A[], int sizeA)
{
    // Notam cu sumA suma sirului de elemte A, iar sumB suma necesara pentru care exista o partitie(explicatia detaliata se gaseste
    //in fisierul README.md)
    int sumA = 0, sumB = 0;
    // S1 = (S*n1/n)

    //aflam suma totala a listei de elemente (int)A[]
    for (int i = 0; i < sizeA; i++)
        sumA += A[i];

    // verificam toate posibilitatile de lungime a unei partitii si daca aceasta este sau nu solutie pt problema noastra
    // in caz afirmativ returnam true, in caz negativ returnam false
    for (int i = 1; i < sizeA; i++)
        //first condition to check if a parition is possible of i elements
        if ((sumA * i) % sizeA == 0) {
            //S1 -> suma necesara pe care o partitie de i numere trebuie sa o aiba pentru a indeplinii conditia
            sumB = (sumA * i) / sizeA;
            if (check2(0, sumB, i, A, sizeA)) {
                return true;
            }
        }
    return false;
}