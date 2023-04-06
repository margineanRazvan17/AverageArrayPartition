# AverageArrayPartition
NECLARITATI:(*)Deoarece nu sa precizat modalitatea de verificare a algoritmului implementat am decis sa fac o aplicatie de tip consola cu un meniu in care sa se poata 
           introduca de la tastatura un sir de n numere urmand sa se afiseze dupa introducerea datelor,pe consola true sau false.Deasemenea am creat o functie Test()
           in care facem verificarea algoritmului cu assert.

ex: A[] = {1,2,3,4,5,6,7,8}
    Solutie:B[] = [1,4,5,8] si C[] = [2,3,6,7] rezulta ca programul nostru va trebui sa returneze true deoarece media aritmetica a numerelor din B este egala cu media
            aritmetica a elemtelor din C.
Rezolvare:
  Vom nota astfel: sumA - suma numerelor din sirul A, sizaA - lungimea sirului A 
                   sumB - suma numerelor din sirul B, sizaB - lungimea sirului B
                   sumC - suma numerelor din sirul C, sizeC - lungimea sirului C
                   ⇒(*) sizeA = sizeB + siceC,  sumA = sumB + sumC 
  
  Asfel o conditie pentru a putea avea o partitie a sirului A care sa indeplineasca conditia ceruta va fi:
    sumB/sizeb = sumC/sizeC
    ⇔ sumB/sizeb = (sumA - sumB)/(sizeA - sizeB)
    ⇔ sumB * (sizeA - sizeB) = (sumA - sumB) * sizeB
    ⇔ sumB*sizeA - sumB*sizeB = sumA*sizeB -sumB*sizeB
    ⇔ sumB*sizeA = sumA*sizeB
    ⇔ !!! sumB = sumA*sizeB/sizeA !!! ⇒  sumB/sizeb = sumC/sizeC ⇔ sumB = sumA*sizeB/sizeA
    Asadar am redus problema la gasirea unei singure partitii a carei sume sa satifaca conditia de mai sus(sumB = sumA*sizeB/sizeA).Asfel daca suma unei partitii de 
    sizeB numere este egala cu formula !sumA*sizeB/sizeA! noi vom putea spune daca sirul initial de numere A poate fi impartit in doua siruri de numere cu medii arit-
    metice egale, sporind astfel eficienta programului.
    Atentie: 1)Daca sumA*sizeB/sizeA nu este de tip int atunci nu putem avea o partitie de sizeB elemente drept urmare vom sari peste acest caz.
             2)Putem aveam maxim sizeA-1 numere intr-o partitie ⇒1 <= sizeB < sizeA,  ex: if sizeB = 3 ⇒ (int)B[] = {b1, b2, b3}.
  
  Pentru gasirea partitilor am decis sa impementez o funcite check2(int ind, int sum, int element, int A[], int n) care functioneaza recursiv si returneaza true
daca este posibil sa construim un subsir de elemente cu indexul = ind si de marimmea = element a carei curenta suma sa fie egala cu = sum.In caz contrar va returna false.
Check2(...) va avea o complexitate de  n*(2^n) ceea ce este destul de eficient pentru a putea rula si in cazurile in care marimea sirului A[] este 30(lungimea maxim data
in cerinta). 
             
