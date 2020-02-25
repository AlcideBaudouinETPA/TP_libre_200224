#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
 

int main(){
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



/*combat*/


printf("un monstre vous surprend durant votre sieste vosu decidez de le combattre.\n");
printf("Le Grand Chien-Loup possede %d points de vie.\n",pvMonstre);
printf("Vous possedez %d points de vie.\n",pvJoueur);
	while (pvMonstre>0) {
		printf("(1) attaquer (2) defendre (3) poison (4) antidote\n");
		scanf("%d",&choixJoueur);
		while (pointMagie <=60000){
			pointMagie++;
		}
		printf("vous avez %d de points de magie\n",pointMagie );
		if (choixJoueur==1) {
			printf("Vous frappez le Grand Chien-Loup et lui infligez %d points de degats.\n",degatsJoueur);
			pvMonstre = pvMonstre-degatsJoueur;
			printf("Le Grand Chien-Loup possede desormais %d points de vie.\n",pvMonstre);
		}
		else if (choixJoueur==2) {
			printf("Le Grand Chien-Loup attaque mais vous vous defendez, il vous enleve quand meme 5 points de vie.\n");
			pvJoueur = pvJoueur-degatsMonstre/4;
			printf("Le Grand Chien-Loup possede desormais %d points de vie.\n",pvMonstre);


		}
		else if (choixJoueur==3) {
			printf("vous infliger un poison au Grand Chien-Loup il ne pourra plus sans defaire avant la fin de la partie, ce poison lui infligera %d de degats a chaque tour.\n",degatsPoison );
			printf("cependant ce poison te coutera 3 points de magie.\n");
			pvMonstre = pvMonstre-degatsPoison;
			printf("Le Grand Chien-Loup possede desormais %d points de vie.\n",pvMonstre);
		}
		else if (choixJoueur==4) {
			printf("vous décidez de vous débarrasser du poison mit par le Grand Chien-Loup.\n");
			degatsPoisonMonstre=0;
		}
		printf("(1) il attaque (2) il t'empoisonne\n");
		if (nbgen==1){
			printf("Le Grand Chien-Loup vous attaque, il vous enleve %d points de vie.\n",degatsMonstre);
		}
			pvJoueur = pvJoueur-degatsMonstre;
		printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
		
			else if (nbgen==2){
				for (compteurPoison>0;compteurPoison){
					compteurPoison--;
			printf("Le Grand Chien-Loup vous empoisonne, il vous enleve %d points de vie.\n",degatsMonstre);
			printf("vous garderez ce poison en vous pendant 3 tours.  \n");
				}	
			}
			pvJoueur = pvJoueur-degatsPoisonMonstre;
			printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);

		}
		if (choixJoueur==3, pointMagie<3) {
			return 0;
		}


		/*fin de partie*/


		if (pvJoueur<=0) {
	printf("Vous tombez sous les coups de crocs du Grand Chien-Loup.\n");
	break;
	}
	}
	if (pvMonstre<=0) {
		printf("Le Grand Chien-Loup a succombe a ses blessures.");
	}
}
int (pvMonstre); 
int (pvJoueur);

pvMonstre = 100;
pvJoueur = 100;

while (pvMonstre>0) {
	printf("Vous frappez le Grand Chien-Loup et lui infligez 5 points de degats.\n");
	pvMonstre = pvMonstre-5;
	printf("Le Grand Chien-Loup est atteint, il possede desormais %d points de vie.",pvMonstre);

	printf("Le Grand Chien-Loup contre-attaque, il enlève au joueur %d points de vie.\n",pvJoueur);
	pvJoueur = pvJoueur-5;
	printf("Vous possedez maintenant %d points de vie.\n",pvJoueur);
}
}

/*shop/inventory*/
