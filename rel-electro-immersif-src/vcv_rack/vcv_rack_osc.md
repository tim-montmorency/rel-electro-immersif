# OSC avec VCV Rack

Il existe quelques modules OSC pour VCV Rack, mais nous trouvons que le module **cvOSCcv** est le plus configurable. 

## Installation de cvOSCcv

En date du 4 octobre 2022, le module **cvOSCcv** n'est plus disponible dans le [gestionnaire de librairies de VCV Rack](https://library.vcvrack.com/). 

Heureusement, l'adaption pour la version 2 est mode béta sur le [GitHub de cvOSCcv](https://github.com/j4s0n-c/trowaSoft-VCV/releases). Ouvrez la section *Assets* de la dernière version (*release*) et téléchargez la version pour votre OS.
![Téléchargement de la dernière version béta de cvOSCcv dans les Assets de la dernière version](./github_cvosccv.png)

Pour installer **cvOSCcv**, copiez le dossier *trowaSoft* dans le dossier *plugins* des documents de VCV Rack 2 (*Vos Documents > Rack2 > plugins*).

![Copier le dosssier «trowaSoft» dans le dossier «Mes Documents > Rack2 > plugins»](./install_cvosccv_rack2_plugins.png)

Redémarrez VCV Rack et vous devriez trouver **cvOSCcv** dans la liste des modules:
![Recherche de «cvOSCcv» dans la liste des modules dans VCV Rack](./cvosccv_dans_la_liste_des_modules.png)

### Configuration de cvOSCcv


![Configuration générale](./cvosccv_configuration_generale.svg)

![Configurer les adresses des messages](./cvosccv_adresses.svg)

![Configuration de la réception de messages analogiques](./cvosccv_configurer_reception_messages.svg)

![Configuration de la réception du messages numérique](./cvosccv_configurer_reception_message_numerique.svg)

![Configuration de l'envoi de messages](./cvosccv_configurer_envoi_messages.svg)

![Démarrer la connexion OSC](./cvosccv_demarrer.svg)

![Visualisation des messages OSC](./cvosccv_visualisation_messages.svg)