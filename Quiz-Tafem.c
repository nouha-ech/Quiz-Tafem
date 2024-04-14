#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void help();

void help() {
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> Le TAFEM (Test d'admissibilité à la Formation En Management) est ");
    printf("\n >> le nom de l'épreuve écrite que tout candidat sélectionné doit passer");
    printf("\n\n\t*****Ce mini Quiz a été développé par Echchnaoui Nohaila********\n");
}

int main() {
    int compteur, Q, i;
    float score, resultat;
    char choix;
    char nom[20];

mainhome:
    system("cls");
    printf("\t\t\t  QUIZ TAFEM\n");
    printf("\n\t_____________________________________________________");
    printf("\n\t\t\t   Bienvenue ");
    printf("\n\t\t\t      au ");
    printf("\n\t\t\t  Quiz TAFEM  ");
    printf("\n\t_____________________________________________________");
    printf("\n\t_____________________________________________________");
    printf("\n \n\t   Testez vos connaissances avec le Quiz TAFEM\n   ");
    printf("\n\t  Que vous soyez en préparation pour le concours\n   ");
    printf("\n\t   ou simplement curieux de tester vos compétences, \n   ");
    printf("\n\t   ce quiz est fait pour vous !\n   ");
    printf("\n\t_____________________________________________________");
    printf("\n\t_____________________________________________________");

    printf("\n\n\t\t > TAPEZ S pour commencer ");
    printf("\n\n\t\t > TAPEZ H pour plus          ");
    printf("\n\t\t   d'informations sur ce test ");
    printf("\n\t_____________________________________________________");
    printf("\n\n\t*****Ce mini Quiz a été développé par Echchnaoui Nohaila********\n");

    choix = toupper(getch());

    if (choix == 'H') {
        help();
        goto mainhome;
    } else if (choix == 'S') {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEntrez votre nom:");
        fgets(nom, sizeof(nom), stdin);

        system("cls");
        printf("\n ------------------  Bienvenue %s dans le quiz!! --------------------------", nom);
        printf("\n\n Avant de commencer, voici quelques conseils utiles ::");
        printf("\n --------------------------------------------------------------------------------------");
        printf("\n >> Ce Quiz se compose de 30 QCM des connaissances générales ");
        printf("\n >> Vous aurez 4 options et vous devrez appuyer");
        printf("\n    sur A, B, C ou D pour choisir la bonne option.");
        printf("\n >> pour chaque mauvaise réponse, vous gagnerez 3 points!!!!");
        printf("\n >> pour chaque mauvaise réponse, vous perdrez un point!!!!");
        printf("\n\n\t!!!!!!!!!!!!! BONNE CHANCE !!!!!!!!!!!!!");
        printf("\n\n\n Appuyez sur C pour commencer le Quiz !\n");
        printf("\n Appuyez sur une autre touche pour retourner au menu principal !");
        printf("\n\n\t*****Ce mini Quiz a été développé par Echchnaoui Nohaila********\n");
        if (toupper(getch()) == 'C') {
            goto Quiz;
        } else {
            system("cls");
            goto mainhome;
        }
    }

Quiz:
    compteur = 0;
    for (i = 1; i <= 30; i++) {
        system("cls");
        Q = i;

        switch(Q) {
            case 1:
                printf("\n\nQuestion 1 :  Lequel des pays suivants n’a pas un Président élu pour un quinquennat ? ");
                printf("\n\nA Les États-Unis\tB La Grèce\tC La Pologne\tD Le Portugal");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }

            case 2:
                printf("\n\nQuestion 2 :  Le plus haut gratte-ciel du monde se trouve à :");
                printf("\n\nA Chicago\tB Dubaï\tC Shanghai\tD La Mecque");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
            case 3:
                printf("\n\nQuestion 3 :  Le signe ALENA correspond en anglais à :");
                printf("\n\nA NAFTA\tB NATO\tC IMF\tD IBRD");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }    
             case 4:
                printf("\n\nQuestion 4 : Lequel des pays suivants ne fait pas partie du G7 :");
                printf("\n\nA Le Japon\tB La France\tC Le Canada\tD La Russie");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }   
                case 5:
                printf("\n\nQuestion 5 : Les États-Unis sont composés de … États :");
                printf("\n\nA 40\tB 45\tC 50\tD 55");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                } 
                case 6:
                printf("\n\nQuestion 6 : En 2023, le FIDADOC d’Agadir réalise sa :");
                printf("\n\nA 14ème édition\tB 15ème édition\tC 16ème édition\tD 17ème édition");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }   
                 case 7:
                printf("\n\nQuestion 7 : Lequel de ces auteurs n’est pas marocain :");
                printf("\n\nA Tahar ben Jelloun\tB Driss Chraïbi\tC Yasmina Khadra\tD Fouad Laroui");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 8:
                printf("\n\nQuestion 8 :  Le Musée Mohammed VI d'art moderne et contemporain a été inauguré en ? ");
                printf("\n\nA 2013\tB 2014\tC 2015\tD 2016");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 9:
                printf("\n\nQuestion 9 : En quelle année l'esclavage est-il aboli en France ?");
                printf("\n\nA 1789\tB 1790\tC 1818\tD 1848");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 10:
                printf("\n\nQuestion 10 :Le premier footballeur marocain qui a reçu le trophée du ballon d'or africain ?");
                printf("\n\nA Mohamed Timoumi\tB Ahmed Faras\tC Badou Zaki\tD Laarbi Ben Barka");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 11:
                printf("\n\nQuestion 11 : : En quelle année le roi Mohamed V fut exilé à Madagascar");
                printf("\n\nA 1952\tB 1953\tC 1954\tD 1955");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 12:
                printf("\n\nQuestion 12 : : Quel est l’équivalent d’Amazon en Chine ?");
                printf("\n\nA Alibaba\tB Baidu\tC Tencent\tD Xiaomi");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 13:
                printf("\n\nQuestion 13 : Qui a été premier ministre du Royaume-Uni entre 2016-2019 avec pour mission de mener le Brexit");
                printf("\n\nA Theresa May\tB Amber Rudd\tC Margaret Thatcher\tD Nicola Sturgeon");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 14:
                printf("\n\nQuestion 14 : « Être ou ne pas être » cette phrase emblématique est de :");
                printf("\n\nA Emile Zola\tB Honoré de Balzac\tC Victor Hugo\tD William Shakespeare");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 15:
                printf("\n\nQuestion 15 : Le protocole de Kyoto a pour but ");
                printf("\n\nA protection des enfants\tB protection des animaux\tC protection de l’environnement\tD protection de la faune");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 16:
                printf("\n\nQuestion 16 : Dans quel pays seront organisés les JO 2024 ?");
                printf("\n\nA USA\tB Canada\tC Mexique\tD France");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 17:
                printf("\n\nQuestion 17 : Le siège de l’OTAN se trouve à :");
                printf("\n\nA Paris\tB Bruxelles\tC Berlin\tD Madrid");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 18:
                printf("\n\nQuestion 18  : Quel indicateur a été développé par le Programme des Nations Unies pour le Développement, pour mesurer le bien-être individuel ou collectif ?");
                printf("\n\nA Le Produit Intérieur Brut \tB Le Bonheur National Brut\tC IDH\tD INDH");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 19:
                printf("\n\nQuestion 19 : Quel est l'organisme des Nations Unies qui prend en charge les questions liées à l'agriculture ?");
                printf("\n\nA FMI\tB CAO\tC FAO\tD NAO");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 20:
                printf("\n\nQuestion 20 : En quel mois est né le prophète Mohammed ?");
                printf("\n\nA Mouharram\tB Rabia al-awwal\tC Safar\tD Rabia ath-thani");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 21:
                printf("\n\nQuestion 21 : Parmi ces publications, une seule est un hebdomadaire. Laquelle ");
                printf("\n\nA La Vie Eco\tB L’Économiste\tC Le Matin\tD Le Soir");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 22:
                printf("\n\nQuestion 22 : Parmi les sources d'énergie suivantes, laquelle est renouvelable ");
                printf("\n\nA Charbon\tB Gaz\tC Pétrole\tD Vent");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 23:
                printf("\n\nQuestion 23 :  L'ONU a succédé à quelle organisation ?");
                printf("\n\nA La Société des Nations \tB L'Union Interparlementaire \tC Le Bureau National de la Paix\tD La Cour d'Arbitrage International de la Haye");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 24:
                printf("\n\nQuestion 24 : : En quelle année l'américain Neil Armstrong a-t-il foulé la surface de la lune ");
                printf("\n\nA 1967\tB 1968\tC 1969\tD 1970");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 25:
                printf("\n\nQuestion 25 : : Le Salaire Minimum Interprofessionnel Garanti (SMIG) en vigueur au Maroc est environ de :");
                printf("\n\nA 1500 dirhams\tB 1900 dirhams\tC 4000 dirhams\tD 2700 dirhams");
                if (toupper(getch()) == 'D') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 26:
                printf("\n\nQuestion 26 : Quel est le seul pays qui ne célèbre pas la fête du travail (1er Mai) ?");
                printf("\n\nA Maroc\tB USA\tC Canada\tD France");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 27:
                printf("\n\nQuestion 27 : : La première destination mondiale de vacances est :");
                printf("\n\nA France\tB Australie\tC Espagne\tD Chine");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 28:
                printf("\n\nQuestion 28 : Quel est le plus petit État au monde :");
                printf("\n\nA Le Vatican\tB La Suisse\tC Monaco\tD Rwanda");
                if (toupper(getch()) == 'A') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 29:
                printf("\n\nQuestion 29 : Actuellement le nombre des régions du Maroc est de : ");
                printf("\n\nA 11\tB 12\tC 13\tD 14");
                if (toupper(getch()) == 'B') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }
                case 30:
                printf("\n\nQuestion 30 : Davos est une commune suisse réputée pour accueillir chaque année le Forum de :");
                printf("\n\nA L’Étudiant \tB L’Économie Mondiale\tC L’Économie Sociale\tD L’Économie Environnementale");
                if (toupper(getch()) == 'C') {
                    compteur += 3;
                    getch();
                    break;
                } else {
                    compteur -= 1;
                    getch();
                    break;
                }

            break;
        }
    }

score:
    system("cls");
    resultat = (float)(compteur * 100) / 90; // car le nombre de questions est de 30 donc le nombre total de points est de 90
