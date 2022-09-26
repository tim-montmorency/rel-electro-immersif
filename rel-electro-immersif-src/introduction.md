# Ressource éducative libre (REL) sur l'intégration de l'électronique aux espaces immersifs

## Introduction

Ce projet a été initié par Thomas Ouellet Fredericks. Il a été rendu possible par un financement de la [fabrique REL](https://fabriquerel.org/rel/).

C'est une documentation **vivante**.

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

## Technologies utilisées


* [mdBook](https://rust-lang.github.io/mdBook/) pour convertir les textes du format Markdown au format HTML.
* [GitHub Actions](https://docs.github.com/en/actions) pour automatiser le déploiement des fichiers sources au site [tim-montmorency.com/rel-electro-immersif](https://tim-montmorency.com/rel-electro-immersif/).
* Du JavaScript sur mesure pour ajouter automatiquement la description des figures sous celles-ci.
* [GLightbox](https://github.com/biati-digital/glightbox) pour permettre l'intégration de la lecture des vidéos directement dans le site.