# OSC SLIP

## Scénario

## Solutions de connectique

Il existe plusieurs scénarios de connectique possible. Les trois scénarios suivants sont détaillés dans les prochaines pages.

### Avec une application qui supporte directement l'OSC SLIP

![Scénario de connectique à une application qui supporte directement l'OSC SLIP](./osc_slip_connectique_directe.svg)

### Avec une application qui supporte l'OSC UPD à l'aide d'un relais OSC SLIP ⇄ OSC UDP

![Schématisation de la chaîne de connectique OSC SLIP ⇄ OSC UDP](../osc_espace_immersif/osc_espace_immersif_connectique.svg)

### Avec une application qui supporte le MIDI à l'aide d'un relais OSC SLIP ⇄ MIDI

![Schématisation de la chaîne de connectique OSC SLIP ⇄ MIDI](./osc_slip_connectique_midi.svg)

## Circuit pour réaliser le scénario de connectique

### Schéma du circuit
![Schéma d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_schema.png)

### Illustration du circuit
![Illustration d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_illustration.png)

## Code OSC SLIP avec MicroOsc pour réaliser le scénario

```arduino
{{#include ../osc_espace_immersif/osc_espace_immersif/osc_espace_immersif.ino}}
```