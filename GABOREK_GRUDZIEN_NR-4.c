//
//  GABOREK_GRUDZIEN_NR-4.c
//  Gaborek_grudzien_-_zadanie_nr_4
//
//  Created by Paweł Gaborek on 05/12/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//


// Zadania:
// 4.1 Pobrac od uzytkownika liczbEi) n. Zaalokowac pamiEi)C na n element6w int i pobrac je od uzytkownika.
// Wykonac na niej metodEi) printBackwards z 2.2.
// 4.2Pobrac od uzytkownika liczbEi) n. Zaalokowac pamiEi)6 na n element6w int i pobrac je od uzytkownika.
// NastEi)pnie zaalokowac pamiEi)c i utworzyc tablicEi), w kt6rej bEi)dq tylko UJEMNE wartosci z pierwszej
// tablicy. Na koniec zwolnic pamiEi)C na obie tablice.
// 4.3 Napisac metodEi) boolAreArrays ldentical(int * a1, int s1, int * a2, int s2) zwracajqcq informacj. czy
// dwie
// tablice podane jako parametr sq identyczne, tj. czy majq takq samq dlugosc i czy na kazdym indeksie wyst
// puje taki sam element.
// 4.4 Napisac meted char * reverseString(char*s), kt6ra ZWR6CI (a nie wypisze!) string, kt6ry jest odwr6conym
// stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamic na nowylaricuch i go zwr6ci. (caty
// algorytm nalezy zaimplementowac samodzielnie). Nalezy go nastpnie ,,przechwycic" w funkcji main, aby pamic
// na koniec wyczyscic:
//  int main()
//  {
//  zaalokuj i pobierz od usera tablicEi) *str, dla przykladu pobrac ,,Ala ma kota!" char * result =
//  reverseStr ing(str);
//      printf(,,%s", result); II !atok am alA
//      free(str); II zwalniamy pami c z pierwszej tablicy
//      free(result); II zwracamy wynik z funkcji, kt6ry ,,przechwycil" main().
//  }



#include <stdio.h>
#include <stdlib.h>

/*************************************************************************************************
 Funkcja dla zadania nr 4.1 (punkt 4.1 - grudzien), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int printBackwards(int *a, int s)
{
    int j;
    for(j=0; j<s; j++)
    {
        printf("Element nr %d", s-j);
        printf("\twynosi %d\t", a[s-j-1]);
    }
    return *a;
}

/*************************************************************************************************
 Funkcja dla zadania nr 4.2 (punkt 4.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int funkcja42 (int )
{
    
    return pustalinia;
}

/*************************************************************************************************
 Funkcja dla zadania nr 4.3 (punkt 4.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int funkcja43 (int )
{
    
    return pustalinia;
}3



/*************************************************************************************************
 Zadanie nr 1 (punkty 4.1, 4.2, 4.3, 4.4). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej
    int aaa;
    int aab;
    int aac;
    int baa;
    int bab;
    int bac;
    int caa;
    int cab;
    int cac;
    
    
    while(wyjscie == 0) {
        printf ("\nMasz teraz mozliwosc wyboru ktora czesc programu chcesz uruchomic\n");
        printf ("Mozesz wybrac podprogram nr 4.1, 4.2, 4.3 badz 4.4\n");
        printf ("Aby uruchomic program nr: \n");
        printf ("\n4.1 wybierz ''1'' \n");
        printf ("\n4.2 wybierz ''2'' \n");
        printf ("\n4.3 wybierz ''3'' \n");
        printf ("\n4.4 wybierz ''4'' \n");
        printf ("Po wprowadzeniu odpowiedniej liczby potwierdz klawiszem ''ENTER''\n");
        scanf ("%i", &wybor);
        switch (wybor)
        {
            case 1:
                // rozpoczynam program nr 4.1 grudzien
                puts ("Super wlasnie wybrales podprogram nr 2.2\n");
                puts ("Program wyswietli wastosci poszczegolnych elemwntow tablicy w kolejnosci odwrotnej\n");
                puts ("Jednak najpierw musisz podac wartosci dla poszczegolnych elementow tablicy\n");
                puts ("Podaj pięć kolejnych liczb: \n");
                
                printf ("Element nr 1:\t");
                scanf ("%i\n", &tablica1[0]);
                
                printf ("Element nr 2:\t");
                scanf ("%i\n", &tablica1[1]);
                
                printf ("Element nr 3:\t");
                scanf ("%i\n", &tablica1[2]);
                
                printf ("Element nr 4:\t");
                scanf ("%i\n", &tablica1[3]);
                
                printf ("Element nr 5:\t");
                scanf ("%i\n", &tablica1[4]);
                puts ("Oto Twoja tablica pieciu elementow: \n");
                for ( int i =0; i <= 4; i++)
                    printf ("Element %i : %d\t", i+1, tablica1[i]);
                puts ("\nPowyzej wyswietlono wprowadzona tablice liczb w kolejnosci od pierwszego elementu do ostatniego\n");
                
                puts ("\nPonizej wyswietlona zostanie tablica w odwrotnej kolejnosci:\n");
                odwrotna = printBackwards(tablica1, 5);
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 2.%i\n", wybor);
                break;
                break;
            case 2:
                // rozpoczynam program nr 4.2 grudzien
                
                break;
            case 3:
                // rozpoczynam program nr 4.3 grudzien
                
                break;
            case 4:
                // rozpoczynam program nr 4.4 grudzien
                
                break;
            default:
                printf ("Podales bledna liczbe\n");
                printf ("Nic sie nie stalo. Przejdziesz do kolejnego pola wyboru :)\n");
                break;
                // teraz przechodze do mozliwosci wyboru czy chce ponownie uruchomic ktoras czesc programu (podprogramy)
                // czy zakonczyc calkiem dzialanie programu
        }
        printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
        while(1)
        {
            printf("\nCzy chcesz ponownie uruchomic program\n");
            printf("ktory poprzez odwolanie sie funkcji wlasnej poprzez STOS wykona opreacje ??\n");
            printf("Dla tak wpisz ''t'', dla nie wpisz ''n'': \n");
            getchar();
            scanf("%c", &kont);
            if(kont == 't')
            {
                break;
            }
            else if(kont == 'n')
            {
                wyjscie = 1;
                break;
            }
            else
            {
                printf("Podales bledna litere!\n");
            }
        }
        printf ("\nSzkoda ze nie chcesz sprawdzic jak dzialaja pozostale podprogramy programu nr 4\n");
        printf ("\nMoze nastepnym razem. Powodzenia !!!\n");
    }
}
