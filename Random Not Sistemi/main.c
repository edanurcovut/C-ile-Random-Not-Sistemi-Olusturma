//Edanur COVUT 190201035

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Ogrenci
{
    int ders_id;
    int ogrenci_id ;
    char dersler_dizisi[3];
    int aldigi_vize_notlari[3];
    int aldigi_final_notlari[3];
};
int a_ortalama (struct Ogrenci *ogrenciler, int dersin_kodu)
{

}
int random_not(int ogrenc_id, int dersin_kodu)
{
    struct Ogrenci dd;
    int i, vizenot;
    srand(time(NULL));
    printf("Vizeler:");
    for(i = 0 ; i <3 ; i++)
    {
        dd.aldigi_vize_notlari[i] = rand() % 100 + 1;
        printf(" %d\t",dd.aldigi_vize_notlari[i]);
    }
    printf("\nfinaller:");
    for(i = 0 ; i <3 ; i++)
    {

        dd.aldigi_final_notlari[i] = rand() % 100 + 1;
        printf(" %d\t",dd.aldigi_final_notlari[i]);
    }
}
int main()
{
    struct Ogrenci oi,*ptr;
    int N,i;
    printf("Ogrenci sayisini girin: ");
    scanf("%d", &N);
    ptr = (struct Ogrenci*) malloc( N * sizeof(struct Ogrenci) );
    ptr=&oi;
    srand(time(NULL));
    for(i = 0 ; i <N ; i++)
    {
        ptr->ogrenci_id=rand()%100+1;
        ptr->ders_id=rand()%100+1;
        printf("\n\nogrenci id: %d\n",ptr->ogrenci_id);
        printf("Ders id: %d \n",ptr->ders_id);
        random_not(ptr->ogrenci_id,ptr->ders_id);

    }
    a_ortalama(ptr,ptr->ders_id);
    return 0;
}
