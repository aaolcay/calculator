#include<stdio.h>
/** switch-case

bir duruma girince sadece onu yapar

structure of switch-case::::
case:
        islemler
        break;

operation hangi case e uygunsa onu yapar


 **/
int main(){

    int islem;
    int islem2;
    float bakiye=1000;
    float kalan;
    float tutar,tutar2;
    char cevap[50];
    printf("Islemler\n1:para cekme\n2:para yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");

    printf("Isleminizi Seciniz::");
    scanf("%d",&islem);

    switch(islem){/** switch yap�lacak operation'� belirler **/

    case 1:
        printf("\nBakiyeniz:%f",bakiye);
        printf("\nCekilecek Tutari Giriniz:");
        scanf("%f",&tutar);
            if(tutar>bakiye){
                printf("Yeterli Bakiyeniz Bulunmamaktadir");
            }
            else{
                printf("Cekmek Istediginiz Tutar:%f",tutar);
                printf("\nCekmek istediginiz tutari onayliyor musunuz?\n");
                scanf("%s",&cevap);
                if(strcmp(cevap, "evet") == 0){/** string ifade i�in if conditional **/
                    printf("\nIsleminiz Onaylanmistir");
                    kalan=bakiye-tutar;
                    /**
                    bakiye -= tutar; ayn� i�lemi yapar
                    printf("\nKalan bakiyeniz:%f",bakiye);
                    **/
                    printf("\nKalan bakiyeniz:%f",kalan);
                }
                else{
                    printf("\nYapilacak baska bir islem seciniz");
                    printf("\nIslemler::\n1:para cekme\n2:para yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
                    scanf("%d",&islem2);
                    switch(islem2){
                        case 1:
                            printf("\nBakiyeniz:%f",bakiye);
                            printf("\nCekilecek Tutari Giriniz:");
                            scanf("%f",&tutar2);
                             if(tutar2>bakiye){
                                printf("Yeterli Bakiyeniz Bulunmamaktadir");
                                }
                            else{
                                printf("Cekmek Istediginiz Tutar:%f",tutar2);
                                printf("\nCekmek istediginiz tutari onayliyor musunuz?\n");
                                scanf("%s",&cevap);
                            if(strcmp(cevap, "evet") == 0){/** string ifade i�in if conditional **/
                                printf("\nIsleminiz Onaylanmistir");
                                kalan=bakiye-tutar2;
                                printf("\nKalan bakiyeniz:%f",kalan);
                                }
                            else{
                            printf("\nCikis Yapmak Icin Enter'a Basiniz");
                            }

                        break;

                        case 2:
                            printf("\nBakiyeniz:%f",bakiye);
                            printf("\nYatirilacak Tutari Giriniz:");
                            scanf("%f",&tutar);
                            bakiye+=tutar;
                            printf("Yeni Bakiyeniz:%f",bakiye);
                        break;

                        case 3:
                        printf("\nBakiyeniz:%f",bakiye);
                        printf("\Havale Tutari Giriniz:");
                        scanf("%f",&tutar);
                        if(tutar>bakiye){
                        printf("\nBakiye Yetersiz");
                        }
                        else{
                        bakiye-=tutar;
                        printf("\nYeni Bakiyeniz:%f",bakiye);
                        }
                        break;

                        case 4:
                        printf("\nBakiyeniz:%f",bakiye);
                        break;

                        case 5:
                        printf("\nKart �ade Edildi");
                        break;

                        default:

                        break;
                }
            }
                }
            }
    break;

    case 2:
    printf("\nBakiyeniz:%f",bakiye);
    printf("\nYatirilacak Tutari Giriniz:");
    scanf("%f",&tutar);
    bakiye+=tutar;
    printf("Yeni Bakiyeniz:%f",bakiye);
    break;

    case 3:
        printf("\nBakiyeniz:%f",bakiye);
        printf("\nHavale Tutari Giriniz:");
        scanf("%f",&tutar);
        if(tutar>bakiye){
        printf("\nBakiye Yetersiz");
        }
        else{
        bakiye-=tutar;
        printf("\nYeni Bakiyeniz:%f",bakiye);
        }
    break;

    case 4:
        printf("\nBakiyeniz:%f",bakiye);
    break;

    case 5:
        printf("\nKart Iade Edildi");
    break;

    default: /** Hi�bir case'e girmezse default'a girer **/

    break;

}
    return 0;
}

