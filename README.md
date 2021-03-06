Robot
=====

========== Installation et Configuration ==========

// Obtenir une ref sur ma machine
1. git clone http://forget@atlassian.polytech.unice.fr:7990/scm/TWTWGMM/public.git nomOGL-AQL

// Modifier info sur git
git config --global user.email "forget@polytech.unice.fr"
git config --global user.name "forget"

Remarque : Cela est a faire 1 fois uniquement.

Légende :
  - NUM_TACHE = numero de tache sur atlassian (ex.: TWTWGMM-10)
  - HEAD = numero de commit sur atlassian
  - VERSION = v0.1 par exemple
  - NOM_FICHIER = nom de fichier (ou dossier)
  - COMMAND = nom de commande git

========== Commandes de base ==========

// NOM_FICHIER fait parti de la version en cours
2. git add NOM_FICHIER 
   git rm NOM_FICHIER
								
// Creation d'une nouvelle version LOCALE
3. git commit -m "NUM_TACHE Message"

// Envoyer MES versions LOCALE dans le referentiel
4. git push origin master

// Recuperer les nouvelles versions dans le referentiel
5. git pull	

// Deplacer un fichier ou un dossier
git mv ./NOM_FICHIER ./autreDossier/NOM_FICHIER

// Renommer un fichier ou un dossier
git mv ./NOM_FICHIER ./NOUVEAU_NOM_FICHIER

// Obtenir le status du referenciel
git status 


========== Aide et Probleme ==========

// Afficher l'index de l'aide (dans navigateur)
git help git

// Afficher l'aide dans la console
git help

// Afficher l'aide d'une commande (dans navigateur)
git help COMMAND

// Rollback general
git reset --hard HEAD

// Rollback sur un fichier
git checkout HEAD NOM_FICHIER

// Modifier le commentaire du dernier commit
//!\ POSSIBLE UNIQUEMENT SI LE COMMIT N'A PAS ENCORE ETE PUSHE /!\
git commit --amend -m "Le nouveau commentaire."

========== Tags ==========

// Lister les tags
git tag

// Créer un tag
git tag -a VERSION -m "version 0.1 - Description" HEAD

// Pousser les tags
git push origin --tags

// Supprimer un tag
git tag -d VERSION
git push origin :VERSION


========== Branches ==========

// Créer une branche locale myBranch
git branch myBranch

// Changer de branche
git checkout myBranch

// Créer une branche locale myBranch et y basculer de suite
// Equivalent des deux commandes ci-dessus
git branch -b myBranch

// Fusionner avec la branche actuelle
// Donc faire git checkout master avant par exemple
git merge myBranch

// Supprimer la branche myBranch
git branch -d myBranch

// Lister les différentes branches
// Dans la liste, il y a une "*" devant la branche courante 
git branch

// visualiser les derniers commits de chaque branche
git branch -v

// Voir les branches qui ont déjà été fusionné dans la branche courante
git branch --merged

// Voir les branches qui n'ont pas déjà été fusionné dans la branche courante
git branch --no-merged


// Pousser une branche locale vers un serveur (branche locale devient distante)
git push origin myBranch

// Pousser une branche locale vers un serveur en indiquant que la branche myBranch
// locale dépend de la branche origin/myBranch (lorsqu'on fera un git pull, on pullera
// par défaut ce qu'il y a sur origin/myBranch)
git push -u origin myBranch

// Recuperer une branche distante (myBranchDistant)
git checkout -b myBranchDistant origin/myBranchDistant

// Recuperer le contenu d'une autre branche (master par exemple)
git pull origin master

// Recuperer le contenu en ligne (fetch) et fusionner (merge) avec le contenu local
git pull

// Recuperer le contenu en ligne (de la branche distante associé)
git fetch origin

// Supprimer une branche distante
git push origin :myBranchDistant


========== Autres commandes utiles ==========

// Compter le nombre de commits par utilisateur
git shortlog -sn

// Commiter sous une autre identité
git commit --author "Prénom Nom <email@address.com>"

// Antidater un commit
GIT_AUTHOR_DATE="2009-11-26 08:32 +100" git commit -m "Un commit antidaté."


========== Utilisation d'outils ==========

// Avoir une vision d'ensemble de qui a fait quoi sur le projet
gource

// Compiler et tester avec Maven
mvn install

// Lancer Sonar
StartSonar.bat 	(sur Windows)
./start.sh 	(sur Linux ou Mac)
Adresse : localhost:9000
mvn clean install sonar:sonar


======================== Git sous ASSEMBLA ======================== 

Start up Git Bash.
On the command prompt, type in the following command, substituting with 
the email/login you used to sign up for Assembla.

When it asks you for the file, just hit Enter.
Please note that you should definitely enter a passphrase; when you type,
nothing will show up. This is normal, don't worry about it.

ssh-keygen -t rsa -C "zanotti"

Use Notepad to open up the .ssh/id_rsa.pub file you just generated and copy
the all of the contents of that file.

Click the link below to open up your Assembla profile which is where you'll
paste the public key you just copied from the previous step :
https://www.assembla.com/user/edit/edit_git_settings

Click "Add Key" after you've pasted the key into the box.

To create a new git space on Assembla :
https://www.assembla.com/spaces/Free_Git_Repository/prepare_copy?type=private


Ouvrez git et taper la commande suivante : 
ssh-keygen -t rsa -C "login"
Appuyez sur entrée pour le "file" et taper
2 fois votre mot de passe.

Allez a l'adresse suivante et taper le contenu
du fichier .ssh/id_rsa.pub dans le cadre :
https://www.assembla.com/user/edit/edit_git_settings
Cliquez sur le bouton Add Key.
Assembla confirme que cela s'est bien passé.

Tapez la commande suivante :
git clone git@git.assembla.com:projet_devint_2013.git

Cela va vous créer un dossier projet_devint_2013 avec
le contenu de ce qu'il y a en ligne.
C'est le .git qui est a l'intérieur qui fait que tout
se synchronise. Déplacer donc le contenu de ce dossier
et donc ce .git a l'endroit ou vous voulez que la
synchronisation se fasse.

Le projet dans eclipse doit s'appeler "DeViNT2013".
Il n'y aura aucun problème de librairies.
