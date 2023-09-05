# M5Stack Atom

## Introduction

Page de produit : [ATOM Lite ESP32 IoT Development Kit | m5stack-store](https://shop.m5stack.com/products/atom-lite-esp32-development-kit)

## Broches du Atom Lite

![Les broches du connecteur Grove du M5Stack Atom Lite](./m5stack_atom_broches.png) 

## Ajouter M5Stack à Arduino (à effectuer une fois)

### Ajouter le gestionnaire de carte d'ESP32

![Ouvrir les préférences et trouver la section «Additional boards manager URLs» en bas](./ajouter_m5stack1.SVG)

Voici l'URL à ajouter à l'étape suivante : 
```
https://espressif.github.io/arduino-esp32/package_esp32_index.json
```
![Ajouter l'URL «https://espressif.github.io/arduino-esp32/package_esp32_index.json»](./ajouter_m5stack2.SVG)

![Installer le gestionnaire de carte ESP32](./ajouter_m5stack3.SVG)

### Ajouter la librairie M5Atom

![Trouver la librairie M5Atom](./ajouter_m5atom1.SVG)

![Installer avec toutes les dépendances](./ajouter_m5atom2.SVG)

## Configurer Arduino (à vérifier à chaque utilisation)

![Configurer pour la bonne plateforme](./configurer_plateforme.png)

![Identifier le bon port (le numéro de COM risque d'être différent)](./trouver_port.svg)

![Configurer pour le bon port (le numéro de COM risque d'être différent)](./configurer_port.png)

## Code de base du Atom Lite

```arduino
{{#include ./m5stack_atom_lite_base/m5stack_atom_lite_base.ino}}
```

{{#include ./_grove_colors.md}}