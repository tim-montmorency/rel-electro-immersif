# OSC SLIP

## Scénario

![La question se poser sur comment relier l'Arduino à l'espace immersif?](./scenario_problematique.svg)

## Solutions de connectique

![L'OSC SLIP permet de connecter un Arduino avec une application multimédia à travers sa prise USB](./scenario_multimedia.svg)

Cette solution se décline en deux implémentations :
* Avec une application qui supporte directement l'OSC SLIP.
* Avec une application qui supporte l'OSC UPD à l'aide d'un relais OSC SLIP ⇄ OSC UDP.

### Dans le cas d'une application qui supporte directement l'OSC SLIP

![Scénario de connectique à une application qui supporte directement l'OSC SLIP](./osc_slip_connectique_directe.svg)

### Dans le cas d'une application qui supporte l'OSC UPD à l'aide d'un relais OSC SLIP ⇄ OSC UDP

![Schématisation de la chaîne de connectique OSC SLIP ⇄ OSC UDP](../osc_espace_immersif/osc_espace_immersif_connectique.svg)

## Circuit de démonstration

### Schéma du circuit
![Schéma d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_schema.png)

### Illustration du circuit
![Illustration d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_illustration.png)

## Code OSC SLIP avec MicroOsc pour la démonstration

```arduino
{{#include ../osc_espace_immersif/MicroOsc_Demo_SLIP/MicroOsc_Demo_SLIP.ino}}
```