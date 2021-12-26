// A C program to take input of two distances and then add & subtract the distances.
#include <stdio.h>

// Structure is declared to store and operate the values of distances.
struct distance {
    int km;
    float mt;
};

// Function used to add two distances.
void AddDist (struct distance d1 , struct distance d2) {
    int Addkm = (d1.km + d2.km);
    int Addmt = (d1.mt + d2.mt);
    if (Addmt >= 1000) {
        Addkm = Addkm + 1;
        Addmt = Addmt - 1000;
    }
    printf("Sum of both distance is: %d km %d m\n",Addkm,Addmt);
}

// Function used to subtract two distances.
void SubDist (struct distance d1 , struct distance d2) {
    int Subkm = (d1.km - d2.km);
    int Submt = (d1.mt - d2.mt);
    if (Submt < 0) {
        Subkm = Subkm - 1;
        Submt = 1000 + Submt;
    } else if (Subkm >= 0 && Submt >= 0) {
        printf("Subtraction of both distance is: %d km %d m\n",Subkm,Submt);
    } else if (Subkm < 0) {
        printf("Can't Calculate\n");
    }
}

void main () {
    struct distance d1 , d2;

    printf("Enter distance 1 (in km & m): ");
    scanf("%d %f",&d1.km,&d1.mt);

    printf("Enter distance 2 (in km & m): ");
    scanf("%d %f",&d2.km,&d2.mt);
    
    //Main is calling Addition functions
    AddDist(d1 , d2);
    //Main is calling Subtraction functions  
    SubDist(d1 , d2);
}
