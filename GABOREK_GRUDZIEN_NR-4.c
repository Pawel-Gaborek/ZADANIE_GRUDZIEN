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
    return *twojaTablica;
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

    for(u=0; u<rozmiarTablicy; u++)
    {
        if (*tablica1++<0)
            *tablica2 = *tablica1++;
    }
    
    puts ("\nTeraz wyswietli tablice nr 2 w ktorej sa zawarte elementy tablicy nr o wartosciach ujemnych\n");
    for (k=0 ; k<elementyUjemne ; k++)
        printf("\nElement nr: %i tablicy wynosi:\t %d", k+1, tablica2[k]);
    tablica2-=elementyUjemne;
    free (tablica1);
    free (tablica2);
    return 0;
}


/*************************************************************************************************
 Funkcja dla zadania nr 4.3 (punkt 4.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/


typedef enum {TRUE = 1, FALSE = 0} bool;


//ponizej tworze funkcje zliczajaca ilosc znakow w lancuchu. Liczba powtorzen petli do napotkania znaku "\0" jest
//liczba znakow w lancuchu.
int getLengh(char *str, int s)
{
    int j;
    int w;
    w=0;
    for(j=0; str[j]!='\0' ; j++)
    {
        w=j+1;
    }
    return w;
}

int boolAreArraysldentical(int *a1, int s1, int *a2, int s2)
{
    bool porownanie;
    bool w;
    int i;
    puts("\nTeraz funkcja porowna twoje wyrazy\n");
    
    if ( s1 = s2 )
    {
        puts ("Super! Wprowadzone przez ciebie wyrazy maja taka sama liczbe znakow");
        puts ("Teraz program sprawdzi czy poszczegolne znaki sa takie same");
        {
            while(a1[i] == a2[i])
                if(a1[i++] == '\0')
                    return 0;
            return(a1[i] - a2[i]);
        }
    
        if ((a1[i] - a2[i])==0)
            puts ("Gratulacje! Wszystkie znaki sa takie same na poszczegolnych elementach");
        else
            puts ("Przykro mi, jednak poszczegolne znaki sie roznia");
    }
    else
        puts ("Przykro mi, jednak wprowadzone przez Ciebie wyrazy sie roznia");
    return 0;
}

char *znaki(char *ciag1)
{
    char w;
    int j=0;
    
    do {w=getchar() ; ciag1[j]=w ; j++;}
        while(w!='\n');
    ciag1[j-1]='\0';
    return ciag1;
}

//ponizej jest funkcja wprowadzania lancucha znakow
int wyrazy(int m)
{
    int iloscznakow1;
    int iloscznakow2;
    int porownanieWyrazow;
    int i=0;
    int j=0;
    char w;
    char ciag1[100];
    char ciag2[100];
    
    puts("Teraz rozpocznij wprowadzanie znakow dla pierwszego wyrazu:\n");
    
    do {w=getchar() ; ciag1[j]=w ; j++;}
        while(w!='\n');
    ciag1[j-1]='\0';
  
    
    
    puts("\nPonizej zostanie wyswietlony twoj pierwszy wyraz:\n");
    printf ("%s\n", ciag1);
    puts("\nSuper! Wlasnie wyswietlono pierwszy wyraz\n");
    printf ("Teraz funkcja przeliczy ilosc znakow dla pierwszego wyrazu");
    iloscznakow1 = getLengh(ciag1, m);
    printf("Twoj pierwszy wyraz sklada sie z %d znakow\n", iloscznakow1);
    
    puts("Teraz rozpocznij wprowadzanie znakow dla drugiego wyrazu:\n");
    do {w=getchar() ; ciag2[i]=w ; i++;}
        while(w!='\n');
    ciag2[i-1]='\0';
    puts("\nPonizej zostanie wyswietlony twoj drugi wyraz:\n");
    printf ("%s\n", ciag2);
    puts("\nSuper! Wlasnie wyswietlono drugi wyraz\n");
    printf("Teraz funkcja przeliczy ilosc znakow dla drugiego wyrazu");
    iloscznakow2 = getLengh(ciag2, m);
    printf("Twoj pierwszy wyraz sklada sie z %d znakow\n", iloscznakow2);
    
    puts("Teraz program za pomoca funkcji ''boolAreArraysldentical'' porowna oba wyrazy\n");

    
    porownanieWyrazow = boolAreArraysldentical(ciag1, iloscznakow1, ciag2, iloscznakow2);
    
    return 0;
}




/*************************************************************************************************
 Funkcja dla zadania nr 4.4 (punkt 4.4 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/


char *reverseString(char *s)
{
    char *str2;
    //char tablica[MAX];
    //zmienna zliczaj¹ca litery
    char result;
    int w=0;
    //zliczam litery
    while(s[w]!='\0')
        w = w+1;
 
    w-=1;
    str2 = (char*)malloc((w + 1) * sizeof(char));
    int j=0, k=0;
    for(j=w; j>=0; j--)
    {
        str2[k]=s[j];
        ++k;
    }
    printf("%s\n", str2);
    str2[k-1]='\0';
    return *str2;
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
 
    int twojaTablica2;

    int mk;
    
    int porownanie;
    int rozmiar4;
    char odwrocony;
    char result;
    //char str[rozmiar4];
    char str;
    

    int l=0;
    char z;
    int y;
    int jj=0;
    char xx;
    int ii;
    char *str3;
    
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

                porownanie = wyrazy(100);
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
                puts ("Ponizej zostanie wyswietlony odwrocony napis ktory wprowadziles:\n");
                printf("%s", result);
                
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
