# Pixel du M5Stack Atom Lite

## Librairies

Le contrôle du pixel du M5Stack Atom Lite nécessite les librairies suivantes :
- M5Atom
- FastLED 

## À ajouter dans l'espace *global* (au début du code)

Ajouter FastLED et un tableau de pixel :
```arduino
// Inclure la librairie FastLED qui va gérer le pixel :
// https://github.com/FastLED/FastLED
#include <FastLED.h>

// Un tableau qui contient une variable de type CRGB.
// Il y a un seul pixel, mais il doit être dans un tableau.
// CRGB est un type de couleur défini par la lirairie FastLed :
// https://github.com/FastLED/FastLED/wiki/Pixel-reference#crgb-reference
CRGB mesPixels[1];
```

## Configuration dans *setup()*

À ajouter dans *setup* :
```arduino
  // Ajouter le pixel (il y en a un seul) du M5Atom à la librairie FastLED :
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(mesPixels, 1);
```

## Utilisation dans *loop()*

Pour changer la couleur du pixel, il faut changer la valeur des trois couleur du premier pixel du tableau :
```arduino
  // Changer la couleur du premier pixel pour le blanc :
  mesPixels[0].red = 255;
  mesPixels[0].green = 255;
  mesPixels[0].blue = 255;
```

Après, il faut envoyer la mise à jour des couleurs des pixels à FastLED :
```arduino
    // Mettre à jour le pixel :
    FastLED.show();
```

## Exemple de code avec une couleur fixe

Copier et coller ce code dans un nouveau document Arduino :
```arduino
{{#include ./m5stack_atom_lite_pixel/m5stack_atom_lite_pixel.ino}}
```

## Exemple de code avec une couleur aléatoire entre le rouge et l'orange

Copier et coller ce code dans un nouveau document Arduino :
```arduino
{{#include ./m5stack_atom_lite_pixel_chandelle/m5stack_atom_lite_pixel_chandelle.ino}}
```
