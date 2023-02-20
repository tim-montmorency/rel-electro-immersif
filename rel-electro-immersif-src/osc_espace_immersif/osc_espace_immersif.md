# Objectif final


## Description de l'objectif final

Toute la matière de cette REL a été choisie et ordonnée pour diriger l'apprenant dans la réalisation d'un objectif final. Cet objectif est présenté ici, tout au début, pour donner un sens, une direction et une présentation de l'étendue des savoirs contenus dans cette ressource.

![Comment intégrer l'électronique à un espace immersif?](./integration_electro_espace.png)

Cette REL propose une solution pour l'intégration de l'électronique aux espaces immersifs dans un contexte de création multimédia. C'est-à-dire l’intégration de capteurs et actionneurs dans un grand espace où l'ordinateur multimédia, qui doit coordonner les aspects audiovisuels (les projections visuelles, les éclairages, les effets et les diffusions sonores), est distant. 

La solution proposée essaie de rester peu onéreuse et accessible tout en demeurant fiable (en éliminant les sources d’erreurs potentielles des communications) et très compatible avec les outils de création multimédia.

À cette fin, l’environnement de développement choisi est Arduino IDE, le modèle de carte l’Arduino Nano et le protocole de communication l’Open Sound Control (OSC).

À noter que cette documentation est entièrement compatible avec des cartes qui communiquent par Wi-Fi ou par Ethernet comme les cartes équipées d'ESP32. Les cartes Arduino ESP32 sont en effet à privilégier à long terme, mais elles sont plus difficiles à maitriser. Leur utilisation sera intégrée à cette ressource ultérieurement.

## Connectique OSC de l'objectif final

![Connectique OSC pour un espace immersif](./osc_espace_immersif_connectique.svg)

## Circuit électronique de l'objectif final

### Illustration du circuit électronique

![Illustration du circuit pour l'intégration de l'électronique à un espace immersif](./osc_espace_immersif_illustration.png)

### Schéma du circuit éléctronique

![Schéma du circuit pour l'intégration de l'électronique à un espace immersif](./osc_espace_immersif_schema.png)

## Code Arduino de l'objectif final

```arduino
{{#include MicroOsc_Demo_SLIP/MicroOsc_Demo_SLIP.ino}}
```