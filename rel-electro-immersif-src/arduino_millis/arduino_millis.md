# Mesurer le temps avec millis()

La fonction millis() permet de résoudre ce problème. Elle retourne le temps en millisecondes depuis le début de démarrage de votre Arduino. 

Jusqu'à présent, vous avez déclaré des variables comme étant des int. Un int est un nombre de 16 bits, il contient des valeurs comprises entre -32 768 et 32 767. Si l'Arduino compte en millisecondes, vous manquerez d'espace en moins d'une minute. 

Le type de données long peut contenir un nombre de 32 bits (entre -2 147 483 648 et 2 147 483 647). Comme vous ne pouvez pas exécuter le temps à rebours pour obtenir des nombres négatifs, nous utiliser le type unsigned long pour stocker le temps. Lorsqu'un type de données est appelé non signé, il est que positif. Cela vous permet de compter avec des valeurs encore plus grandes. Un unsigned long peut compter jusqu'à 4 294 967 295. C’est assez d’espace pour stocker le temps pendant près de 50 jours. En comparant le millis() actuel à une valeur spécifique, vous pouvez voir si un certain temps s'est écoulé.

Déclarer un variable pour récupérer le temps:
```cpp
unsigned long tempsEcoule;
```

Mettre le temps dans la variable `tempsEcoule`:
```cpp
tempsEcoule = millis();
```
