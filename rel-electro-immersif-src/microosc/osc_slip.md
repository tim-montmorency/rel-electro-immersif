# OSC SLIP : MicroOsc

## Problématique

![Illustration de la problématique : comment relier l'Arduino à l'espace immersif?](./scenario_problematique.svg)

Nous voulons une méthode robuste, fiable et universelle pour l'intégration de l'Arduino à l'espace immersif dans un contexte de création multimédia. C'est-à-dire l’intégration de capteurs et actionneurs dans un grand espace où l'ordinateur multimédia, qui doit coordonner les aspects audiovisuels (les projections visuelles, les éclairages, les effets et les diffusions sonores), est distant.

![Illustration des problèmes techniques sur la connectique USB](./scenario_multimedia.svg)

## Solution de connectique

La solution proposée essaie de rester peu onéreuse et accessible tout en demeurant fiable (en éliminant les sources d’erreurs potentielles des communications) et très compatible avec les outils de création multimédia.

Dans cette optique, nous choisissons d'utiliser le protocole [OSC](../osc/osc.html). La plupart des protocoles (COBS, JSON, FUDI, etc.) permettent une trop grande latitude dans la manière d'organiser les données, et s'appuient donc sur des architectures personnalisées spécifiques à chaque développeur. L'OSC impose une structure particulière de l'information que toutes les applications doivent supporter ce qui rend toute communication plus universelle : tout le monde parle la même langue!

Idéallement, nous utiliserions l'OSC UDP qui voyage par Ethernet. Cependant, parfois un réseau est inacessible ou même certains microcontrôleurs ne possèdent pas de connecteur Ethernet (ou Wi-Fi) et ne permettent pas d'envoyer des messages OSC UDP. Il est donc nécessaire d'utiliser des messages OSC SLIP, qui voyagent par USB série, et de communiquer avec une application qui supporte OSC SLIP ou de relayer les mesages OSC SLIP en OSC SLIP avec des relais OSC SLIP ⇄ UDP.

![Schéma de connectique OSC SLIP et du relais OSC SLIP ⇄ UDP](./osc_slip_connectique.svg)

## Connexion sérielle

### Code à ajouter à *setup()*

Il est nécessaire d'initialiser la communication sérielle si elle ne l'a pas été faite avec `Serial.begin(115200);`.

## MicroOsc SLIP

### Code à ajouter à l'espace global

Il faut ajouter la bibliothèque *MicroOscSlip* qui fait partie de *MicroOsc* et initialiser une instance de MicroOscSlip : 
```arduino
#include <MicroOscSlip.h>
// The number 64 between the < > below  is the maximum number of bytes reserved for incomming messages.
// Outgoing messages are written directly to the output and do not need more reserved bytes.
MicroOscSlip<64> myMicroOsc(&Serial);
```

{{#include ./_osc_common.md}}


## Exemple MicroOsc SLIP pour M5Stack Atom Lite

L'exemple suivant montre comment envoyer et recevoir de l'OSC SLIP avec un Atom Lite. 

Messages reçus par l'Arduino :
- `/led int` -> éteint (0) ou allume (1) le pixel en blanc
- `/pixel int int int` -> change la couleur RGB (0-255 pour chaque couleur)

Messages envoyés par l'Arduino :
- `/pot int` -> envoie la valeur de rotation du M5Stack Agnle Unit
- `/button int` -> envoie un 1 si le bouton est appuyé et un 0 sinon

### Composants requis

* [M5Stack Atom Lite](../m5stack/atom_lite.html)
* [M5Stack Angle Unit](../m5stack/unit_angle.html)

### Code

```arduino
{{#include ./m5stack_atom_lite_microosc_slip/m5stack_atom_lite_microosc_slip.ino}}
```

## Exemple MicroOsc SLIP pour Arduino Nano (ou similaire)

### Composants requis

* Arduino Nano (ou similaire)
* Potentiomètre
* Photorésistance et résitance adéquate
* Bouton d'arcade illuminé


### Schéma du circuit
![Schéma d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_schema.png)

### Illustration du circuit
![Illustration d'un circuit avec un bouton d'arcade illuminé, une photorésistance et un potentiometre](../osc_espace_immersif/osc_espace_immersif_illustration.png)

### Code OSC SLIP avec MicroOsc pour la démonstration

```arduino
{{#include ../osc_espace_immersif/MicroOsc_Demo_SLIP/MicroOsc_Demo_SLIP.ino}}
```