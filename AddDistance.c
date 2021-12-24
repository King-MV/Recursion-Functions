#include <stdio.h>

struct distance {
    int km;
    float mt;
};

void AddDist (struct distance d1 , struct distance d2) {
    int Addkm = (d1.km + d2.km);
    int Addmt = (d1.mt + d2.mt);
    if (Addmt >= 1000) {
        Addkm = Addkm + 1;
        Addmt = Addmt - 1000;
    }
    printf("Sum of both distance is: %d km %d m\n",Addkm,Addmt);
}

void SubDist (struct distance d1 , struct distance d2) {
    int Subkm = (d1.km - d2.km);
    int Submt = (d1.mt - d2.mt);
    if (Submt < 0) {
        Subkm = Subkm - 1;
        Submt = 1000 + Submt;
    }
    printf("Subtraction of both distance is: %d km %d m\n",Subkm,Submt);
}

void main () {
    struct distance d1 , d2;

    printf("Enter distance 1 (in km & m): ");
    scanf("%d %f",&d1.km,&d1.mt);

    printf("Enter distance 2 (in km & m): ");
    scanf("%d %f",&d2.km,&d2.mt);

    AddDist(d1 , d2);
    SubDist(d1 , d2);
}