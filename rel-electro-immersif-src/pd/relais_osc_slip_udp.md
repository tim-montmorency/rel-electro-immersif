# Relais OSC SLIP ⇄ OSC UDP avec Pure Data

Pure Data peut être utilisé pour relayer les messages OSC entre une source SLIP et une source UDP. Cela permet d'ajouter la communication OSC UDP à un microcontrôleur qui ne possède d'habitude pas cette capacité.

![Scénario de connectique OSC SLIP ⇄ OSC UDP](../osc_slip/osc_slip_connectique.svg)


## Prérequis

Assurez-vous d'avoir suivi les instruction dans la section [OSC SLIP avec Pure Data (PD)](./osc_slip.md).


## Patcher Pure Data pour le relais des messages OSC SLIP ⇄ UDP 


![Capture d'écran du patcher «osc_slip.pd» (l'opacité du code optionnel a été réduite)](./osc_slip_pd_relay.svg)

[![Cliquez pour télécharger «osc_slip.pd»](../fichier_zip.png)](./osc_slip.pd)