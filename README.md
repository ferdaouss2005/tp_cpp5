# tp_cpp5
# Exercice 1 : Compteur d’objets

<img width="176" height="59" alt="image" src="https://github.com/user-attachments/assets/6ede10d4-69e0-4762-83cc-06663974c1bd" />

Dans cet exercice, j’ai créé une classe `Boite` contenant trois attributs : la longueur, la largeur et la hauteur. J’ai utilisé un attribut statique `nbBoites` pour compter le nombre d’objets créés. J’ai implémenté un constructeur qui initialise les dimensions et incrémente le compteur à chaque création d’un objet, ainsi qu’un destructeur qui décrémente le compteur lors de sa destruction. J’ai également ajouté une méthode statique `getNombreBoites()` pour retourner le nombre total de boîtes existantes. Cet exercice m’a permis de comprendre l’utilisation des attributs statiques, des constructeurs et des destructeurs.

---

# Exercice 2 : Taux de TVA partagé

<img width="376" height="391" alt="image" src="https://github.com/user-attachments/assets/9626bca3-8706-4ee4-8ec8-ebf59cfd1951" />

<img width="161" height="71" alt="image" src="https://github.com/user-attachments/assets/6aad546d-cc0c-41a9-9304-f41136e48e42" />


Dans cet exercice, j’ai créé une classe `Produit` contenant le nom et le prix hors taxe (HT). J’ai utilisé un attribut statique `tauxTVA`, initialisé à 20 %, pour appliquer un taux de TVA commun à tous les produits. J’ai implémenté une méthode `getPrixTTC()` pour calculer le prix toutes taxes comprises et une méthode statique `modifierTVA()` pour modifier le taux de TVA pour tous les objets. Dans la fonction `main()`, j’ai créé plusieurs produits, affiché leurs prix TTC, modifié le taux de TVA et affiché les nouveaux prix. Cet exercice m’a permis de comprendre le partage des attributs statiques entre plusieurs objets.

---

# Exercice 3 : Gestion des sessions utilisateurs

Dans cet exercice, j’ai créé une classe `Utilisateur` contenant le nom et le rôle de chaque utilisateur. J’ai utilisé un attribut statique privé `nbUtilisateursConnectes` pour suivre le nombre d’utilisateurs actuellement connectés. J’ai implémenté un constructeur qui incrémente le compteur lors de la connexion d’un utilisateur et un destructeur qui le décrémente lors de sa déconnexion. J’ai également ajouté une méthode statique `getNbUtilisateursConnectes()` pour accéder au nombre d’utilisateurs connectés. Dans la fonction `main()`, j’ai utilisé les pointeurs, `new` et `delete` pour simuler les connexions et les déconnexions de plusieurs utilisateurs. Cet exercice m’a permis de comprendre les attributs statiques, les méthodes statiques et la gestion dynamique de la mémoire en C++.
