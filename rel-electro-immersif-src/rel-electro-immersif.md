# Notes de cours sur l'intégration de l'électronique aux espaces immersifs

## Description

Cette ressource éducative libre (REL) regroupe des **notes de cours** (et non une documentation exhaustive) sur l'intégration de l'électronique aux espaces immersifs dans un contexte de création multimédia. C'est-à-dire l’intégration de capteurs et actionneurs dans un grand espace où l'ordinateur multimédia, qui doit coordonner les aspects audiovisuels (les projections visuelles, les éclairages, les effets et les diffusions sonores), est distant.

## Crédits

Ce projet a été initié en 2022 par [Thomas O Fredericks](http://t-o-f.info) avec la collaboration de Guillaume Arseneault, tous les deux professeurs au département de [Techniques d'intégration multimédia](https://www.cmontmorency.qc.ca/programmes/nos-programmes-detudes/techniques/techniques-dintegration-multimedia/description-du-programme/) du [Collège Montmorency](https://www.cmontmorency.qc.ca/).

Sa réalisation a été rendue possible grâce à un financement de la [fabrique REL](https://fabriquerel.org/rel/).

## Licence

 [Ressource éducative libre (REL) sur l'intégration de l'électronique aux espaces immersifs](https://tim-montmorency.com/rel-electro-immersif/), sous la responsabilité de [Thomas O Fredericks](http://t-o-f.info), est partagée sous la licence [Attribution - Pas d’Utilisation Commerciale 4.0](creativecommons.org/licenses/by-nc/4.0/?ref=chooser-v1)
![CC BY NC](./cc_by_nc.png)

##  Version

Cette ressource éducative libre a été conçue pour grandir et évoluer de façon continue. Vous trouverez la version la plus à jour et en développement à l'adresse suivante : [tim-montmorency.com/rel-electro-immersif](https://tim-montmorency.com/rel-electro-immersif/)

À des fins d'archivage, des versions sont sporadiquement publiées :
* Version 1, publiée le 1 mars 2023 : [tim-montmorency.com/rel-electro-immersif/v1](https://tim-montmorency.com/rel-electro-immersif/v1)


## Conventions de documentation

Les noms de variables qui sont destinées à être créées par l'utilisateur doivent être précédés de *mon* ou *ma* pour les différencier des noms réservés du langange de programmation.

Exemples :

```arduino
int maBrocheDel = 10;
```

```arduino
void monTraiterMessage( microOscMessage monMessageOsc ) {
	...
}
```

```arduino
MicroOsc monMicroOsc;
```

## Références 

* [Learn at SparkFun Electronics - SparkFun Learn](https://learn.sparkfun.com/)
* [Adafruit Learning System](https://learn.adafruit.com/)
* [Arduino à l'école 2022 (PDF)](./pdf/arduino_a_l_ecole-2022.pdf)
* [Le blog d'Eskimon](https://eskimon.fr/)
* [Arduino : premiers pas en informatique embarquée • Tutoriels • Zeste de Savoir](https://zestedesavoir.com/tutoriels/686/arduino-premiers-pas-en-informatique-embarquee/)
* [SOUDER C'EST FACILE (PDF)](./pdf/bd_soudure.pdf)
* [The Illustrated Arduino de 16Hz (PDF)](./pdf/16hz_the_illustrated_arduino.pdf)

## Technologies utilisées pour la réalisation de cette ressource

* [mdBook](https://rust-lang.github.io/mdBook/) pour convertir les textes du format Markdown au format HTML.
* [GitHub Actions](https://docs.github.com/en/actions) pour automatiser le déploiement des fichiers sources au site [tim-montmorency.com/rel-electro-immersif](https://tim-montmorency.com/rel-electro-immersif/).
* [Fritzing](https://fritzing.org/) pour le dessins de circuits.
* Du JavaScript sur mesure pour ajouter automatiquement la description des figures sous celles-ci et pour ajouter une petite table des matières lorsque le contenu l'exige.
* [GLightbox](https://github.com/biati-digital/glightbox) pour permettre l'intégration de la lecture des vidéos directement dans le site.
