#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,x2,x3;
    float y1,y2,y3;
    float a,b;

    baslangic:

    printf("1.noktanin kordinatlarini giriniz\n");
    scanf("%f %f",&x1,&y1);

    printf("\n2.noktanin kordinatlarini giriniz\n");
    scanf("%f %f",&x2,&y2);

    printf("\n3.noktanin kordinatlarini giriniz\n");
    scanf("%f %f",&x3,&y3);

    printf("\n***********\n\n");

    printf("Kontrol edeceginiz noktanin kordinatlarini giriniz\n");
    scanf("%f %f",&a,&b);

    float x2_sonuc,y2_sonuc,x3_sonuc,y3_sonuc,x,y;

    x2_sonuc=x2-x1;
    y2_sonuc=y2-y1;
    x3_sonuc=x3-x1;
    y3_sonuc=y3-y1;
    x=a-x1;
    y=b-y1;

    float d,wa,wb,wc;

    d=(x2_sonuc*y3_sonuc)-(x3_sonuc*y2_sonuc);
    wa=(x*(y2_sonuc-y3_sonuc)+y*(x3_sonuc-x2_sonuc)+x2_sonuc*y3_sonuc-x3_sonuc*y2_sonuc);
    wa=wa/d;

    wb=(x*y3_sonuc)-(y*x3_sonuc);
    wb=wb/d;

    wc=(y*x2_sonuc - x*y2_sonuc);
    wc=wc/d;

    if((wa>0 && wa<1) && (wb>0 && wb<1) && (wc>0 && wc<1))
    {
        printf("Girdiginiz kordinatlar ucgenin icindedir\n");
    }
    else
    {
        printf("\nGirdiginiz kordinatlar ucgenin icinde degildir !!!\n\n");
        goto baslangic;
    }

    return 0;
} 
