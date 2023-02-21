# Relais OSC SLIP ⇄ MIDI avec Pure Data

Cette section propose une solution pour connecter une carte Arduino qui communique en SLIP avec n'importe quelle application MIDI.

![Schématisation de la chaîne de connectique OSC SLIP ⇄ MIDI](../osc_slip/osc_slip_connectique_midi.svg)

## Prérequis

Cette solution nécessite l'installation de **Pure Data** et d'y ajouter des objets pour l'OSC SLIP : voir la section [OSC SLIP avec Pure Data](./osc_slip.md).

## Configuration MIDI de Pure Data

![Ouvrir les paramètres MIDI](./pd_ouvrir_parametres_midi.svg)

![Configuration MIDI pour l'utilisation de loopMIDI](./pd_configurer_midi_loopmidi.svg)

## Patcher pour le relais de messages OSC SLIP <-> MIDI

[![Exemple osc_slip_midi.pd (cliquer pour télécharger)](./pd_osc_slip_midi.svg)](./osc_slip_midi.pd)

## Exemple d'envoi et de réception du MIDI dans VCV Rack

![Exemple d'envoi et de réception du MIDI dans VCV Rack](./pd_osc_slip_midi_vcv_rack.svg)

