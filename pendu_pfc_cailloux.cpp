#include<iostream>
#include<string>


void PFC(int start) {
	//temps que le jeu est lancée on effectue le programme
	while (start == 1) {
		//le joueur 1 fait son choix + sécurité en cas de mauvaise saisie
		std::string Joueur1 = "";
		while (Joueur1 != "feuille" and Joueur1 != "pierre" and Joueur1 != "ciseaux") {
			std::cout << "Joueur 1 entrer pierre feuille ou ciseaux" << std::endl;
			std::cin >> Joueur1;
			system("clear");
			if (Joueur1 != "feuille" and Joueur1 != "pierre" and Joueur1 != "ciseaux") {
				std::cout << "Erreur de syntaxe, veuillez reessayer, entrer pierre feuille ou ciseaux (en minuscule)" << std::endl;
			}
		}
		//le joueur 2 fait son choix + sécurité en cas de mauvaise saisie
		std::string Joueur2 = "";
		while (Joueur2 != "feuille" and Joueur2 != "pierre" and Joueur2 != "ciseaux") {
			std::cout << "Joueur 2 entrer pierre feuille ou ciseaux" << std::endl;
			std::cin >> Joueur2;
			system("clear");
			if (Joueur2 != "feuille" and Joueur2 != "pierre" and Joueur2 != "ciseaux") {
				std::cout << "Erreur de syntaxe, veuillez reessayer, entrer pierre feuille ou ciseaux (en minuscule)" << std::endl;
			}
		}
		if (Joueur1 != Joueur2) {
			if (Joueur1 == "pierre") {
				if (Joueur2 == "feuille") {
					std::cout << "Le joueur 2 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
				else {
					std::cout << "Le joueur 1 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
			}
			else if (Joueur1 == "feuille") {
				if (Joueur2 == "ciseaux") {
					std::cout << "Le joueur 2 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
				else {
					std::cout << "Le joueur 1 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
			}
			else if (Joueur1 == "ciseaux") {
				if (Joueur2 == "pierre") {
					std::cout << "Le joueur 2 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
				else {
					std::cout << "Le joueur 1 a gagner" << std::endl;
					std::cout << " " << std::endl;
				}
			}
			int rejouer = 0;
			std::cout << "Si vous voulez rejouer entrer 1 sinon fermer la console ou entrer n'importe quel nombre " << std::endl;
			std::cin >> rejouer;
			start = rejouer;

		}
		else if (Joueur1 == Joueur2) {
			start = 1;
			std::cout << "Egalite, veuillez recommencez" << std::endl;
		}
	}
}

void pendu(std::string mot) {

	// on calcule la taille du mot
	int taille = 0;
	taille = mot.length();
	std::cout << "La taille du mot est " << taille << std::endl;

	// on remplit un tableau avec les caractères du mot et un tableau d'_

	char tabl[taille];
	for (int i = 0; i < taille; ++i) {
		tabl[i] = '_';
	}


	//initialisation de toutes les variables nécéssaire
	int erreur = 0;
	int fini = 0;
	int entier;
	int oui;
	oui = 1;
	//ERREUR QUAND LE MOT EST TERMINE, LE JEU NE S'ARRETE PLUS


	//programme du pendu
	while (erreur != 8 and fini != 1) {
		char essaie;
		std::cout << "Joueur 2 donner votre lettre" << std::endl;
		std::cin >> essaie;
		std::cout << " " << std::endl;

		system("clear");
		for (int j = 0; j < taille; ++j) {
			if (essaie == mot[j]) {
				tabl[j] = essaie;
				entier = 0;
				oui = 0;
			}
			
		}
		for (int y = 0; y < taille; ++y) {
					if (tabl[y] != '_') {
						entier = entier + 1;
					}
						
				}
				if (entier == taille) {
					fini = 1;
				}
				else {
					fini = 0;
				}
		if (oui == 1) {
			erreur = erreur + 1;
		}

		for (int k = 0; k < taille; ++k) {
			std::cout << tabl[k];
		}
		std::cout << " erreur(s) : " << erreur << "/" << "8" << std::endl;
		std::cout << " " << std::endl;
		oui = 1;
	}

	system("clear");

	//vérification si la personne à gagner ou perdu
	if (erreur == 8) {
		std::cout << " " << std::endl;
		std::cout << "Vous avez perdu, c'etais votre dernier essaie" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "Vous avez gagner, le mot etait : " << mot << std::endl;
		std::cout << " " << std::endl;
	}

}

void cailloux(int start1){
	while(start1==1){
		int joueur1=3;
		int joueur2=3;
		int choix1=0;
		int devine1;
		int devine2;
		int choix2=0;
		while(joueur1!=0 and joueur2!=0){
			std::cout<<"Joueur 1, entrer le nombre de cailloux à placer sous votre main, vous en avez "<<joueur1<<std::endl;
			std::cout<<" "<<std::endl;
			std::cin>>choix1;
			system("clear");
			std::cout<<"Joueur 2, entrer le nombre de cailloux à placer sous votre main, vous en avez "<<joueur2<<std::endl;
			std::cout<<" "<<std::endl;
			std::cin>>choix2;
			system("clear");
			std::cout<<"Joueur 2, devinez le nombre de cailloux sous la main de  votre adversaire "<<std::endl;
			std::cout<<" "<<std::endl;
			std::cin>>devine2;
			system("clear");
			std::cout<<"Joueur 1, devinez le nombre de cailloux sous la main de  votre adversaire "<<std::endl;
			std::cout<<" "<<std::endl;
			std::cin>>devine1;
			system("clear");
			if (choix1==devine2){
				std::cout<<"Le joueur 2 a deviné le bon nombre, joueur 1 vous perdez un cailloux"<<std::endl;
				std::cout<<" "<<std::endl;
				joueur1=joueur1-1;
			}
			if (choix2==devine1){
				std::cout<<"Le joueur 1 a deviné le bon nombre, joueur 2 vous perdez un cailloux"<<std::endl;
				std::cout<<" "<<std::endl;
				joueur2=joueur2-1;
			}
		}
		if(joueur1==0 and joueur2!=0){
			system("clear");
			std::cout<<"Le joueur 2 à gagner"<<std::endl;
			std::cout<<" "<<std::endl;
		}
		else if (joueur2==0 and joueur1!=0){
			system("clear");
			std::cout<<"Le joueur 1 à gagner"<<std::endl;
			std::cout<<" "<<std::endl;
		}
		else if (joueur2==0 and joueur1==0){
			std::cout<<"Egalite"<<std::endl;
			std::cout<<" "<<std::endl;
		}

		std::cout<<"Entrer 1 pour relancer une partie ou 0 pour quitter :"<<std::endl;
		std::cin>>start1;
	}
}


int main() {
	int lancement = 1;

	while (lancement == 1) {
		//Demande à l'utilisateur le jeu auquel il veut jouer
		std::string choix;
		std::cout << "Entrer le nom du jeu auquel vous voullez jouer dans la liste ci-dessous" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "pendu, pfc, cailloux" << std::endl;
		std::cin >> choix;
		std::cout<<" "<<std::endl;
		//system("cls");
		system("clear");

		//lance le sous programme pierre feuille ciseaux si l'utilisateur l'a choisit
		if (choix == "pfc") {
			int start = 1;
			PFC(start);
		}


		else if (choix == "pendu") {
			// le joueur 2 choisit son mot qu'on incrémante dans la variable mot
			std::string mot = "";
			std::cout << "Joueur 1 donner votre mot" << std::endl;
			std::cin >> mot;
			//system("cls");
			system("clear");
			pendu(mot);
		}

		else if (choix == "cailloux"){
			int commencer = 1;
			cailloux(commencer);
		}
		else {
			std::cout << "Vous avez mal saisie le nom du jeu, entrer le nom du jeu en minuscule sans espace" << std::endl;
			std::cout << " " << std::endl;
		}
		int retourmenu = 2;
		std::cout << "Entrer 1 pour retourner au menu des jeux ou alors taper O ou fermer la console pour quitter nos mini-jeux" << std::endl;
		std::cin >> retourmenu;
		//system("cls");
		system("clear");
		while (retourmenu != 0 and retourmenu != 1) {
			std::cout << "Erreur de saisie veuiller recommencer" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Entrer 1 pour retourner au menu des jeux ou alors taper O ou fermer la console pour quitter nos mini-jeux" << std::endl;
			std::cin >> retourmenu;
			//system("cls");

			
		}
		lancement = retourmenu;
	}
	


	return 0;
}