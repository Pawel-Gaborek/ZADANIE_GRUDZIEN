//
//  GABOREK_GRUDZIEN_NR-2.c
//  Gaborek_grudzien_-_zadanie_nr_2
//
//  Created by Paweł Gaborek on 05/12/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//


// Zadania:
// 2.1 Utworzyc osobnq metod bool lsSorted(i nt *, int) realizujqcq zadanie 1.3 (UWAGA - w j zyku C niedostpny
// jest typ bool z wartosciami true i false, zamiast niego nalezy uzyc int iwartosci 1 i 0)
// 2.2 Utworzyc metod void printBackwards(int *a, int s) sluzqcq do wypisan ia tablicy OD KONCA
// 2.3 Utworzyc metod printDots( int *a, int s) wyswietlajqcq w nowych liniach tyle kropek, ile znajduje si w
// danym elemencie tablicy. Dia przykladu, dla tablicy:

// int tab[] = {3,2,5,4}; II tworzenie tablicy za pomocq listy inicjalizacyjnej . Nie jest wymagane podanie
// rozmiaru tablicy, kompilator ,,zna" jq po ilosci parametr6w, wic jest ona znana w momencie kompilacji

// Wynik powinien bye nastpujqcy:

// 2.4 Utworzyc metod int Sum(int *a, int s) liczqcq sum element6w tablicy.
// 2.5 Zaimplementowac algorytm sortowania bqbelkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej
// funkcji). Algorytm powinien posortowac dowolnie dui.q tablic w kolejnosci niemalejqcej.
// tancuchy znak6w (ang. string) - jest to tablica element6w char. Dia przyk/adu: char str[] = "Hello World!";
// printf("%s", str);
// M6wimy, ze str jestlancuchem znak6w, bqdz stringiem. Stringi majq jednq charakterystycznq r6znic w stosunku
// do tablic innych typ6w - konczq si  pojedynczym znakiem \0 , kt6ry oznacza po prostu koniec stringa.
// Dlatego dla stringa ,,Ala" tak naprawd wymagane Sq 4 znaki:

//  char  ala[4]; ala[O]='A';
//  ala(1]='L';
//      ala[2]='A';
//      ala[3]='\0';
//      printf("%s", ala);
// Z powyzszego powodu przy przekazywaniu stringa do funkcji, NIE TRZEBA przekazywac jego rozmiaru
// programista jest w stanie samemu okreslic koniec tablicy po lokalizacji znaku \0. Nalezy tez pami tac, aby
// alokujqc pamic na string, zawsze utworzyc o 1 element wiEi)cej.



#include <stdio.h>
#include <stdlib.h>

/*************************************************************************************************
 Funkcja dla zadania nr 2.1 (punkt 2.1 - grudzien), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

typedef enum {TRUE = 1, FALSE = 0} bool;

/*************************************************************************************************
 Funkcja dla zadania nr 2.2 (punkt 2.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
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
 Funkcja dla zadania nr 2.3 (punkt 2.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int printDots(int *a, int s)
{
    int j;
    int i;
    for(j=0; j<s; j++)
    {
        printf("\n");
        for(i=0; i<a[j]; i++)
        {
            printf(".");
        }
    }
    return *a, s;
}

/*************************************************************************************************
 Funkcja dla zadania nr 2.4 (punkt 2.4 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int sum(int *a, int s)
{
    int j;
    int w;
    w=0;
    for(j=0; j<s; j++)
    {
        w=w+a[j];
    }
    return w;
}

/*************************************************************************************************
 Funkcja dla zadania nr 2.5 (punkt 2.5 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

// dla sortowania babelkowego nie tworze dodatkowej funkcji z godnie z wytycznymi zadania

/*************************************************************************************************
 Zadanie nr 2 (punkty 2.1, 2.2, 2.3, 2.4, 2.5). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{

    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej
  
    int wybor;
    char kont;
    int tablica1[5];
    int wyjscie=0;
    int odwrotna;
    int kropki;
    int suma;
    int l;
    int h;
    int zmienna;
    int x;
    bool porownanie;
 
    
    while(wyjscie == 0)
    {
        printf ("\nMasz teraz mozliwosc wyboru ktora czesc programu chcesz uruchomic\n");
        printf ("Mozesz wybrac podprogram nr 2.1, 2.2, 2.3, 2.4 badz 2.5\n");
        printf ("Aby uruchomic program nr: \n");
        printf ("\n2.1 wybierz ''1'' \n");
        printf ("\n2.2 wybierz ''2'' \n");
        printf ("\n2.3 wybierz ''3'' \n");
        printf ("\n2.4 wybierz ''4'' \n");
        printf ("\n2.5 wybierz ''5'' \n");
        printf ("Po wprowadzeniu odpowiedniej liczby potwierdz klawiszem ''ENTER''\n");
        scanf ("%i", &wybor);
        switch (wybor)
        {
            case 1:
                // rozpoczynam program nr 2.1 grudzien
                puts ("Super wlasnie wybrales podprogram nr 2.1\n");
                puts ("Program sprawdzi czy wprowadzone wartosci do tablicy\n");
                puts ("sa posortowane kolejnosci niemalejacej (rosnacej)\n");
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
                puts("Teraz program sprawdzi czy w podanym przez Ciebie wyrazie wystepuja cyfry\n");
                for(x=0 ; x<=4 ; x++)
                {
                    porownanie = (tablica1[x] <tablica1[x+1]) == 0 ? FALSE : TRUE;
                    if ( porownanie == TRUE )
                        printf("OK");
                    else
                        printf("Niestety twoja tablica co najmniej w jednym miejscu jest nieposortowana\n");
                }
                printf("Jezeli powyzej nie widzisz komunikatu o nieposortowaniu to GRATULACJE ! :) ");
                printf("Twoja tablica jest posortowana niemalejaco");
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 2.%i\n", wybor);
                break;
            case 2:
                // rozpoczynam program nr 2.2 grudzien
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
            case 3:
                // rozpoczynam program nr 2.3 grudzien
                puts ("Super wlasnie wybrales podprogram nr 2.3\n");
                puts ("Program wyswietli w poszczegolnych wierszach ilosc kropek odpowiadajacej wartosci poszczegolnego elementu tablicy\n");
                puts ("Jednak najpierw musisz podac wartosci poszczegolnych elementow tablicy\n");
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
                
                puts ("\nPonizej zostanie wyswietlonych piec wierszy kropek, liczba kropek w wierszu odpowiada wartosci elementu tablicy:\n");
                kropki = printDots(tablica1, 5);
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 2.%i\n", wybor);
                break;
            case 4:
                // rozpoczynam program nr 2.4 grudzien
                puts ("Super wlasnie wybrales podprogram nr 2.4\n");
                puts ("Program wyswietli sume wartosci poszczegolnych wprowadzonych przez Ciebie elementow tablicy\n");
                puts ("Jednak najpierw musisz podac wartosci poszczegolnych elementow tablicy\n");
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
                
                puts ("\nPonizej zostanie wyswietlona suma wartosci wszystkich elementow tablicy\n");
                suma = sum(tablica1, 5);
                printf("Suma wartosci wszystkich elementow tablicy wynosi: %d", suma);
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 2.%i\n", wybor);
                break;
            case 5:
                // rozpoczynam program nr 2.5 grudzien
                puts ("Super wlasnie wybrales podprogram nr 2.5\n");
                puts ("Program posortuje niemalejaco wartosci poszegilnych elementow tablicy piecio elementowej\n");
                puts ("Jednak najpierw musisz podac wartosci poszczegolnych elementow tablicy\n");
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
                
                puts ("Teraz algorytm/kod sortowania babelkowego uporzadkuje tablice\n");
                for (l = 0; l<5; l++)
                {
                    for (h=0; h<5-l; h++)
                    {
                        if (tablica1[h] > tablica1[h+1])
                        {
                            zmienna = tablica1[h+1];
                            tablica1[h+1] = tablica1[h];
                            tablica1[h] = zmienna;
                        }
                    }
                }
                
                puts ("Oto wynik sortowania tablicy\n");
                puts ("Ponizej zostanie wyswietlony wynik \n");
                for ( int i =0; i <= 4; i++)
                    printf ("Element %i : %d\t", i+1, tablica1[i]);
                puts ("\nPowyzej wyswietlono posortowana tablice\n");
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 2.%i\n", wybor);
                break;
            default:
                printf ("Podales bledna liczbe\n");
                printf ("Nic sie nie stalo. Przejdziesz do kolejnego pola wyboru :)\n");
                break;
                // teraz przechodze do mozliwosci wyboru czy chce ponownie uruchomic ktoras czesc programu (podprogramy)
                // czy zakonczyc calkiem dzialanie programu
        }
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
        printf ("\nSzkoda ze nie chcesz sprawdzic jak dzialaja pozostale podprogramy programu nr 3\n");
        printf ("\nMoze nastepnym razem. Powodzenia !!!\n");
    }
}
