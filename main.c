#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1
    //nombresPairExo1(20);

    // 2
    //SommeDesNNombresExo2(100);

    // 3
    //fibonacci(10);

    // 4
    //sommeDesCarres(10);

    // 5
    //nombresPremiersExo5(50);

    // 6
    //tableDeMultiplicationExo6();

    // 7
    //diviseursDeNombre();

    // 8
    //premierInferieurAExo8(1000);

    // 9
    //estPremierWhileExo9();

    // 10
    palindromeExo10();

    return 0;
}

void nombresPairExo1(int n) {
    int counter = 0;
    while(counter <= n) {
        if(counter % 2 == 0)
            printf("%d \n", counter);
        counter++;
    }}

void SommeDesNNombresExo2(int n) {
    int somme;
    for(int i = 0; i <= n; i++) {
        somme += i;
    }
    printf("%d", somme);
}

void fibonacciExo3(int n) {
    int fibSeries[n];
    fibSeries[0] = 0;
    fibSeries[1] = 1;

    for (int i = 2; i < n; i++) {
        fibSeries[i] = fibSeries[i - 1] + fibSeries[i - 2];
    }

    printf("Les %d premiers termes de la suite de Fibonacci :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibSeries[i]);
    }
}

void sommeDesCarresExo4(int n) {
    int somme;
    for(int i = 1; i <= n; i++) {
        somme += i*i;
    }
    printf("La somme des carres des nombres de 1 a %d est egal a : %d", n, somme);
}

void nombresPremiersExo5(int n) {
    printf("Le nombre 2 est premier ! \n");
    int nombre = 1;
    while (nombre <= n){
        for (int i = 2 ; i<= nombre ; i++){
            if (nombre % i == 0)
                break;
            else {
                printf("Le nombre %d est premier ! \n", nombre);
                break;
            }
        }
        nombre++;
    }
}

void tableDeMultiplicationExo6() {
    float nombre;
    printf("Entrez un nombre : ");
    scanf("%f", & nombre);
    printf("La table de multiplication de %.0f est : \n", nombre);
    for(float i = 0; i <= 12; i++) {
        printf("%.0f x %.0f = %.0f \n", nombre, i, (nombre*i));
    }
}

void diviseursDeNombreExo7() {
    int nombre;
    printf("Entrez un nombre :");
    scanf("%d", & nombre);
    printf("Les diviseurs de %d sont : ", nombre);
    int counter = 1;
    while(counter <= nombre) {
        if(nombre % counter == 0)
            printf("%d, ", counter);
        counter++;
    }
}

// Fonction pour v�rifier si un nombre est premier avec For
int estPremierFor(int n) {
    if (n <= 1) return 0;  // Les nombres n�gatifs et 1 ne sont pas premiers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  // Si n est divisible par i, alors n n'est pas premier
    }
    return 1;  // Si aucun diviseur trouv�, n est premier
}

void premierInferieurAExo8(int n) {
     int max = 0;

    // Parcourir les nombres de 2 � 999 et trouver le plus grand nombre premier
    for (int i = 2; i < n; i++) {
        if (estPremierFor(i)) {
            max = i;
        }
    }
    // Afficher le plus grand nombre premier trouv�
    printf("Le plus grand nombre premier inferieur a %d est : %d\n", n, max);

}

// Fonction pour v�rifier si un nombre est premier avec while
int estPremierWhile(int n) {
    if (n <= 1) {
        return 0; // Les nombres n�gatifs, 0 et 1 ne sont pas premiers
    }

    int diviseur = 2;

    while (diviseur * diviseur <= n) {
        if (n % diviseur == 0) {
            return 0; // n est divisible par diviseur, donc n n'est pas premier
        }
        diviseur++;
    }

    return 1; // Si aucun diviseur n'est trouv�, n est premier
}

void estPremierWhileExo9() {
    int nombre;
    printf("Saisir un nombre : ");
    scanf("%d", & nombre);
    if (estPremierWhile(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }
}

// v�rifie si un nombre est un palindrome
int estPalindrome(int n) {
    int reversed = 0, original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

void palindromeExo10() {
    printf("Nombres palindromes de 100 � 1000 :\n");

    for (int i = 100; i <= 1000; i++) {
        if (estPalindrome(i)) {
            printf("%d\n", i);
        }
    }
}

