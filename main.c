/*
1. Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!
2. Kérjünk be egy pozitív számot! Rossz adat esetében ismételjük meg a beolvasást!
3. Folytatás: olvassunk be egy karaktert is, majd írassuk ki annyiszor, mint a beolvasott szám!
4. Készíts programot kamatszámításhoz, ciklussal! Kérd be a tőke mennyiségét, a kamat éves értékét (%), illetve a befektetés idejét hónapokban! Írd ki hónapról hónapra, hogyan gyarapodik a befektetés!
5. Az előző programhoz képest most azt adjuk meg, mennyi pénzt szeretnénk elérni, a program írja ki, hogy hány hónap alatt érjük el ezt a kamatokkal!
*/
#include <stdio.h>



int szamok_osszege (int n ) {
    int sum = 0;
    for (int i=1; i<=n; i++)
        sum += i;
    return sum;
}
int positive_input() {
    int x;
    do
    {
        printf("Pozitiv egesz szam: ");
        scanf("%d", &x);
    }
    while (x<=0);
    return x;
}



int main()
{
    int x;
    char c;

    // 1. Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!
    printf("Sum: %d\n", szamok_osszege(100));

    //2. Kérjünk be egy pozitív számot! Rossz adat esetében ismételjük meg a beolvasást!
    //positive_input();
    /*
    do
    {
        printf("Pozitiv egesz szam: ");
        scanf("%d", &x);
    }
    while (x<=0);
    */


    //3. Folytatás: olvassunk be egy karaktert is, majd írassuk ki annyiszor, mint a beolvasott szám!
    /*
    printf("Karakter: ");
    getchar();
    c = getchar();
    **/

    for (int i=0; i<x; i++) printf("%c", c);

    // 4. Készíts programot kamatszámításhoz, ciklussal! Kérd be a tőke mennyiségét, a kamat éves értékét (%), illetve a befektetés idejét hónapokban!
    // Írd ki hónapról hónapra, hogyan gyarapodik a befektetés!
    float toke,celtoke,kamat;
    int honap;
    printf("Toke: ");
    scanf("%f", &toke);
    printf("Kamat (eves): ");
    scanf("%f", &kamat);
    printf("Befektetes ideje (honap): ");
    scanf("%d", &honap);
    printf("\nToke 0/%d honap: \t%f\n", honap,toke);

    float toke_tmp = toke;
    for (int i=1; i<=honap; i++) {
        toke_tmp=toke_tmp * (1+(kamat/100/12));
        printf("Toke %d/%d honap: \t%f\n", i,honap,toke_tmp);
    }

    printf("\n");

    printf("Cel Toke: ");
    scanf("%f", &celtoke);
    toke_tmp = toke;
    int i=1;
    while (toke_tmp<celtoke) {
        toke_tmp=toke_tmp * (1+(kamat/100/12));
        printf("Toke %d honap: \t%f\n", i,toke_tmp);
        i++;
    }
    //5. Az előző programhoz képest most azt adjuk meg, mennyi pénzt szeretnénk elérni, a program írja ki,
    // hogy hány hónap alatt érjük el ezt a kamatokkal!

}
