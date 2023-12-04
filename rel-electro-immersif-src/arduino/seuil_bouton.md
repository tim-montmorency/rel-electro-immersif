# Détection de seuil d'un bouton

## Code à intégrer dans l'espace global (avant *setup()*)

Créer une variable pour la valeur précédente du bouton:
```arduino
int monBoutonValeurPrecedente;
```

## Code à intégrer dans *setup()*.

Il n'y a rien de particulier à ajouter dans *setup()*.

## Code à intégrer dans la boucle de mise à jour de *loop()*

### 1) Récupérer la valeur

Utiliser l'une des options suivantes selon le type d'entrée.

#### Option A) Entrée simple

```arduino
int monBoutonValeurNouvelle = digitalRead( monBoutonBroche );
```

#### Option B) Bouton du M5Stack Atom

```arduino
int monBoutonValeurNouvelle = M5.Btn.isReleased();
```


### 2) Effectuer la détection de seuil

```arduino
if ( monBoutonValeurNouvelle != monBoutonValeurPrecedente ) { // SI LA NOUVELLE VALEUR EST DIFFERENTE DE LA PRÉCÉDENTE     
      // EXÉCUTER DU CODE ICI

}
monBoutonValeurPrecedente = monBoutonValeurNouvelle; // METTRE EN MÉMOIRE LA NOUVELLE VALEUR
```