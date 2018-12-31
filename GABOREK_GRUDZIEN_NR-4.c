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

int *podajLiczby(int rozmiarTablicy)
{
    int i;
    int *tablica1;
    tablica1=(int*) malloc(rozmiarTablicy*sizeof(int));
    for (i=0 ; i<rozmiarTablicy ; i++)
    {
        printf("Podaj %d element tablicy:\t", i+1);
        scanf("%d", tablica1++);
    }
    tablica1=tablica1-rozmiarTablicy;
    return tablica1;
}


int printBackwards(int s, int *twojaTablica)
{
    int p;
    for (p=0 ; p<s ; p++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", s-p, twojaTablica[s-p-1]);
    return *twojaTablica;
}

/*************************************************************************************************
 Funkcja dla zadania nr 4.2 (punkt 4.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/
/*
int funkcja42 (int )
{
    
    return pustalinia;
}
*/
/*************************************************************************************************
 Funkcja dla zadania nr 4.3 (punkt 4.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/
/*
int funkcja43 (int )
{
    
    return pustalinia;
}3
*/


/*************************************************************************************************
 Zadanie nr 1 (punkty 4.1, 4.2, 4.3, 4.4). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej

    int wybor;                      //zmienne dla wyboru programu - menu uzytkownika petle
    char kont;                      //zmienne dla wyboru programu - menu uzytkownika petle
    int wyjscie=0;                  //zmienne dla wyboru programu - menu uzytkownika petle
    int e;                          //zmienna dla podprogramu nr 4.1
    int w;                          //zmienna dla podprogramu nr 4.1
    int odwrotna;                   //zmienna dla podprogramu nr 4.1
    int x;                           //zmienna dla podprogramu nr 4.1
    int rozmiar2;
    int *tablica6;
    int *twojaTablica;
    int i;
    int n=5;
    int mm;
    
    while(wyjscie == 0)
    {
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
                puts ("Super wlasnie wybrales podprogram nr 4.1\n");
                puts ("Program program zaalokuje pamiec na ''n'' elementow pobranych od Ciebie");
                puts ("a nastepnie wypisze tablice w odwrotnej kolejnosci metoda ''printBackwards''");
                puts ("Podaj rozmiar tablicy: \n");
                
                scanf ("%i", &mm);
                printf ("\nTwoja tablica ma \t %i \t elementow\n", mm);

                twojaTablica=podajLiczby(mm);
                puts ("\nPonizej zostanie wyswietlona tablica elementow o podanych przez Ciebie wartosciach:");
                for (w=0 ; w<mm ; w++)
                    printf("\nElement nr: %i tablicy wynosi:\t %d", w+1, *twojaTablica++);
                twojaTablica-=mm;
                puts ("\nPonizej zostanie wyswietlona Twoja tablica w odwrotnej kolejnosci:\n");
                odwrotna=printBackwards(mm, twojaTablica);
                
                free(twojaTablica);
                getchar();
                
                
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
                
                break;
                
            case 2:
                // rozpoczynam program nr 4.2 grudzien
                /*puts ("Super wlasnie wybrales podprogram nr 4.1\n");
                puts ("Program program zaalokuje pamiec na ''n'' elementow pobranych od Ciebie");
                puts ("a nastepnie wypisze tablice w odwrotnej kolejnosci metoda ''printBackwards''");
                puts ("Podaj rozmiar tablicy: \n");
                scanf ("i%", mm);
                
                
                
                
                twojaTablica=wczyt_tab(mm);
                puts ("Ponizej zostanie wyswietlona tablica elementow o podanych przez Ciebie wartosciach:\n");
                for (w=0 ; w<mm ; w++)
                    printf("\n Element[%d]=%d", w, *twojaTablica++);
                twojaTablica-=5;
                
                odwrotna=printBackwards(pa);
                
                free(twojaTablica);
                getchar();*/
                break;
            case 3:
                // rozpoczynam program nr 4.3 grudzien
                puts ("\nPowyzej wyswietlono wprowadzona tablice liczb w kolejnosci od pierwszego elementu do ostatniego\n");
                break;
            case 4:
                // rozpoczynam program nr 4.4 grudzien
                puts ("\nPowyzej wyswietlono wprowadzona tablice liczb w kolejnosci od pierwszego elementu do ostatniego\n");
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
