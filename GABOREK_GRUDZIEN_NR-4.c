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
// stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamic na nowy laricuch i go zwr6ci. (caty
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
#include <string.h>


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
    return twojaTablica;
}

/*************************************************************************************************
 Funkcja dla zadania nr 4.2 (punkt 4.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int *podajLiczby2(int rozmiarTablicy)
{
    int i;
    int *tablica1;
    int *tablica2;
    int *tablica3;
    int f;
    int elementyUjemne=0;
    int elementyDodatnie=0;
    int u;
    int k=0;
    int j;
    int z=0;
    int ll=0;
    int ff=0;
    tablica1=(int*) malloc(rozmiarTablicy*sizeof(int));
    for (i=0 ; i<rozmiarTablicy ; i++)
    {
        printf("Podaj %d element tablicy:\t", i+1);
        scanf("%d", tablica1++);
    }
    tablica1=tablica1-rozmiarTablicy;
    
    puts ("\nPonizej zostanie wyswietlona tablica elementow o podanych przez Ciebie wartosciach");
    puts ("w kolejnosci od elementu pierwszego do ostatniego\n");
    for (i=0 ; i<rozmiarTablicy ; i++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", i+1, *tablica1++);
    tablica1-=rozmiarTablicy;

    puts ("\nTeraz program sprawdzi ktore elementy tablicy maja wartosc ujemna\n");
    //funkcja sprawdza ktore elementy sa ujemne za pomoca petli oraz funkcji if else
    for (f=0 ; f<rozmiarTablicy ; f++)
    {
        if (tablica1[f]<0)
            elementyUjemne = elementyUjemne + 1;
        else
            elementyDodatnie = elementyDodatnie +1;
    }
    printf ("W twojej tablicy znajduje sie \t %i \t elementow o wartosci ujemnej", elementyUjemne);
    //funkcja alokuje pamiec dla nowej tablicy o rozmiarze "elementyUjemne"
    tablica2=(int*) malloc(elementyUjemne*sizeof(int));
    tablica3=(int*) malloc(elementyDodatnie*sizeof(int));
    for(u=0; u<rozmiarTablicy; u++)
    {
        if (tablica1[u]<0)
        {
            tablica2[ll] = tablica1[u];
            ll = ll + 1;
        }
        else
        {
            tablica3[ff] = tablica1[u];
            ff = ff + 1;
        }
    }
    
    puts ("\nTeraz wyswietli tablice nr 2 w ktorej sa zawarte elementy tablicy nr o wartosciach ujemnych\n");
    for (k=0 ; k<elementyUjemne ; k++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", k+1, tablica2[k]);
    
    free (tablica1);
    free (tablica2);
    free (tablica3);
    return 0;
}


/*************************************************************************************************
 Funkcja dla zadania nr 4.3 (punkt 4.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/


typedef enum {TRUE = 1, FALSE = 0} bool;

int *podajLiczby5(int rozmiarTablicy2)
{
    int i;
    int *tablica1a;
    tablica1a=(int*) malloc(rozmiarTablicy2*sizeof(int));
    for (i=0 ; i<rozmiarTablicy2 ; i++)
    {
        printf("Podaj %d element tablicy:\t", i+1);
        scanf("%d", tablica1a++);
    }
    tablica1a=tablica1a-rozmiarTablicy2;
    return tablica1a;
}

int *podajLiczby6(int rozmiarTablicy3)
{
    int i;
    int *tablica2a;
    tablica2a=(int*) malloc(rozmiarTablicy3*sizeof(int));
    for (i=0 ; i<rozmiarTablicy3 ; i++)
    {
        printf("Podaj %d element tablicy:\t", i+1);
        scanf("%d", tablica2a++);
    }
    tablica2a=tablica2a-rozmiarTablicy3;
    return tablica2a;
}



int AreArraysldentical(int s1, int *a1, int s2, int *a2)
{
    
    
    int p;
    int w;
    int u=0;
    int liczba=0;
    int zz;
    int w4;
    
    puts ("Twoja tablica nr 1 ma nastepujace elementy:");
    for (p=0 ; p<s1 ; p++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", p+1, a1[p]);
    puts ("\n \nTwoja tablica nr 2 ma nastepujace elementy:");
    for (w=0 ; w<s2 ; w++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", w+1, a2[w]);

    while ((a1[u] - a2[u])==0)
        u++;
    printf ("\n\nLiczba wspolnych elementow na tych samych indeksach obu tablic wynosi:\t %i \n", u);
    
    zz = (s1 + s2) - 2*u;
    
    if (zz == 0)
        w4 = 1;
    else
        w4 = 0;
    return w4;
}


/*************************************************************************************************
 Funkcja dla zadania nr 4.4 (punkt 4.4 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/


char *reverseString(char *s)
{
    char *str2;
    int w=0;
    int j=0;
    int k=0;
    while(s[w]!='\0')
        w = w+1;
 
    w-=1;
    str2 = (char*)malloc((w + 1) * sizeof(char));
    
    for(j=w; j>=0; j--)
    {
        str2[k]=s[j];
        ++k;
    }
    printf("\nTeraz zostanie wyswietlony string w funkcji pomocniczej:\t %s\n", str2);
    s=str2;
    str2[k-1]='\0';
    return str2;
}






/*************************************************************************************************
 Zadanie nr 1 (punkty 4.1, 4.2, 4.3, 4.4). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej

    int wybor;                      //zmienne dla wyboru programu - menu uzytkownika petle
    char kont;                      //zmienne dla wyboru programu - menu uzytkownika petle
    int wyjscie=0;                  //zmienne dla wyboru programu - menu uzytkownika petle

    int w;                          //zmienna dla podprogramu nr 4.1
    int odwrotna;                   //zmienna dla podprogramu nr 4.1
 
    int *twojaTablica;

    int mm;
    int hh;
    int ee;
    int ff;
    int j=0;
 
    int twojaTablica2;
    int tablica1a;
    int tablica2a;
    int *tablica1b;
    int *tablica2b;


    
    int porownanie;
    bool porownanie2;
    int rozmiar4;
    char result;
    bool porownanieWyrazow;

    
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
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
                break;
                
            case 2:
                // rozpoczynam program nr 4.2 grudzien
                puts ("Super wlasnie wybrales podprogram nr 4.2\n");
                puts ("Program program zaalokuje pamiec na ''n'' elementow pobranych od Ciebie");
                puts ("a nastepnie sprawdzi które elementy tablicy maja wartosc ujemna");
                puts ("i utworzy dla nich nowa tablice, po czym zwolni pamiec");
                puts ("Podaj rozmiar tablicy: \n");
                
                scanf ("%i", &mm);
                printf ("\nTwoja tablica ma \t %i \t elementow\n", mm);
                //pobieram wartosci tablica od uzytkownika za pomoca funkcji
                twojaTablica2=podajLiczby2(mm);
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
                break;
            case 3:
                // rozpoczynam program nr 4.3 grudzien
                puts ("Super wlasnie wybrales podprogram nr 4.3\n");
                puts ("Program program sprawdzi czy podane lancuchy znakow maja taka sama dlugosc");
                puts ("Jezeli lancuchy sie roznia to program zakonczy zadanie");
                puts ("natomiast jezeli maja taka sama to sprawdzi czy poszczegolne znaki sa takie sa");
                
                puts ("Podaj rozmiar pierwszej tablicy: \n");
                scanf ("%i", &mm);
                printf ("\nTwoja pierwsza tablica ma \t %i \t elementow\n", mm);
                tablica1b=podajLiczby5(mm);

                puts ("Podaj rozmiar drugiej tablicy: \n");
                scanf ("%i", &hh);
                printf ("\nTwoja tablica ma \t %i \t elementow\n", hh);
                tablica2b=podajLiczby6(hh);
                
                puts("\nTeraz program za pomoca funkcji ''boolAreArraysldentical'' porowna oba wyrazy\n");
                porownanieWyrazow = AreArraysldentical(mm, tablica1b, hh, tablica2b);
      
                porownanie = porownanieWyrazow == 0 ? FALSE : TRUE;
                if ( porownanie == TRUE )
                    puts ("\nSuper! Obydwie tablice tablice liczbowe sa takie same\n");
                else
                    puts("\nNiestety tablice sie roznia. Moga miec taka sama liczbe elementow, jednak moga miec elementy inne");
                
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
                break;
            case 4:
                // rozpoczynam program nr 4.4 grudzien
                puts ("Super wlasnie wybrales podprogram nr 4.4\n");
                puts ("Program program zaalokuje pamiec na podany przez Ciebie string nastepnie");
                puts ("zaalokuje ponownie na odwrocony string poczym rezultat zostanie przechwycony w ponizszej funkcji glownej");
                puts ("Podaj ile maksymalnie znakow moze zawierac string:\n");
                
                scanf ("%i", &rozmiar4);
                char *str;
                str = (char*) malloc(rozmiar4*sizeof(char));
            
                printf("Wprowadz wyraz do odwrocenia:\n");
                scanf("%s", str);
                printf("\nWprowadzony wyraz ktory bedzie odwrocony to:\t %s \n", str);
                
                result = reverseString(str);
                
                puts ("\nTeraz zostanie wyswietlony string w funkcji glownej po przekazaniu");
                printf("Napis odwrocony to:\t %s", result);
                
                free (str);
                free (result);
                
                printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 4.%i\n", wybor);
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
        printf ("\nSzkoda ze nie chcesz sprawdzic jak dzialaja pozostale podprogramy programu nr 4\n");
        printf ("\nMoze nastepnym razem. Powodzenia !!!\n");
    }
}

