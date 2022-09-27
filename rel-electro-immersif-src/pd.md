# Pure Data

## Réception et envoi d'OSC SLIP dans Pure Data

### Installation des objets pour l'OSC SLIP

Pour faire fonctionner l'OSC SLIP il est nécessaire d'ajouter des collections d'objets à Pure Data:
* mrpeach
* comport
* cyclone (pas absolument nécessaire mais très utile)

![Ouvrir le menu d'installation des objets supplémentaires](./pd/pd_installer_objets_supplementaires.svg)

![Installer mrpeach](./pd/pd_installer_mrpeach.svg)

![Installation de mrpeach réussie](./pd/pd_installation_mrpeach_reussie.svg)

![Installer cyclone](./pd/pd_installation_cyclone.svg)

![Installation de cyclone réussie](./pd/pd_installation_cyclone_reussie.svg)

![Installer comport](./pd/pd_installation_comport.svg)

![Installation de comport réussie](./pd/pd_installation_comport_reussie.svg)


### Relais de messages OSC SLIP <-> UDP

[![osc_slip_relay_udp.pd](./pd/pd_osc_slip_relay_udp.svg)](./pd/osc_slip_relay_udp.pd)	


### Relais de messages OSC SLIP <-> MIDI

#### Configuration MIDI

![Ouvrir les paramètres MIDI](./pd/pd_ouvrir_parametres_midi.svg)

![Configuration MIDI pour l'utilisation de loopMIDI](./pd/pd_configurer_midi_loopmidi.svg)

[![Exemple osc_slip_midi.pd](./pd/pd_osc_slip_midi.svg)](./pd/osc_slip_midi.pd)


![Exemple d'envoi et de réception du MIDI dans VCV Rack](./pd/pd_osc_slip_midi_vcv_rack.svg)
