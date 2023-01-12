# Bande de DEL

## Préparation

![Couper une bande de DEL](./Diapositive1.SVG)

![Enlevez soigneusement le revêtement sur la partie cuivrée coupée](./Diapositive2.SVG)

![Effectuez la soudure de 3 connexions : GND, DI et +12v](./Diapositive3.SVG)

![Ajoutez une deuxième connexion au GND (pour un total de 4 connexions)](./Diapositive4.SVG)

## Modèles

Le modèle de bande de DEL que nous utilisons <!-- uniformiser nous ou on  -->est le WS281X (le X indique que le dernier chiffre n’est pas important). Elle fonctionne avec une tension d'alimentation à 12V.

Elle est aussi connue sous le nom de **NeoPixel**, parce qu’elle a été popularisé <!-- popularisée -->en Amérique par la compagnie Adafruit qui la baptisé <!-- l'a baptisée  -->ainsi. Adafruit fournit [plusieurs modèles de NeoPixel](https://www.adafruit.com/category/168). Cependant, les NeoPixels fonctionnent à 5V. Toutefois le système de contrôle est identique à celui de la bande de DEL que nous utilisons. <!-- virgule après toutefois et bande de DEL utilisée plutôt que nous utilisons  -->

![Différents modèles de bandes de DEL](./bande_del_modeles.svg)


## Ordre des couleurs des DEL

Pour chaque modèle de bande de DEL, les couleurs sont disposées dans un certain ordre: RGB, GRB, BGR, etc. **Dans notre cas, l'ordre est : RGB**

## Broches

Les NeoPixels possèdent au moins 3 broches qui doivent toutes être connectées :
* GND
* Alimentation (5V, 12V ou 24V selon les modèles)
* Entrée de données (*Data In*)

Les WS281X 12V possèdent 4 broches (la broche supplémentaire est optionnelle) :
* **GND**
* **+12V** pour l'alimentation
* **DI** pour l'entrée de données
* **BI** qui est optionnel et utilisé seulement en cas de bris d'un segment

## Branchement

![Attention, les bandes de DEL ont un sens: connectez vous du côté du DI (Data Input) et non du DO!](./bande_del_sens.svg)

![Alimentez la bande de DEL avec l’alimentation 12v](./Diapositive5.SVG)

![Peu-importe le modèle, la connectique est similaire](./bande_del_connectique.svg)

![Les bandes peuvent être allongées en connectant les DO aux DI des bandes suivantes](./bande_del_extension_schema.svg)

![Peu importe le nombre de broches, le nombre de pixels peut ainsi être augmenté](./bande_del_extension.svg)

### Bonnes pratiques

Adafruit recommande les bonnes pratiques de connexion suivantes : [Best Practices | Adafruit NeoPixel Überguide | Adafruit Learning System](https://learn.adafruit.com/adafruit-neopixel-uberguide/best-practices)

## Bibliothèques

**Les bibliothèques de DEL supportent souvent plusieurs modèles. Assurez-vous que vous sélectionnez le bon modèle dans le code!** <!-- uniformiser la façon de s'adresser au lecteur  -->

Les deux bibliothèques les plus populaires sont:
* [Adafruit NeoPixel](https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-neopixels) : NeoPixel est plus simple à utiliser mais moins performante.
* [FastLED](https://github.com/FastLED/FastLED) : FastLED est plus performante, mais plus compliquée à utiliser. Cette bibliothèque présente aussi les meilleurs exemples.

## Bibliothèque FastLED

![Installation de la bibliothèque FastLED et où trouver les exemples](./Diapositive6.SVG)

Exemples intéressants à essayer:
* Cylon
* TwinkleFox
* Fire2021
* DemoReel100

Dans **chaque** exemple, vous devez vous assurer que la configuration est adéquate : <!-- uniformiser la façon de s'adresser au lecteur  -->
* Que le DATA_PIN ou LED_PIN corresponde à la broche Arduino qui est connectée à la broche DI de la bande. 
* Que NUM_LEDS corresponde au nombre de DEL de votre bande <!-- uniformiser si un point à la fin ou non  -->
* Que COLOR_ORDER corresponde à l’ordre des couleurs RGB



