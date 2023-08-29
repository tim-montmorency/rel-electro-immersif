# Bouton du M5Stack Atom Lite

## Documentation de l'API officielle

La documentation officielle de l'API ici : [m5-docs](https://docs.m5stack.com/en/api/atom/button)

## Configuration dans *setup()*

Le bouton du M5Stack Atom Lite ne nécessite aucune configuration à ajouter dans *setup()*.

## Utilisation dans *loop()*

Valider si le bouton **a été** appuyé depuis le dernier *M5.update()* :
```arduino
if ( M5.Btn.wasPressed() ) {

}
```

Valider si le bouton **a été** relâché depuis le dernier *M5.update()* :
```arduino
if ( M5.Btn.wasReleased() ) {

}
```

Valider si le bouton est **présentement** appuyé :
```arduino
if ( M5.Btn.isPressed() ) {

}
```

Valider si le bouton est **présentement** relâché :
```arduino
if ( M5.Btn.isReleased() ) {

}
```

## Exemple de base pour le bouton

### Copier et coller ce code dans un nouveau document Arduino

```arduino
{{#include ./m5stack_atom_lite_bouton/m5stack_atom_lite_bouton.ino}}
```

### Observer les résultats dans le moniteur série

![Ouvrir et configuer le moniteur série pour voir les messages envoyés](./m5stack_atom_lite_bouton_moniteur_serie.svg)


**Astuce** : Commenter les lignes qui donne l'etat actuel du bouton pour garder seulement les lignes qui indiquent si le bouton **A ÉTÉ** relâché ou appuyé. Cela va réduire considérablement la quantité de messages.

