//
//  GABOREK_GRUDZIEN_NR-1.c
//  Gaborek_grudzien_-_zadanie_nr_1
//
//  Created by Paweł Gaborek on 05/12/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//

// Zadania:
// 1.1 Utworzyc 5-cio elementowq tablic typu int. Pobrac ad uzytkownika 5 element6w i dodac je do tablicy.
// Nastpnie wyswietlic najwikszq liczb z tablicy (algorytm do samodzielnej implementacji).
// 1.2 Wyswietlic w ptli tablice z zadania 1.1 ad poczqtku i ad konca (dwie ptle)
// 1.3 Napisac algorytm sprawdzajqcy, czy tablica jest posortowana w kolejnosci niemalejqcej
// Tablice mozna przekazywac do funkcji poprzez WSKAZN IK. Poniewaz nazwa tablicy jest tak naprawd adresem
// pierwszego elementu, mozliwe jest przekazanie tego adresu do funkcji za pomocq operatora * . Uwaga -
// w jezyku C i C++ tablica ,,nie wie" nic o swoim rozmiarze! Wiadomo tylko, gdzie znajduje si jej pierwszy
// element. Dlatego
// podczas przekazywania tablicy do funkcji nalezy kazdorazowo przekazywac tez jej rozmiar Uako drugi
// parametr). Przyklad:

//  void printArray (int *a, int s)
//  {
//      int i;
//      for(i=O ;i<s;i++)
//      {
//          printf(,,%d", a[i]); // lub printf(,,%d", *(a+i));
//      }
//  }
//  int main()
//  {
//      int tab[3];
//      *tab = 5;
//      *(tab+1) = 1O;
//      tab[2) = 15;
//          printArray(tab, 3);
//  return 0;

#include <stdio.h>
#include <stdlib.h>


/*************************************************************************************************
 Funkcja dla zadania nr 1.1 (punkt 1.1 - grudzien), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/
/*
int wyszukiwanie_najwiekszej_wartosci (int tab11[0], int tab11[2], int tab11[3])
{
    int i;
    int maksimum11;
    maksimum11=tab11[0];
    for (i=0; i<=4; i++)
    {
        if (maksimum11 < tab11[i])
        {
            maksimum11 = tab11[i];
        }
    }
return maksimum11;
}
*/
/*************************************************************************************************
 Funkcja dla zadania nr 1.2 (punkt 1.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/
/*
int funkcja12 (int )
{
    
    return ;
}
*/
/*************************************************************************************************
 Funkcja dla zadania nr 1.3 (punkt 1.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/
/*
int funkcja12 (int )
{
    
    return ;
}

*/

/*************************************************************************************************
 Zadanie nr 1 (punkty 1.1, 1.2, 1.3). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej
   
    int wybor;                          //zmienna dla menu uzytkownika (petle)
    int wyjscie=0;                      //zmienna dla menu uzytkownika (petle)
    char kont;                          //zmienna dla menu uzytkownika (petle)

    int tablica1[5];                    //zmienna dla zad 1.1, 1.2, 1.3
    int i;                              //zmienna dla zad 1.1, 1.2, 1.3 petla powtorzen
    int maksimum;                       //zmienna dla zad 1.1
    
    
    while(wyjscie == 0)
    {
        printf ("\nMasz teraz mozliwosc wyboru ktora czesc programu chcesz uruchomic\n");
        printf ("Mozesz wybrac podprogram nr 1.1, 1.2 badz 1.3\n");
        printf ("Aby uruchomic program nr: \n");
        printf ("\n1.1 wybierz ''1'' \n");
        printf ("\n1.2 wybierz ''2'' \n");
        printf ("\n1.3 wybierz ''3'' \n");
        printf ("\nPo wprowadzeniu odpowiedniej liczby potwierdz klawiszem ''ENTER''\n");
        scanf ("%i", &wybor);
        switch (wybor)
        {
            case 1:
                // rozpoczynam program nr 1.1 grudzien
                puts ("Super, wlasnie wybrales podprogram nr 1.1\n");
                puts ("Teraz bedziesz mogl wprowadzic kilka wartosci dla tablicy piecio elementowej\n");
                puts ("Po wprowadzeniu w/w liczb zostanie wyswietlona liczba najwieksza\n");
                puts ("Podaj prosze po kolei wartosci dla poszczegolnych elementow tablicy\n");
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
                //powyzej wprowadzilem tablice liczb. Bez funkcji malloc poniewaz w zadaniu zostala z gory okreslona liczba. Nie wprowadzalem liczby za pomoca petli ponizej opcja z uzyciem petli:
                //for (1=0 ; i<5 ; I++)
                //      printf ("Element nr %i:\t", i+1);
                //      scanf ("%i\n", &tablica1[i]);
                
                puts ("\nGratulacje wprowadziles piec liczb do tablicy");
                puts ("Teraz zostanie wyswietlona liczba po najwiekszej wartosci w tablicy");
                //ponizej algorytm porownuje pokolei aktualnie maks liczbe z kolejnym elementem tablicy
                //w razie niespelnienia warunku przyjmuje nowa wartosc maks
                maksimum=tablica1[0];
                for (i=0; i<5; i++)
                {
                    if (maksimum < tablica1[i])
                    {
                        maksimum = tablica1[i];
                    }
                }
                printf ("Liczba o najwiekszej wartosci to: %i\n", maksimum);
                break;
            case 2:
                // rozpoczynam program nr 1.2 grudzien
                {
                    puts ("Super wlasnie wybrales podprogram nr 1.2\n");
                    puts ("Program wyswietla liczby w kolejnosci wedlug wprowadzenia do tablicy\n");
                    puts ("Najpierw musisz wprowadzić pieć kolejnych liczb\n");
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
                    //za pomoca petli program wyswietla po kolei tablice w dwoch kolejnosciach
                    puts ("\nPonizej wyswietlono wprowadzona tablice liczb w kolejnosci od elementu pierwszego do piatego\n");
                    for ( int i =0; i <= 4; i++)
                        printf ("Element %i : %d\t", i+1, tablica1[i]);
                    puts ("\nPonizej wyswietlono wprowadzona tablice liczb w kolejnosci od ostatniego elementu pierwszego do pierwszego\n");
                    for ( int i =0; i <= 4; i++)
                        printf ("Element %i : %d\t", 5-i, tablica1[4-i]);
                    puts ("\nSuper !!! Wlasnie wyswietliles liczby wprowadzone do tablicy");
                }
                break;
            case 3:
                // rozpoczynam program nr 1.3 grudzien
                puts ("Super wlasnie wybrales podprogram nr 1.3\n");
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
                //ponizej za pomoca petli sprawdzam czy kazdy po kolei element jeste wiekszy od poprzedniego
                puts ("\nTeraz program nr 1.3 sprawdzi czy tablica jest posortowana niemalejaco (rosnaco)\n");
                for (i=0; i<=4; i++)
                {
                    if (tablica1[i] < tablica1[i+1])
                    {
                        printf ("OK\t");
                    }
                    else
                    {
                        printf ("BLAD\t");
                    }
                }
                puts ("\nJezeli powyzej w wierszu widzisz piec slow ''OK''");
                puts ("To znaczy ze twoja tablica jest posortowana");
                puts ("Jezeli widzisz choc jedno slowo ''BLAD''");
                puts ("Przykro mi, ale tablica nie jest posortowana");
            default:
                puts ("Podales bledna liczbe\n");
                puts ("Nic sie nie stalo. Przejdziesz do kolejnego pola wyboru :)\n");
                break;
                // teraz przechodze do mozliwosci wyboru czy chce ponownie uruchomic ktoras czesc programu (podprogramy)
                // czy zakonczyc calkiem dzialanie programu
        }
        printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 1.%i\n", wybor);
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
        printf ("\nSzkoda ze nie chcesz sprawdzic jak dzialaja pozostale podprogramy programu nr 1 - grudzien\n");
        printf ("\nMoze nastepnym razem. Powodzenia !!!\n");
        }
    }


