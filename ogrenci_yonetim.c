#include <stdio.h>

struct Ogrenci {
    char isim[50];
    int numara;
    float ortalama;
};

int main() {
    struct Ogrenci ogrenciler[100];
    int secim;
    int ogrenciSayisi = 0;

    do {
        printf("\n=== OGRENCI YONETIM SISTEMI ===\n");
        printf("1. Ogrenci Ekle\n");
        printf("2. Ogrencileri Listele\n");
        printf("3. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch(secim) {

            case 1:
                printf("\nOgrenci Adi: ");
                scanf("%s", ogrenciler[ogrenciSayisi].isim);

                printf("Ogrenci Numarasi: ");
                scanf("%d", &ogrenciler[ogrenciSayisi].numara);

                printf("Ortalama: ");
                scanf("%f", &ogrenciler[ogrenciSayisi].ortalama);

                ogrenciSayisi++;
                printf("Ogrenci basariyla eklendi.\n");
                break;

            case 2:
                printf("\n OGRENCI LISTESI\n");

                if (ogrenciSayisi == 0) {
                    printf("Kayitli ogrenci bulunamadi.\n");
                } else {
                    for (int i = 0; i < ogrenciSayisi; i++) {
                        printf("\nOgrenci %d\n", i + 1);
                        printf("Ad: %s\n", ogrenciler[i].isim);
                        printf("Numara: %d\n", ogrenciler[i].numara);
                        printf("Ortalama: %.2f\n", ogrenciler[i].ortalama);
                    }
                }
                break;

            case 3:
                printf("Program sonlandiriliyor...\n");
                break;

            default:
                printf("Gecersiz secim yaptiniz!\n");
        }

    } while (secim != 3);

    return 0;
}
