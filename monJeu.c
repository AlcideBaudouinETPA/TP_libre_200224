#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
 

int main(){
    //variables
	int pvMonstre = 500; 
	int pvJoueur = 500;
	int choixJoueur;
	int degatsJoueur = 100;
	int degatsMonstre = 20;
	int pointMagie = 0;
	int degatsPoison = 30;
	int choixMonstre(void){
	srand(time(NULL));
    int nbgen=rand()%2+1;    //entre 1&2
    int degatsPoisonMonstre = 50;
    int compteurPoison = 3;
    int xp = 0;
    int gainxp = 300;
    int lvl = 0;
    int xplvl = 1600;
    int gainargent = 100;



//combat


printf("un monstre vous surprend durant votre sieste vous decidez de le combattre.\n");
printf("Le craqueleur possede %d points de vie.\n",pvMonstre);
printf("Vous possedez %d points de vie.\n",pvJoueur);
		while (pointMagie <=60000){
			pointMagie++;
		}
		printf("vous avez %d de points de magie\n",pointMagie );
	while (pvMonstre>0) {
		printf("(1) attaquer (2) defendre (3) poison (4) antidote\n");
		scanf("%d",&choixJoueur);

		if (choixJoueur==1) {
			printf("Vous frappez le craqueleur et lui infligez %d points de degats.\n",degatsJoueur);
			pvMonstre = pvMonstre-degatsJoueur;
			printf("Le craqueleur possede desormais %d points de vie.\n",pvMonstre);
		}
		else if (choixJoueur==2) {
			printf("Le craqueleur attaque mais vous vous defendez, il vous enleve quand meme 5 points de vie.\n");
			pvJoueur = pvJoueur-degatsMonstre/4;
			printf("Le craqueleur possede desormais %d points de vie.\n",pvMonstre);


		}
		else if (choixJoueur==3) {
			printf("vous infliger un poison au craqueleur il ne pourra plus sans defaire avant la fin de la partie, ce poison lui infligera %d de degats a chaque tour.\n",degatsPoison );
			printf("cependant ce poison te coutera 3 points de magie.\n");
			pvMonstre = pvMonstre-degatsPoison;
			printf("Le craqueleur possede desormais %d points de vie.\n",pvMonstre);
		}
		else if (choixJoueur==4) {
			printf("vous décidez de vous débarrasser du poison mit par le craqueleur.\n");
			degatsPoisonMonstre=0;
		}
		printf("(1) il attaque (2) il t'empoisonne\n");
		if (nbgen==1){
			printf("Le craqueleur vous attaque, il vous enleve %d points de vie.\n",degatsMonstre);
		}
			pvJoueur = pvJoueur-degatsMonstre;
		printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
		
			if (nbgen==2){
				for (compteurPoison>0;compteurPoison--;){
					compteurPoison--;
			printf("Le craqueleur vous empoisonne, il vous enleve %d points de vie.\n",degatsMonstre);
			printf("vous garderez ce poison en vous pendant 3 tours.  \n");
				}	
			}
			pvJoueur = pvJoueur-degatsPoisonMonstre;
			printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);

		}
		if (choixJoueur==3, pointMagie<3) {

		}
		
		if (pvJoueur<=0) {
	printf("Vous tombez sous les coups du craqueleur.\n");
    printf("vous perdez %d dollars",gainargent);
    argentJoueur=argentJoueur-gainargent;
	}
	}
int gainxp = 300;
int xp = 0;
int gainargent = 100;
int argentJoueur = 500;

	if (pvMonstre<=0) {
		printf("Le craqueleur a succombe a ses blessures.");
		printf("vous gagnez %d d'experience \n",gainxp);
		xp=xp+gainxp;
		printf("xp : %d\n",xp);
		printf("vous gagnez %d dollars\n",gainargent);
		argentJoueur=argentJoueur+gainargent;
		printf("argent : %d\n",argentJoueur );
}
int xplvl = 1600;
int lvl = 0;
if (xp>=xplvl){
	lvl++;
	xplvl=xplvl*1.2;
}


///////////////////////////////////////////////////////////////
/*magasin*/
///////////////////////////////////////////////////////////////


struct Objet{
	char nomObjet[100]; 
	int prix;
	char caracteristique[300];
};
typedef struct Objet objet;


objet epee = {"lame du craqueleur", 100, "Une lame ancestrale servant a ecraser toutes creatures vivantes"};
objet casque = {"casque du craqueleur",130, "casque taille dans la pierre valant son pesant d'or"};
objet ceinture = {"ceinture du craqueleur",200, "porter cetteceinture fera de vous un aventurier confirmer"};
objet bottes = {"bottes du craqueleur",140, "incroyablement lourdes elles vous donneront une excuse dans un combat perdu d'avance"};
objet cape = {"craquelocape",130, "une cape de pierre excellente pour vous defendre contre les jets de pierre"};
objet amulette = {"craquamulette",50, "une amulette donnant fiere allure malgre la difficulte de la supporter"};


int main()
{
    char prenom[100];

    int choix ;
    int itemachat ;
    int argentJoueur = 500;
	
	int epee1 = 0;
	int bouclier1 = 0;
	int potion1 = 0;
	int lance1 = 0;
	int armure1 = 0;
	int peluche1 = 0;


    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !", prenom);
    printf("Ta jauge d'xp est a %d \n", xp);

   while (argentJoueur > 0){

    printf("Veux-tu m'acheter quelque chose ? \n [1] oui \n [2] non \n [3] Voir votre inventaire");
    scanf("%d", &choix);

    if (choix == 1){
    	printf("Que veux-tu acheter %s ?\n", prenom);
    	printf(" [1] %s | %d | %s \n", epee.nomObjet, epee.prix, epee.caracteristique);
    	printf(" [2] %s | %d | %s \n", casque.nomObjet, casque.prix, casque.caracteristique);
    	printf(" [3] %s | %d | %s \n", ceinture.nomObjet, ceinture.prix, ceinture.caracteristique);
    	printf(" [4] %s | %d | %s \n", bottes.nomObjet, bottes.prix, bottes.caracteristique);
    	printf(" [5] %s | %d | %s \n", cape.nomObjet, cape.prix, cape.caracteristique);
    	printf(" [6] %s | %d | %s \n", amulette.nomObjet, amulette.prix, amulette.caracteristique);

    		scanf("%d", &itemachat);

    		if (itemachat == 1){
    			printf("Cette arme est difficile a utiliser, en revanche elle te sera tres utile pour taper plus de craqueleur. \n");
    			argentJoueur = argentJoueur - epee.prix;
				epee1 = epee1 + 1;
    			printf("vous avez %d\n", argentJoueur);
    		}

    		if (itemachat == 2){
    			printf("Avec ce casque tu y verras pas plus clair dans ton avenir, cependant elle t'aidera a avoir plus de force dans le crane. \n");
    			argentJoueur = argentJoueur - casque.prix;
				bouclier1 = bouclier1 + 1;
    			printf("vous avez %d\n", argentJoueur );
    		}

    		if (itemachat == 3){
    			printf("Voila la ceinture. Elle t'aidera a prendre plus d'objet dans ton inventaire. \n");
    			argentJoueur = argentJoueur - ceinture.prix;
				potion1 = potion1 + 1;
    			printf("vous avez %d\n", argentJoueur );
    		}

    		if (itemachat == 4){
    			printf("Tu verras, elles sont pas tres lourdes malgre leurs matieres. \n");
    			argentJoueur = argentJoueur - bottes.prix;
				lance1 = lance1 + 1;
    			printf("vous avez %d\n", argentJoueur );
    		}

    		if (itemachat == 5){
    			printf("Prend cette cape sur ton dos, elle ne pesera pas si lourd quand elle sera sur ton dos. \n");
    			argentJoueur = argentJoueur - cape.prix;
				armure1 = armure1 + 1;
    			printf("vous avez %d\n", argentJoueur );
    		}

    		if (itemachat == 6){
    			printf("Prends la, elle terminera ton costume en pierre. \n");
    			argentJoueur = argentJoueur - amulette.prix;
				peluche1 = peluche1 + 1;
    			printf("vous avez %d\n", argentJoueur );
    		}
	}

	if (choix == 2){
		printf("Veux-tu vendre dans ce cas ?");
	}
	
		if (choix == 3){
		printf("Vous possédez \n %d %s \n", epee1, epee.nomObjet);
		printf("Vous possédez \n %d %s \n", bouclier1, casque.nomObjet);
    	printf("Vous possédez \n %d %s \n", potion1, ceinture.nomObjet);
    	printf("Vous possédez \n %d %s \n", lance1, bottes.nomObjet);
    	printf("Vous possédez \n %d %s \n", armure1, cape.nomObjet);
    	printf("Vous possédez \n %d %s \n", peluche1, amulette.nomObjet);
	}

		}

		if (argentJoueur <= 0){
			printf("T'as plus d'argent , dommage essaye encore une fois. \n");
		}
}
if (main<<10) {
	main++;
}