#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char kelime[250];
    int uzunluk;
    int s_kodu;

    a:
    fflush(stdin);

    printf("Kelime gir: ");
    gets(kelime);

    printf("\nSifreleme kodu girin: ");
    scanf("%d",&s_kodu);

    if(s_kodu>=1 && s_kodu<=20)
    {
        uzunluk = strlen(kelime);

        printf("\nGirdiginiz kelimenin uzunlugu: %d\n", uzunluk);

        printf("\nSifrelenmis kelime: ");

        for(int i=0;i<uzunluk;i++)
        {
            int ascii;

            ascii=kelime[i];

            if((ascii>=65 && ascii<=90))
            {
                kelime[i]=ascii+s_kodu;

                if(kelime[i]>=91)
                {
                    kelime[i]-=26;
                }

                printf("%c",kelime[i]);
            }

            else if((ascii>=97 && ascii<=122))
            {
                kelime[i]=ascii+s_kodu;

                if(kelime[i]>=123)
                {
                    kelime[i]-=26;
                }

                printf("%c",kelime[i]);
            }

            else if((ascii==32))
            {
                 printf("%c",ascii);
            }

            else
            {
                printf("\n\nHatali Girise Rastlandi !!!\n\n");
                goto a;
            }
        }

        /*fflush(stdin);

        unsigned char new_kelime[250];

        printf("\n\nSifresi cozulecek kelimeyi giriniz: ");
        gets(new_kelime);

        printf("\nSifre cozme kodunu girin: ");
        scanf("%d",&s_kodu);

        uzunluk = strlen(new_kelime);

        printf("\nSifresi cozulmus kelime: ");

        for(int i=0;i<uzunluk;i++)
        {
            int ascii;

            ascii=new_kelime[i];

            new_kelime[i]=ascii-s_kodu;

            printf("%c",new_kelime[i]);
        }

        printf("\n"); */

    }

    else
    {
        printf("\nSifreleme kodunu 1-20 arasinda giriniz !!!\n\n");
        goto a;
    }

  return 0;
} 

