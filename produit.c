{
    int attaqueM = 10;
    int ptdevieM = 100;
    int attaqueJ = 20;
    int ptdevieJ = 100;
    int i = 100;
    int choixj = 0;
    int PM = 20;
    int degatsMana = 5;
    int degatsM = attaqueM;
    int degatsJ = attaqueJ;
    int a = 1;
    int b = 3;
    int choixM;
		int poison = 0;
		int antidote = 20;
    srand(time(NULL));

    for(i=100; i>=0; i--){
      choixM = rand_a_b(1, 4);
        if ( ptdevieJ <= 0){
            printf("TES MORT");
            break;
        }
        if ( ptdevieM <= 0){
            printf("GENIAL TA APPUYER 5 FOIS SUR 1 T'ES FIER ?");
            break;
        }
        if ( PM <=0){
            printf("Tu n'a plus de Mana");
            printf("1 = Attaque ; 2 = Défence \n");
            scanf("%d", &choixj);
        }
				if (poison == 1) {
      ptdevieM -= 1;
				}
        printf("1 = Attaque ; 2 = Défence ; 3 = Sort ; 4=Antidote ; \n");
        scanf("%d", &choixj);

        if( choixj == 1){
        switch (choixM) {
          case 1 :
          //Attaque du Joueur :
              printf("Le Joueur Attaque %d \n", attaqueJ);
              printf("Le Monstre a perdu %d PV \n", degatsJ);
              printf("Vie du Monstre %d \n", ptdevieM -= degatsJ);
              printf("Vie du Joueur = %d \n", ptdevieJ);
          //Attaque du Monstre :
              printf("Attaque du Monstre %d \n", attaqueM);
              printf("Le Joueur a perdu %d PV \n", degatsM);
              printf("Vie du Joueur %d \n", ptdevieJ -= degatsM);
              break;
          case 2 :
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
            //Attaque du Joueur :
                printf("Le Joueur Attaque %d \n", attaqueJ/4);
                printf("Le Monstre a perdu %d PV \n", degatsJ/4);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ/4);
                printf("Vie du Joueur = %d \n", ptdevieJ);
                break;
          case 3 :
          //Attaque du Joueur :
              printf("Le Joueur Attaque %d \n", attaqueJ/4);
              printf("Le Monstre a perdu %d PV \n", degatsJ/4);
              printf("Vie du Monstre %d \n", ptdevieM -= degatsJ/4);
              printf("Vie du Joueur = %d \n", ptdevieJ);
          //Le Monstre lance un sort :
              printf("Monstre lance un sort ! %d DMG\n",degatsMana -= attaqueM);
						poison = 1;
              printf("Mana utiliser = 4 PM \n");
              printf("Le Joueur a perdu %d PV \n", degatsMana -= degatsM);
              printf("Vie du Joueur %d PV\n", ptdevieJ -= degatsMana);
              break;
            }
        }
        if( choixj == 2){
					switch (choixM) {
						case 1 :
            //Défence du Joueur :
                printf("Le joueur se protege \n");
            //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM/4);
                printf("Le Joueur a perdu %d PV \n", degatsM/4);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM/4);
            		break;
						case 2 :
            //Défence du Joueur :
                printf("Le joueur se protege \n");
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
								break;
						case 3 :
						//Défence du Joueur :
                printf("Le joueur se protege \n");
            //Le Monstre lance un sort :
	              printf("Monstre lance un sort ! %d DMG\n",degatsMana -= attaqueM);
								poison = 1;
	              printf("Mana utiliser = 4 PM \n");
	              printf("Le Joueur a perdu %d PV \n", degatsM -= degatsMana);
	              printf("Vie du Joueur %d PV\n", ptdevieJ -= degatsMana);
	              break;
					}
        }
        if( choixj == 3){
            switch (choixM) {
							case 1 :
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
            //Joueur lance un sort :
                printf("Vie de Joueur = %d \n", ptdevieJ);
                printf("Joueur lance un sort ! %d \n", attaqueJ -= degatsMana);
								poison = 1;
                printf("Mana utiliser = -4 PM \n");
                printf("Le Monstre a perdu %d PV \n", degatsJ -= degatsMana);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ -= degatsMana);
                printf("Mana du Joueur = %d \n", PM -= degatsMana);
								break;
          		case 2 :
            //Joueur lance un sort :
                printf("Vie de Joueur = %d \n", ptdevieJ);
                printf("Joueur lance un sort ! %d \n", attaqueJ -= degatsMana);
								poison = 1;
                printf("Mana utiliser = -4 PM \n");
                printf("Le Monstre a perdu %d PV \n", degatsJ -= degatsMana);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ -= degatsMana);
                printf("Mana du Joueur = %d \n", PM -= degatsMana);
            //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM);
                printf("Le Joueur a perdu %d PV \n", degatsM);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM);
								break;
							case 3 :
						//Joueur lance un sort :
							printf("Vie de Joueur = %d \n", ptdevieJ);
							printf("Joueur lance un sort ! %d \n", attaqueJ -= degatsMana);
							poison = 1;
							printf("Mana utiliser = -4 PM \n");
							printf("Le Monstre a perdu %d PV \n", degatsJ -= degatsMana);
							printf("Vie du Monstre %d \n", ptdevieM -= degatsJ -= degatsMana);
							printf("Mana du Joueur = %d \n", PM -= degatsMana);
						//Le Monstre lance un sort :
		          printf("Monstre lance un sort ! %d DMG\n",degatsMana -= attaqueM);
							poison = 1;
		          printf("Mana utiliser = 4 PM \n");
		          printf("Le Joueur a perdu %d PV \n", degatsMana -= degatsM);
		          printf("Vie du Joueur %d PV\n", ptdevieJ -= degatsMana);
		          break;
            }
        }
        			if( choixj == 4){
					printf(" Vous utiliser un antidote +20 PV \n");
						ptdevieJ + antidote;
						poison = 0;
						printf("Vie du Joueur %d PV\n", ptdevieJ + antidote);
							  }
    }
}
