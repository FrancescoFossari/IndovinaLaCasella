#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    int i,j;
    int a[30][30];
    char alfabeto[]={'A','B','C','D','E','F','G','H','I','L','M','N','O','P','Q','R','S','T','U','V','Z'};
    char numeri[]={'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20'};
    system("color 0F");
    int n_persone;
    char b[100];
    float soldi;


    //GRAFICA SOPRA A TUTTO
    printf("\t\t\t\t");
    for(i=0;i<50;i++){
        printf("*");
    }
    printf("\n\n\n \t\t\t\t\tBENVENUTO IN INDOVINA LA CASELLA\n\n\n");
    printf("\t\t\t\t");
     for(i=0; i<50; i++){
        printf("*");
    }
    printf("\n\n\n");


    //REGOLE PER PARTECIPARE
    printf("\t\t\t\t1) POSARE LA PROPRIA QUOTA SUL TAVOLO E RAGGIUNGERE IL MONTEPREMI STIMATO.\n\n");
    printf("\t\t\t\t2) SCEGLIERE I DUE PROPRI RIQUADRI PRIMA DELL'INIZIO.\n\n");
    printf("\t\t\t\t3) CHI INDOVINA IL RIQUADRO IN CUI SI GENERERA' L' X VINCE IL MONTEPREMI TOTALE, \n");
    printf("\t\t\t\tNEL CASO ACCADE CHE PIU' GIOCATORI VINCONO, VINCE CHI HA PIU' RIQUADRI O SI DIVIDE IL MONTEPREMI.\n\n");
    printf("\t\t\t\t4) IL GIOCO CONTINUA E SI AGGIUNGONO QUOTE AD OGNI ISCRIZIONE(NON OBBLIGATORIA)FINCHE NON SI PRESENTA UN VINCITORE! .\n\n\n\n\n ");


    //DOMANDE PER CALCOLI MONTEPREMI E VARIE
    printf("\n\t\t\t\tQuante persone partecipano? :  ");
    scanf("\t\t\t\t%d",&n_persone);
    printf("\n");
    printf("\t\t\t\tA quanto ammonta la quota di iscrizione? : ");
    scanf("\t\t\t\t%f", &soldi);
    printf("    (Esempio: 3,50 Euro a testa)");
    printf("\n");
    printf("\n\n\t\t\tMontepremi : %5.2f Euro    !! Scegli due riquadri su cui puntare e annotati quelle che hai scelto !!", n_persone*soldi);
    printf("\n\n\n");


    //PRINT DELLA MATRICE
    for(i=0; i<20; i++){
            printf("\t");
            printf("%c   ",alfabeto[i]);
    for(j=0; j<20; j++){
          printf(" %d[]",j+1);
        }
        printf("\n\n");
    }

    printf("\n\t\t\t\tPronto per la generazione dei riquadri?  Buona fortuna!   \n\n\n\n");
    system("PAUSE");


    printf("\n\n\n\t\t\t\tECCO GENERATA LA MATRICE! CHE VINCA IL MIGLIORE!\n\n");

for(int i=0; i<20; i++){
         printf("\t");
         printf("%c  ",alfabeto[i]);
    for(int j=0; j<20; j++){
        if(a[i][j] == 1)   //PRINTA LA MATRICE CON TUTTE LE X CASUALI.
            printf("  %d[X]", j+1);
        if(a[i][j] == 2)
            printf("  %d[ ]", j+1);
        if(a[i][j] == 3)
            printf("  %d[ ]", j+1);
        if(a[i][j] != 1 && a[i][j] != 2 && a[i][j] != 3)
            printf("  %d[ ]", j+1);
    }
    printf("\n\n");
}
 printf("\n\n\n\n\n\n");

    printf("\t\t\t\t");
    for(i=0;i<50;i++){
        printf("*");
    }
    printf("\n\n \t\t\t\t\tCONGRATULAZIONI AL VINCITORE ! \n\n");
    printf("\t\t\t\t");
     for(i=0; i<50; i++){
        printf("*");
    }
    printf("\n\n");
}
