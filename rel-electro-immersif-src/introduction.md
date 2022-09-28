# Ressource éducative libre (REL) sur l'intégration de l'électronique aux espaces immersifs

Ce projet a été initié en 2022 par Thomas Ouellet Fredericks avec la collaboration de Guillaume Arseneault.

Sa réalisation a été rendue possible grâce à un financement de la [fabrique REL](https://fabriquerel.org/rel/).

### Licence

[Ressource éducative libre (REL) sur l'intégration de l'électronique aux espaces immersifs](https://tim-montmorency.com/rel-electro-immersif/), sous la responsabilité de [Thomas O Fredericks](http://t-o-f.info), est partagée sous la licence [Attribution - Pas d’Utilisation Commerciale 4.0](creativecommons.org/licenses/by-nc/4.0/?ref=chooser-v1)
![CC BY NC](./cc_by_nc.png)

## REL vivante

Ce site Web est une ressource éducative libre **vivante**. C'est à dire qu'elle a été conçue pour grandir et évoluer de façon continue.


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

* SparkFun
* [Arduino à l'école 2022 (PDF)](./pdf/arduino_a_l_ecole-2022.pdf)
* [Le blog d'Eskimon](https://eskimon.fr/)
* [Arduino : premiers pas en informatique embarquée • Tutoriels • Zeste de Savoir](https://zestedesavoir.com/tutoriels/686/arduino-premiers-pas-en-informatique-embarquee/)
* [SOUDER C'EST FACILE (PDF)](./pdf/bd_soudure.pdf)
* [The Illustrated Arduino de 16Hz (PDF)](./pdf/16hz_the_illustrated_arduino.pdf)

## Technologies utilisées pour la réalisation de cette ressource


* [mdBook](https://rust-lang.github.io/mdBook/) pour convertir les textes du format Markdown au format HTML.
* [GitHub Actions](https://docs.github.com/en/actions) pour automatiser le déploiement des fichiers sources au site [tim-montmorency.com/rel-electro-immersif](https://tim-montmorency.com/rel-electro-immersif/).
* Du JavaScript sur mesure pour ajouter automatiquement la description des figures sous celles-ci.
* [GLightbox](https://github.com/biati-digital/glightbox) pour permettre l'intégration de la lecture des vidéos directement dans le site.