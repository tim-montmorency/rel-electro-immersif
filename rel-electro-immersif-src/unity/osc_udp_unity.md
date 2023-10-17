# OSC UDP : Unity

## Préalables

Pour envoyer de l'OSC UDP à Unity, vous devez utiliser l'une des solutions suivantes :
* **de préférence** un microcontrôleur avec une connexion WiFI ou Ethernet qui peut communiquer en UDP ; dans ce cas, vous pouvez utilisez [MicroOsc UDP](../osc_udp/osc_udp.md).
* **sinon** un microcontrôleur avec une connexion série ; dans ce cas, vous pouvez utilisez [MicroOsc SLIP](../osc_slip/osc_slip.md) ainsi qu'un logiciel permettant de faire le relais SLIP à UDP :  [relais avec PD](../pd/relais_osc_slip_udp.md) ou [relais avec Max](../max/relais_osc_slip_udp.md).



## Solution C# avec le paquet extOSC

Trouvez «extOSC» dans l'[Asset Store](https://assetstore.unity.com/) (n'oubliez pas de vous connecter avec votre compte Unity avant) :
![Recherche pour «extOSC» dans l'Asset Store](./extosc_install1.png)

Cliquez le bouton pour ajouter «extOSC» à vos *assets* et cliquez de nouveau sur le bouton pour ouvrir l'*asset* dans Unity :
![Acquisistion du paquet «extOSC»](./extosc_install2.png)

Téléchargez le paquet «extOSC» à partir du gestionnaire de paquet :
![«extOSC» dans le gestionnaire de paquet](./extosc_install3.png)

Cliquez le bouton pour importer le paquet «extOSC» :
![«extOSC» a été téléchargé](./extosc_install4.png)

Installez toutes les dépendances :
![Boîte de dialogue sur l'installation des dépendances](./extosc_install5.png)

Importez tous les *assets* :
![Boîte de dialogue sur les assets à importer](./extosc_install6.png)

Vous devriez maintenant trouver *extOSC* dans vos *assets* :
![«extOSC» dans les Assets du projet](./extosc_install7.png)

## Solution Visual Scripting avec le paquet OSCJackVS

Nous utilisons [OSCJackVS](https://github.com/keijiro/OscJackVS) de Keijiro pour traiter les messages OSC UDP dans Unity.

Voici l'information à inscrire dans les paramètres du gestionnaire de paquets (voir figure ci-bas) :
* Name: `Keijiro`
* URL: `https://registry.npmjs.com`
* Scope: `jp.keijiro`


![Ajoutez le régistre de paquets de Keijiro](./Diapositive1.SVG)

![Installez OSCJackVS](./Diapositive2.SVG)

![Au besoin regénérez les Visual Scripting Nodes pour intégrer le code d'OSCJackVS](./Diapositive7.SVG)

![Créez une connexion](./Diapositive3.SVG)

![Renommez et configurez la connexion](./Diapositive4.SVG)

### Assignation du message /pot à la rotation d'un cylindre

![Créez un cylindre et un nouveau Script Graph](./Diapositive5.SVG)

![Ajoutez le code pour recevoir le message /pot et l'assigner à la rotation du cylindre](./Diapositive6.SVG)