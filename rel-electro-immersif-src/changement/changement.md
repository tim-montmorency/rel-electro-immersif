# Détecter un changement de valeur

## Organigramme pour l'envoi de la valeur d'une entrée numérique seulement si elle change

![Organigramme pour l'envoi lors d'un changement](./interrupteur_changement_de_valeur.svg)

## Extraits de code pertinents

Pour détecter un changement de valeur, il faut : 
1) Créer un variable pour se souvenir de la valeur précédente:
```arduino
int maValeurPrecedente; // VALEUR PRÉCÉDENTE DE L'ENTRÉE NUMÉRIQUE
```
2) Aller chercher la nouvelle valeur.
3) Comparer la nouvelle valeur avec la précédente:
```arduino
if ( maNouvelleValeur != maValeurPrecedente ) { // SI LA NOUVELLE VALEUR EST DIFFERENTE DE LA PRÉCÉDENTE
	// FAIRE QQCH
}
```
4) Mettre en mémoire la nouvelle valeur:
```arduino
maValeurPrecedente = maNouvelleValeur; // METTRE EN MÉMOIRE LA NOUVELLE VALEUR
```

## Exemple : envoyer la valeur d'une entrée numérique seulement si elle change


```arduino
int maBrocheEntreeNumerique = 4;
int maValeurPrecedente; // VALEUR PRÉCÉDENTE DE L'ENTRÉE NUMÉRIQUE

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBrocheEntreeNumerique , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  int maNouvelleValeur = digitalRead( maBrocheEntreeNumerique ); // LECTURE DE TENSION
  if ( maNouvelleValeur != maValeurPrecedente ) { // SI LA NOUVELLE VALEUR EST DIFFERENTE DE LA PRÉCÉDENTE     
      Serial.print( maNouvelleValeur ); // ENVOYER LA VALEUR
      Serial.println();  // TERMINER LE MESSAGE
   }
    maValeurPrecedente = maNouvelleValeur; // METTRE EN MÉMOIRE LA NOUVELLE VALEUR

}
```
