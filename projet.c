#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define Nmax 100



typedef struct {
    int idClient;
    char nom[20];
    char prenom[20];
    char cin[20];
    char tel[20];

    } Client;

typedef struct {
    int idChambre;
    char TypeDeChambre[20];

    } Chambre;


    typedef struct {
    int idReservation;
    char dateDeReservation[20], debSejour[20], finSejour[20];
    int MontAvance;
    int nombreDeNuit;
    int idClient;
    char TypeDeChambre[20];

    } Reservation;


    Client clients[Nmax];
    Chambre chambre[Nmax];
    Reservation reservation[Nmax];


    int nbrClientsExist = 0;
    int nbChambreExist, nbReservationExist;

    void gestiondescleints();
    void gestiondeschambres();
    void gestiondesreservations();
    void generationDetat();

    void ajouter_client(){


    int i=0,j=0,leave,temp;


    system("cls");
    system("color 61");
    gotoxy(18,1);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


    gotoxy(18,5);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("========================== GESTION DES CLIENTS =============================");





    do{

        i=0;
       while( i<Nmax , clients[i].idClient!=0 ) i++;
       if(i==Nmax)
       {
          gotoxy(18,1);
          textcolor(WHITE);
          textbackground(BLUE);
          cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
          cprintf(" !!!!   P A S  D  E S P A C E    !!!!");
          getch();
       }
       else
        {
            gotoxy(2,8);
            textcolor(WHITE);
            textbackground(BLUE);
            cprintf(" Id_client  : ");
            gotoxy(36,8);
            scanf("%d",&temp);

            j=0;
            while( j<Nmax && clients[j].idClient!=temp ) j++;

            if(j==Nmax)
              {
                  clients[i].idClient = temp ;

                gotoxy(2,12);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Nom    :");
                gotoxy(2,15);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Prenom :");
                gotoxy(2,18);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" CIN    :");
                gotoxy(2,21);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Tel    :");

                gotoxy(36,12);
                scanf("%s",&clients[i].nom);
                gotoxy(36,15);
                scanf("%s",&clients[i].prenom);
                gotoxy(36,18);
                scanf("%s",&clients[i].cin);
                gotoxy(36,21);
                scanf("%s",&clients[i].tel);

                }else {
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("  code Id_client existe deja ");
                  getch();
                  clrscr();
            }

            if(j==Nmax)
              {
                  system("cls");
                  cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
                  gotoxy(4,4);
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("            O P E R A T I O N   B I E N    E F F E C T U E E \n");
                  gotoxy(18,10);
                  cprintf("         POUR AJOUTER ENCORE UNE FOIS    TAPPER 1 , SI NON TAPPER 0 0 ");
                  scanf("%d",&leave);
                  i++;
                  system("cls");
                  textcolor(WHITE);
                  textbackground(BLUE);
                  cprintf("vous avez %d client : \n",i);
                  nbrClientsExist=i;
                  getch();
              }

       }
        }while( i<Nmax && leave==1 );
      gestiondescleints();
}


void ajouter_chambre(){


    int i=0,j=0,leave,temp;


    system("cls");
    system("color B3");
    gotoxy(18,1);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


    gotoxy(18,5);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("========================== GESTION DES CHAMBRES =============================");





    do{

        i=0;
       while( i<Nmax , chambre[i].idChambre!=0 ) i++;
       if(i==Nmax)
       {
          gotoxy(18,1);
          textcolor(WHITE);
          textbackground(BLUE);
          cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
          cprintf(" !!!!   P A S  D  E S P A C E    !!!!");
          getch();
       }
       else
        {
            gotoxy(2,8);
            textcolor(WHITE);
            textbackground(BLUE);
            cprintf(" Id_chambre  : ");
            gotoxy(36,8);
            scanf("%d",&temp);

            j=0;
            while( j<Nmax && chambre[j].idChambre!=temp ) j++;

            if(j==Nmax)
              {
                  chambre[i].idChambre = temp ;

                gotoxy(2,12);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Type De Chambre    :");


                gotoxy(36,12);
                scanf("%s",&chambre[i].TypeDeChambre);


                }else {
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("  code Id_client existe deja ");
                  getch();
                  clrscr();
            }

            if(j==Nmax)
              {
                  system("cls");
                  cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
                  gotoxy(4,4);
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("            O P E R A T I O N   B I E N    E F F E C T U E E \n");
                  gotoxy(18,10);
                  cprintf("         POUR AJOUTER ENCORE UNE FOIS    TAPPER 1 , SI NON TAPPER 0 0 ");
                  scanf("%d",&leave);
                  i++;
                  system("cls");
                  textcolor(WHITE);
                  textbackground(BLUE);
                  cprintf("vous avez %d chambre(s) : \n",i);
                  nbChambreExist=i;
                  getch();
              }

       }
        }while( i<Nmax && leave==1 );
      gestiondeschambres();
}




    void ajouter_reservation(){


    int i=0,j=0,leave,temp;


    system("cls");
    system("color 61");
    gotoxy(18,1);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


    gotoxy(18,5);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("========================== GESTION DES RESERVATIONS =============================");





    do{

        i=0;
       while( i<Nmax , reservation[i].idReservation!=0 ) i++;
       if(i==Nmax)
       {
          gotoxy(18,1);
          textcolor(WHITE);
          textbackground(BLUE);
          cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
          cprintf(" !!!!   P A S  D  E S P A C E    !!!!");
          getch();
       }
       else
        {
            gotoxy(2,8);
            textcolor(WHITE);
            textbackground(BLUE);
            cprintf(" Id_reservation  : ");
            gotoxy(36,8);
            scanf("%d",&temp);

            j=0;
            while( j<Nmax && reservation[j].idReservation!=temp ) j++;

            if(j==Nmax)
              {
                  reservation[i].idReservation = temp ;

                gotoxy(2,12);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Date de reservation    :");
                gotoxy(2,15);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Debut de sejour :");
                gotoxy(2,18);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Fin de sejour    :");
                gotoxy(2,21);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Montant en avance    :");
                gotoxy(2,24);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Nombre de nuit    :");
                gotoxy(2,27);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf(" Numero de client    :");
                gotoxy(2,30);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf("Type de chambre    :");




                gotoxy(36,12);
                scanf("%s",&reservation[i].dateDeReservation);
                gotoxy(36,15);
                scanf("%s",&reservation[i].debSejour);
                gotoxy(36,18);
                scanf("%s",&reservation[i].finSejour);
                gotoxy(36,21);
                scanf("%s",&reservation[i].MontAvance);
                gotoxy(36,24);
                scanf("%s",&reservation[i].nombreDeNuit);
                gotoxy(36,27);
                scanf("%s",&reservation[i].idClient);
                gotoxy(36,30);
                scanf("%s",&reservation[i].TypeDeChambre);

                }else {
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("  code Id_reservation existe deja ");
                  getch();
                  clrscr();
            }

            if(j==Nmax)
              {
                  system("cls");
                  cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
                  gotoxy(4,4);
                  textcolor(WHITE);
                  textbackground(BLUE);
                  gotoxy(18,5);
                  cprintf("            O P E R A T I O N   B I E N    E F F E C T U E E \n");
                  gotoxy(18,10);
                  cprintf("         POUR AJOUTER ENCORE UNE FOIS    TAPPER 1 , SI NON TAPPER 0 0 ");
                  scanf("%d",&leave);
                  i++;
                  system("cls");
                  textcolor(WHITE);
                  textbackground(BLUE);
                  cprintf("vous avez %d reservation(s) : \n",i);
                  nbReservationExist=i;
                  getch();
              }

       }
        }while( i<Nmax && leave==1 );
      gestiondesreservations();
}






void modifier_client(){

   int temp , choix , i=0;

    system("cls");

    printf("   GESTION DE RESERVATION HOTELIERE  \n");
    printf("\n\n\n\t votre code Id_client  SVP  : ");
    scanf("%d",&temp);

    while( i<Nmax && clients[i].idClient!=temp ) i++;

    if(i==Nmax)
     {
        system("cls");
        printf("    GESTION DE RESERVATION HOTELIERE  \n");
        printf("\n\n\n\n\n\n\t!! code Id_client introuvable \t nous vous invite a s'inscrire \n\n\t");


     }else{


            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE \n");
            printf(" \n\n\t V E U I L L E Z     P A T I E N T E R     S V P \n");
            //att();
            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE\n");
            printf(" \n\n\t\t\t BIENVENUS Ms/Mme  %s   %s \n",clients[i].prenom, clients[i].nom );
            printf(" \n\t\t  vous pouvez modifier votre : \n\n  1 : Nom \n\n  2 : Prenom \n\n  3 : CIN \n\n  4 : tel \n\n  5 : Retour \n\n\t\t\t\t VOTRE CHOIX\n\n\t\t\t\t   ");
            getch();
            scanf("%d",&choix);
            getch();

            switch( choix )
            {

                case 1 :
                        printf(" Nom : ");scanf(" %s",clients[i].nom);
                        break;

                case 2 :
                        printf(" Prenom : ");scanf(" %s",clients[i].prenom);
                        break;

                case 3 :
                        printf(" CIN : ");scanf(" %s",clients[i].cin);
                        break;

                case 4 :
                        printf(" Num_tel : ");scanf(" %s",clients[i].tel);
                        break;

                default :
                            printf("\n\n choix invalide ");


            }

         }

         gestiondescleints();
       }




void modifier_reservation(){

   int temp , choix , i=0;

    system("cls");

    printf("   GESTION DE RESERVATION HOTELIERE  \n");
    printf("\n\n\n\t votre code Id_reservation  SVP  : ");
    scanf("%d",&temp);

    while( i<Nmax && clients[i].idClient!=temp ) i++;

    if(i==Nmax)
     {
        system("cls");
        printf("    GESTION DE RESERVATION HOTELIERE  \n");
        printf("\n\n\n\n\n\n\t!! code Id_reservation introuvable \t nous vous invite a reserver \n\n\t");


     }else{


            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE \n");
            printf(" \n\n\t V E U I L L E Z     P A T I E N T E R     S V P \n");
            //att();
            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE\n");
            printf(" \n\n\t\t\t BIENVENUS \n");
            printf(" \n\t\t  vous pouvez modifier votre : \n\n  1 : dateDeReservation \n\n  2 : debSejour \n\n  3 : finSejour \n\n  4 : MontAvance \n\n  5 : nombreDeNuit   \n\n  6 : Id_client  \n\n  7 : TypeDeChambre \n\n  8 : Retour \n\n\t\t\t\t VOTRE CHOIX\n\n\t\t\t\t   ");
            getch();
            scanf("%d",&choix);
            getch();

            switch( choix )
            {

                case 1 :
                        printf(" Date de reservation : ");scanf(" %s",reservation[i].dateDeReservation);
                        break;

                case 2 :
                        printf(" Debut de sejour : ");scanf(" %s",reservation[i].debSejour);
                        break;

                case 3 :
                        printf(" Fin de sejour : ");scanf(" %s",reservation[i].finSejour);
                        break;

                case 4 :
                        printf(" Montant avance : ");scanf(" %s",reservation[i].MontAvance);
                        break;
                case 5 :
                        printf(" Nombre de nuit : ");scanf(" %s",reservation[i].nombreDeNuit);
                        break;
                case 6 :
                        printf(" Id_client : ");scanf(" %s",reservation[i].idClient);
                        break;
                case 7 :
                        printf(" Type de chambre : ");scanf(" %s",reservation[i].TypeDeChambre);
                        break;
                case 8 :
                        printf(" Retour : ");
                        break;

                default :
                            printf("\n\n choix invalide ");


            }

         }

         gestiondesreservations();
       }



void modifier_chambre(){

   int temp , choix , i=0;

    system("cls");

    printf("   GESTION DE RESERVATION HOTELIERE  \n");
    printf("\n\n\n\t votre code Id_chambre  SVP  : ");
    scanf("%d",&temp);

    while( i<Nmax && chambre[i].idChambre!=temp ) i++;

    if(i==Nmax)
     {
        system("cls");
        printf("    GESTION DE RESERVATION HOTELIERE  \n");
        printf("\n\n\n\n\n\n\t!! code Id_chambre introuvable \n\n\t");


     }else{


            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE \n");
            printf(" \n\n\t V E U I L L E Z     P A T I E N T E R     S V P \n");
            //att();
            system("cls");
            printf("    GESTION DE RESERVATION HOTELIERE\n");
            printf(" \n\n\t\t\t BIENVENUS dans la chambre  %d\n",chambre[i].idChambre);
            printf(" \n\t\t  vous pouvez modifier votre type de chambre\n\n\t\t\t\t   ");
          //  getch();
           // scanf("%d",&choix);
           // getch();


           printf(" Type de chambre : ");
           scanf(" %s",chambre[i].TypeDeChambre);




         }

         gestiondeschambres();
       }


void consulter_client()
{


   int i=0 ;
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf(" ------------------------- Consulter la liste des Clients ---------------------------");
        if(nbrClientsExist==0){
                clrscr();
                gotoxy(4,3);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf("Pas de Clients  .... \n");
        }else{
            system("cls");
            for(i=0;i<nbrClientsExist && clients[i].idClient!=0 ;i++){
                textbackground(BLUE);
                textcolor(WHITE);
                gotoxy(4,1);
                cprintf(" Client Numero: %d ",i+1);
                gotoxy(4,4);
                cprintf(" Id de client    : %d ",clients[i].idClient);
                gotoxy(4,7);
                cprintf(" Nom de client   : %s ",clients[i].nom);
                gotoxy(4,10);
                cprintf(" Prenom de client: %s ",clients[i].prenom);
                gotoxy(4,13);
                cprintf(" CIN             : %s ",clients[i].cin);
                gotoxy(4,16);
                cprintf(" Tel             : %s ",clients[i].tel);


            }

            }
            printf("\n\n\n\n");
            system("pause");
            system("cls");

            gestiondescleints();
        }


void consulter_reservation()
{


   int i=0 ;
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf(" ------------------------- Consulter la liste des reservations ---------------------------");
        if(nbReservationExist==0){
                clrscr();
                gotoxy(4,3);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf("Pas de reservation  .... \n");
        }else{
            system("cls");
            for(i=0;i<nbReservationExist && reservation[i].idReservation!=0 ;i++){
                textbackground(BLUE);
                textcolor(WHITE);
                gotoxy(4,1);
                cprintf(" Reservation Numero: %d ",i+1);
                gotoxy(4,4);
                cprintf(" Id de reservation    : %d ",reservation[i].idReservation);
                gotoxy(4,7);
                cprintf(" Date de reservation   : %s ",reservation[i].dateDeReservation);
                gotoxy(4,10);
                cprintf(" Debut de sejour: %s ",reservation[i].debSejour);
                gotoxy(4,13);
                cprintf(" Fin de sejour             : %s ",reservation[i].finSejour);
                gotoxy(4,16);
                cprintf(" Montant avance            : %s ",reservation[i].MontAvance);
                gotoxy(4,19);
                cprintf(" Nombre de nuit            : %s ",reservation[i].nombreDeNuit);
                gotoxy(4,22);
                cprintf(" Id_client            : %s ",reservation[i].idClient);
                gotoxy(4,25);
                cprintf(" Type de chambre            : %s ",reservation[i].TypeDeChambre);

            }

            }
            printf("\n\n\n\n");
            system("pause");
            system("cls");

            gestiondesreservations();
        }

    void consulter_chambres()
{


   int i=0 ;
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf(" ------------------------- Consulter la liste des Chambres ---------------------------");
        if(nbChambreExist==0){
                clrscr();
                gotoxy(4,3);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf("Pas de Chambres  .... \n");
        }else{
            system("cls");
            for(i=0;i<nbChambreExist && chambre[i].idChambre!=0 ;i++){
                textbackground(BLUE);
                textcolor(WHITE);
                gotoxy(4,1);
                cprintf(" Chambre Numero: %d ",i+1);
                gotoxy(4,4);
                cprintf(" Id chambre    : %d ",chambre[i].idChambre);
                gotoxy(4,7);
                cprintf(" Type de chambre   : %s ",chambre[i].TypeDeChambre);


            }

            }
            printf("\n\n\n\n");
            system("pause");
            system("cls");

            gestiondeschambres();
        }





void supprimer_client(){
   int i=0 ,k=0, choix , temp ;

    system("cls");
    printf("  GESTION DE RESERVATION HOTELIERE  \n");
    printf(" \n\n \n \n\t 1 : un par un \n\n 2 : Tout en une seul fois \n");
    scanf("%d",&choix);

    switch( choix )
    {

  case  1 :


                        printf("\n\n\ndonner l id du client que vous voulez supprimer :\t"); scanf("%d",&temp);

                   while( i<Nmax && clients[i].idClient!=temp ) i++;

                if(i==Nmax)
                {
                    system("cls");
                  printf("     GESTION DE RESERVATION HOTELIERE \n");
                  printf("\n\n\n\t !! code Id_client introuvable \t nous vous invite a s'inscrire \n\n\t");
                  getch();

                }else{

                        system("cls");
                        printf("     GESTION DE RESERVATION HOTELIERE\n");
                        printf("\n\n\n\n\t S U P P R I M E R    1 : OUI /  0 : NON \n\n");
                        scanf("%d",&temp);

                        if(temp)
                        {

                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P \n");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT  Mr / Mme %s %s \n\n",clients[i].nom,clients[i].prenom);
                            clients[i].idClient=0;

                            getch();


                        }else {
                            printf("\n\n\n\n  nous vous remerciez pour votre choix  Mr/Mme %s %s \n",clients[i].nom,clients[i].prenom);
                            getch();
                     }
                }
               break;


                case  2 :
                  printf("\n\n\n Voulez vous supprimer tous les clients ?  \t \n!!!!! Attention !!!!!:\t \n Si oui tapper 1 sinon taper 0  :");
                  scanf("%d",&temp);

                    if(temp){

                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P ");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT  Mr/Mme %s %s \n\n",clients[i].nom,clients[i].prenom);
                        for(k=0;k<Nmax;k++){
                           clients[k].idClient=0;
                        }
                    }else printf("\n\n\n\n  nous vous remercions pour votre choix ");

                    getch();

             break;

                }

        system("pause");

        gestiondescleints();
        }



void supprimer_reservation(){
   int i=0 ,k=0, choix , temp ;

    system("cls");
    printf("  GESTION DE RESERVATION HOTELIERE  \n");
    printf(" \n\n \n \n\t 1 : un par un \n\n 2 : Tout en une seul fois \n");
    scanf("%d",&choix);

    switch( choix )
    {

  case  1 :


                        printf("\n\n\ndonner l'id de reservation que vous voulez supprimer :\t"); scanf("%d",&temp);

                   while( i<Nmax && reservation[i].idReservation!=temp ) i++;

                if(i==Nmax)
                {
                    system("cls");
                  printf("     GESTION DE RESERVATION HOTELIERE \n");
                  printf("\n\n\n\t !! code Id_reservation introuvable \t nous vous invite a s'inscrire \n\n\t");
                  getch();

                }else{

                        system("cls");
                        printf("     GESTION DE RESERVATION HOTELIERE\n");
                        printf("\n\n\n\n\t S U P P R I M E R    1 : OUI /  0 : NON \n\n");
                        scanf("%d",&temp);

                        if(temp)
                        {

                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P \n");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT  \n\n");
                            reservation[i].idReservation=0;

                            getch();


                        }else {
                            printf("\n\n\n\n  nous vous remercions pour votre choix \n");
                            getch();
                     }
                }
               break;


                case  2 :
                  printf("\n\n\n Voulez vous supprimer toutes les reservations ?  \t \n!!!!! Attention !!!!!:\t \n Si oui tapper 1 sinon taper 0  :");
                  scanf("%d",&temp);

                    if(temp){

                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P ");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT  \n\n");
                        for(k=0;k<Nmax;k++){
                           reservation[k].idReservation=0;
                        }
                    }else printf("\n\n\n\n  nous vous remercions pour votre choix ");

                    getch();

             break;

                }

        system("pause");

        gestiondesreservations();
        }


void supprimer_chambre(){
   int i=0 ,k=0, choix , temp ;

    system("cls");
    printf("  GESTION DE RESERVATION HOTELIERE  \n");
    printf(" \n\n \n \n\t 1 : un par un \n\n 2 : Tout en une seul fois \n");
    scanf("%d",&choix);

    switch( choix )
    {

  case  1 :


                        printf("\n\n\ndonner l id du chambre que vous voulez supprimer :\t"); scanf("%d",&temp);

                   while( i<Nmax && chambre[i].idChambre!=temp ) i++;

                if(i==Nmax)
                {
                    system("cls");
                  printf("     GESTION DE RESERVATION HOTELIERE \n");
                  printf("\n\n\n\t !! code Id_chambre introuvable \t nous vous invite a s'inscrire \n\n\t");
                  getch();

                }else{

                        system("cls");
                        printf("     GESTION DE RESERVATION HOTELIERE\n");
                        printf("\n\n\n\n\t S U P P R I M E R    1 : OUI /  0 : NON \n\n");
                        scanf("%d",&temp);

                        if(temp)
                        {

                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P \n");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT   \n\n");
                            chambre[i].idChambre=0;

                            getch();


                        }else {
                          //  printf("\n\n\n\n  nous vous remerciez pour votre choix  Mr/Mme %s %s \n",chambre[i].nom,clients[i].prenom);
                            getch();
                     }
                }
               break;


                case  2 :
                  printf("\n\n\n Voulez vous supprimer toutes les chambres ?  \t \n!!!!! Attention !!!!!:\t \n Si oui tapper 1 sinon taper 0  :");
                  scanf("%d",&temp);

                    if(temp){

                            printf("     GESTION DE RESERVATION HOTELIERE \n");
                            printf(" \n\n\n V E U I L L E Z     P A T I E N T E R     S V P ");
                            //att();
                            system("cls");
                            printf("     GESTION DE RESERVATION HOTELIERE\n");
                            printf("\n\n\n\n\n\n\n\t\t O P E R A T I O N   B I E N    E F F E C T U E E ");
                            printf("\n\n\n\t\t\t\t  A BIENTOT \n\n");
                        for(k=0;k<Nmax;k++){
                           chambre[k].idChambre=0;
                        }
                    }else printf("\n\n\n\n  nous vous remercions pour votre choix ");

                    getch();

             break;

                }

        system("pause");

        gestiondeschambres();
        }






void gestiondescleints(){

int x ;
int choix ;
system("cls");
system("color B3");
     gotoxy(18,1);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


     gotoxy(18,5);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("========================== GESTION DES CLIENTS =============================");


    do{
gotoxy(4,40);
textbackground(BLUE);
textcolor(WHITE);
cprintf("a: Nouveau \n");
gotoxy(20,40);
textbackground(BLUE);
textcolor(WHITE);
printf("b: Consulter :\n");
gotoxy(40,40);
textbackground(BLUE);
textcolor(WHITE);
printf("c: Modifier :\n");
gotoxy(60,40);
textbackground(BLUE);
textcolor(WHITE);
printf("d: Supprimer:\n");
gotoxy(80,40);
textbackground(BLUE);
textcolor(WHITE);
printf(" ESP: Menu Principale");


 x=getche();


     if(x==97){
             ajouter_client();
       }
     if(x==98){
              consulter_client();
       }
     if(x==99){
              modifier_client();
       }
     if(x==100){
              supprimer_client();
       }

       system("cls");

    }while(x=!27);
}


void gestiondesreservations(){

int x ;
int choix ;
system("cls");
system("color B3");
     gotoxy(18,1);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


     gotoxy(18,5);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("========================== GESTION DES RESERVATIONS =============================");


    do{
gotoxy(4,40);
textbackground(BLUE);
textcolor(WHITE);
cprintf("a: Nouveau \n");
gotoxy(20,40);
textbackground(BLUE);
textcolor(WHITE);
printf("b: Consulter :\n");
gotoxy(40,40);
textbackground(BLUE);
textcolor(WHITE);
printf("c: Modifier :\n");
gotoxy(60,40);
textbackground(BLUE);
textcolor(WHITE);
printf("d: Supprimer:\n");
gotoxy(80,40);
textbackground(BLUE);
textcolor(WHITE);
printf(" ESP: Menu Principale");


 x=getche();


     if(x==97){
             ajouter_reservation();
       }
     if(x==98){
              consulter_reservation();
       }
     if(x==99){
              modifier_reservation();
       }
     if(x==100){
              supprimer_reservation();
       }

       system("cls");

    }while(x=!27);
}

void gestiondeschambres(){

    int x;
    system("cls");
    system("color B3");
    gotoxy(18,12);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


     gotoxy(18,15);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("========================== GESTION DES CHAMBRES ============================");


do {
gotoxy(4,40);
textbackground(BLUE);
textcolor(WHITE);
cprintf("a: Nouveau \n");
gotoxy(20,40);
textbackground(BLUE);
textcolor(WHITE);
printf("b: Consulter :\n");
gotoxy(40,40);
textbackground(BLUE);
textcolor(WHITE);
printf("c: Modifier :\n");
gotoxy(60,40);
textbackground(BLUE);
textcolor(WHITE);
printf("d: Supprimer:\n");
gotoxy(80,40);
textbackground(BLUE);
textcolor(WHITE);
printf(" ESP: Menu Principale");

x=getche();


     if(x==97){
             ajouter_chambre();
       }
     if(x==98){
              consulter_chambres();
       }
     if(x==99){
              modifier_chambre();
       }
     if(x==100){
              supprimer_client();
       }

       system("cls");

    }while(x=!27);

}


void reservation_en_cours(){
     int i=0,nbreservation=0;
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf(" ------------------------- resevation en cours ---------------------------");
        if(nbReservationExist==0){
                clrscr();
                gotoxy(4,3);
                textcolor(WHITE);
                textbackground(BLUE);
                cprintf("Pas de reservation en cours  .... \n");
        }else{
            system("cls");
            for(i=0;i<nbReservationExist && reservation[i].idReservation!=0 ;i++){
                nbreservation++;
            }
            textbackground(BLUE);
            textcolor(WHITE);
            gotoxy(4,1);
            cprintf(" reservation en cours: %d ",nbreservation);


            }
            printf("\n\n\n\n");
            system("pause");
            system("cls");

            generationDetat();
        }


void generation_facture(){}

void generationDetat(){


    int x;
    system("cls");
    system("color B3");
    gotoxy(18,12);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");


     gotoxy(18,15);
     textcolor(WHITE);
     textbackground(BLUE);
     cprintf("========================== GENERATION DES ETAT ============================");


do {
gotoxy(4,40);
textbackground(BLUE);
textcolor(WHITE);
cprintf("a: Reservation en cours \n");
gotoxy(60,40);
textbackground(BLUE);
textcolor(WHITE);
printf("b: Facture :\n");
gotoxy(80,40);
textbackground(BLUE);
textcolor(WHITE);
printf(" ESP: Menu Principale");

x=getche();


     if(x==97){
             reservation_en_cours();
       }
     if(x==98){
              generation_facture();
       }


       system("cls");

    }while(x=!27);

}
void menuPrincipale(){


    int x;
    char tapezA[]= "tapez a";
    char tapezB[]= "tapez b";
    char tapezC[]= "tapez c";
    char tapezD[]= "tapez d";
    char tapezESP[]= "tapez ESP";


    system("cls");
    system("color B3");
    gotoxy(18,1);
    textcolor(BLUE);
    textbackground(LIGHTGRAY);
    cprintf("======================= GESTION DE RESERVATION HOTELIERE ===================");
    do {
    gotoxy(6,8);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("%s %70s","GESTION DES CLIENTS     ", tapezA);
    gotoxy(6,12);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("%s %70s", "GESTION DES CHAMBRES    ", tapezB);
    gotoxy(6,16);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("%s %70s", "GESTION DES RESERVATIONS", tapezC);
    gotoxy(6,20);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("%s %70s", "GENERATION D'ETATS      ", tapezD);
    gotoxy(6,24);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("%s %70s", "QUITTER                 ", tapezESP);


 x=getche();
    printf("x  ==  > %d", x);


     if(x==97){
              gestiondescleints();
       }
     if(x==98){
              gestiondeschambres();
       }
     if(x==99){
              gestiondesreservations();
       }
     if(x==100){
              generationDetat();
       }

       system("cls");

    }while(x=!27);




}



int main()
{

    menuPrincipale();
        return 0;
}
