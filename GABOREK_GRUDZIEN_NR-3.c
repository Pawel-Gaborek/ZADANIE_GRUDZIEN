//
//  GABOREK_GRUDZIEN_NR-3.c
//  Gaborek_grudzien_-_zadanie_nr_3
//
//  Created by Paweł Gaborek on 05/12/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//

// Zadania:
// 3.1 Napisac metodEi) int getlength(char *str) , w kt6rej WtASNORECZNI E (nie wolno korzystac z metody strlen() )
// przeliczony zostanie rozmiarlaricucha (bez null-terminatora). Dia przykladu dla ,,Hello!" wynik powinien wynosic
// 6.
// 3.2 Napisac metoda) void Reverse (char *str) , kt6ra wypisze laricuch znak6w od korica (zakaz uzywania strlen, mozna
// uzyc metodEi) z zadania 3.1.)
// 3.3 Napisac metodEi) bool containsDigits(char * str), kt6ra zwr6ci informacjEi) , czy w danym stringu znajduje
// siEi) jakakolwiek cyfra. Dia przykladu : ,,asdfgzxcv" -> false, ,,asdf5asdf' -> true
// 3.4 Pobrac od uzytkownikalaricuch znak6w (dowolna metoda). Przekazac go do kazdej z metod z 3. czEi)sci zadari.
// W przypadku, gdy chcemy utworzyc tablicEi) o rozmiarze nieznanym w momencie kompilacji, nalezy uzyc w C funkcji
// malloc (z bilbioteki stdlib.h). Metoda ta przyjmuje liczbEi) BAJT6W, na ile ma zaalokowac pamiEi)c oraz zwraca
// ADRES pierwszego  elementu.

// Aby zaalokowac pamiEi)6 na n element6w typu int, musimy znac rozmiar pojedynczego elementu w bajtach. Alokacja
// zajmuje (rozmiar_tablicy * rozmiar_pojednczego_elementu_w_bajtach)  bajt6w. Do pobrania rozmiaru jednego
// elementu sluzy metoda sizeof(int) - zwraca ona rozmiar int (4 bajty). Dia tablicy 5-cio elementowej tak
// naprawdEi) potrzebne jest 20 bajt6w (5 element6w * 4 bajty).
// PamiEi)6 jest tworzona podczas dziatania programu (runtime), a nie w momencie kompilacji Uak w przypadku tablic
// o znanym rozmiarze). Dlatego tez nalezy po zakoriczeniu pracy z programem takq pamiEi)c wyczyscic (metoda free()
// z stdlib.h). W innym przypadku mozemy miec sytuacjEi) zwanq wyciekiem pamiEi)ci (ang. memory leak), kiedy po
// zakor'lczeniu programu pamiEi)c dalej jest zaalokowana, przez co jest niedostEi)pna dla innych proces6w, az do
// restartu komputera. W skrajnych przypadkach dlugotrwaty wyciek pamiEi)ci moze doprowadzic do sytuacji, gdzie
// restart jest wymagany, poniewaz zaden proces nie ma mozliwosci alokacji pamiEi)ci (zdarza siEi) to gl6wnie na
// serwerach z malq ilosciq pamiEi)ci - kiedy dtugotrwate wyciekanie pamiEi)ci, po kilka kilobajt6w na raz, moze w
// skoriczonym czasie ,,zapchac" calq pamiEi)c RAM).
// Przyktad zastosowania metody malloc do alokacji pamiEi)ci: int * tab;II tworzymy pusty wska:Znik
//  int size;
//  scanf("%d", &size);
//  tab = (int *) malloc(sizeof(int) * size); 114 bajty * size podany przez uzytkownika. PamiEi)6 jest tworzona, a
//  adres pierwszego elementu przypisany jest do wska:Znika tab

//  jakies dzialanie na tablicy

//  free(tab); II na koniec programu ZWALNIAMY pamiEi)C zaalokowanq przez malloc




#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*************************************************************************************************
 Funkcja dla zadania nr 3.1 (punkt 3.1 - grudzien), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

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

//ponizej tworze kolejna funkcje ktora pobiera od uzytkownika lancuch znakow a nastepnie przywoluje funkcje
//zliczajaca ilosc znakow

int wyraz(int m)
{
    puts("Moze to byc np przyklad miejsce twoich ulubionych wakacji");
    puts("Pamietaj by po wprowadzeniu nazwy miejsca potwierdzic klawiszem ''ENTER''");
    puts("Pamietaj takze ze maksymalna ilosc znakow moze wyniesc sto");
    puts("Teraz rozpocznij wprowadzanie znakow:\n");
    int iloscznakow;
    int i=0;
    char w;
    char ciag1['m'];
    do {w=getchar() ; ciag1[i]=w ; i++;}
        while(w!='\n');
    ciag1[i-1]='\0';
    puts("\nPonizej zostanie wyswietlona nazwa twojego ulubionego miejsca wakacji :) \n");
    printf ("%s\n", ciag1);
    puts("\nSuper! Wlasnie wyswietlono nazwe ulubionego miejsca wakacji\n");
    puts("Teraz program przeliczy za pomoca funkcji ''getLengh'' dlugosc wprowadzonej nazwy\n");
    iloscznakow = getLengh(ciag1, 100);
    printf("Twoja tablica sklada sie z %d znakow\n", iloscznakow);
    return 0;
}

/*************************************************************************************************
 Funkcja dla zadania nr 3.2 (punkt 3.2 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int voidReverse(char *str2, int oz)
{
    int j;
    int w;
    w=0;
    for(j=0 ; j<oz ; j++)
    {
        printf("%c", str2[(oz-1) - j]);
    }
    printf("\n");
    return w;
}

/*************************************************************************************************
 Funkcja dla zadania nr 3.3 (punkt 3.3 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

//ponizej definiuje wlasna definicje typu enum dla prawdy i falszu (bool przy uzyciu cyfr 0 badz 1)

typedef enum {TRUE = 1, FALSE = 0} bool;

/*************************************************************************************************
 Funkcja dla zadania nr 3.4 (punkt 3.4 - grudzien), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

//funkcja wprowadzania zostala uwzgledniona np w zadaniu 3.1. Wykonalem funkcje w funkcji po czym sie do
//niej odwolalem w funkcji glownej main.

/*************************************************************************************************
 Zadanie nr 3 (punkty 3.1, 3.2, 3.3, 3.4). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej
    
    char wynikWyrazu;
    char odwrotnaKolejnosc;
    int x;
    bool dig;

    
    // rozpoczynam program nr 3.1 grudzien
    puts ("Super wlasnie wybrales podprogram nr 3.1\n");
    puts("Wprowadz napis celem przeliczenia ilosci znakow");
    wynikWyrazu = wyraz(100);
    printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 3.1\n");
    
    // rozpoczynam program nr 3.2 grudzien
    puts("\nSuper wlasnie wybrales podprogram nr 3.2\n");
    puts("Wprowadz napis celem wypisania ciagu znakow od tylu");
    puts("Jednak najpierw musisz podac odpowiednie miejsce");
    puts("Moze to byc np przyklad miejsce twoich ulubionych wakacji");
    puts("Pamietaj by po wprowadzeniu nazwy miejsca potwierdzic klawiszem ''ENTER''");
    puts("Pamietaj takze ze maksymalna ilosc znakow moze wyniesc sto");
    puts("Teraz rozpocznij wprowadzanie znakow:\n");
    int j=0;
    char m;
    char ciag2['m'];
    do {m=getchar() ; ciag2[j]=m ; j++;}
        while(m!='\n');
    ciag2[j-1]='\0';
    puts("\nPonizej zostanie wyswietlona nazwa twojego ulubionego miejsca wakacji :) \n");
    printf ("%s\n", ciag2);
    puts("\nA teraz ta sama nazwa zostanie wyswietlona w kolejnosci odwrotnej\n");
    odwrotnaKolejnosc = voidReverse(ciag2, j);
    puts("\nSuper! Wlasnie wyswietlono nazwe ulubionego miejsca wakacji w odwrotnej kolejnosci\n");
    printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 3.2\n");

    // rozpoczynam program nr 3.3 grudzien
    puts("\nSuper wlasnie wybrales podprogram nr 3.3\n");
    puts("Program sprawdzi czy w wyrazie / ciagu znakow wystepuja cyfry");
    puts("Teraz rozpocznij wprowadzanie znakow:");
    int w=0;
    char h;
    char ciag3['w'];
    do {h=getchar() ; ciag3[w]=h ; w++;}
        while(h!='\n');
    ciag3[w-1]='\0';
    puts("\nPonizej zostanie wyswietlony ciag znakow wprowadzonych przez Ciebie :) \n");
    printf ("%s\n", ciag3);
    puts("Teraz program sprawdzi czy w podanym przez Ciebie wyrazie wystepuja cyfry\n");
    for(x=0 ; x<w ; x++)
    {
        dig = isdigit(ciag3[x]) == 0 ? FALSE : TRUE;
        if ( dig == TRUE )
            printf("\nW podanym przez Ciebie ciagu znakow niestety zostala podana cyfra\n");
        else
            printf("");
    }
    printf("\nJezeli powyzej nie widzisz komunikatu o cyfrze w ciagu znakow oznaczo to w lancuchu sa same litery :)\n");
    printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 3.3\n");
    
    // rozpoczynam program nr 3.4 grudzien
    puts("\nSuper wlasnie wybrales podprogram nr 3.4\n");
    puts("Pobranie lancucha znakow od uzytkownika uwzglednilem juz wczesniej");
    puts("Przy ponownym uruchomieniu programu mozna jeszcze raz do kazdego zadania wprowadzic lancuchy znakow");
    printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 3.4\n");
}
