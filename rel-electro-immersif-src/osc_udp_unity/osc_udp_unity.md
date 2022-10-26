# OSC UDP: Unity

## Relais SLIP à UDP avec Pure Data

![Shéma illustrant le relais SLIP à UDP avec Pure Data](osc_slip_pd_udp_unity.svg)

* Circuit et code Arduino : [OSC SLIP avec MicroOsc](./osc_slip/osc_slip.md)
* Code Pure Data : [Relais OSC UDP avec PD](./pd/relais_osc_slip_udp.md)

## Installation d'OSCJackVS dans Unity

Nous utilisons [OSCJackVS](https://github.com/keijiro/OscJackVS) de Keijiro pour traiter les messages OSC UDP dans Unity. 

![Ajoutez le régistre de paquets de Keijiro](./Diapositive1.SVG)

![Installez OSCJackVS](./Diapositive2.SVG)

![Au besoin regénérez les Visual Scripting Nodes pour intégrer le code d'OSCJackVS](./Diapositive7.SVG)

![Créez une connexion](./Diapositive3.SVG)

![Renommez et configurez la connexion](./Diapositive4.SVG)

## Assignation du message /pot à la rotation d'un cylindre

![Créez un cylindre et un nouveau Script Graph](./Diapositive5.SVG)

![Ajoutez le code pour recevoir le message /pot et l'assigner à la rotation du cylindre](./Diapositive6.SVG)