Créez une variable pour mesurer le temps pour contrôler la vitesse à laquelle nous envoyons les messages:
```arduino
unsigned long myChronoStart = 0;  // VARIABLE USED TO LIMIT THE SPEED OF THE SENDING OF OSC MESSAGES
```


### Fonction personnalisée à ajouter avant *loop()*

Il est nécessaire de définir une fonction qui va être appelée lorsqu'un nouveau message OSC va être reçu :

```arduino
// FUNCTION THAT WILL BE CALLED WHEN AN OSC MESSAGE IS RECEIVED:
void myOscMessageParser( MicroOscMessage& receivedOscMessage) {
   // ADD MESSAGE PARSING CODE HERE
}
```


À **l'intérieur de la fonction que vous venez de créer** l'adresse du message peut être validée avec *checkOscAddress()* ainsi :
```arduino
if ( receivedOscMessage.checkOscAddress("/address") ) {
	// MESSAGE ADDRESS IS "/address"
}
```

Lorsque l'adresse du message a été validée, il est possible de récuprer les données. Par exemple, pour récupérer un entier:
```arduino
int32_t intArgument = receivedOscMessage.nextAsInt();
```

Voici comment récupérer les autres types de données :
```arduino
// PARSE AN INT
int32_t intArgument = receivedOscMessage.nextAsInt();
// PARSE A FLOAT
float floatArgument = receivedOscMessage.nextAsFloat();
// PARSE A STRING
const char * s = receivedOscMessage.nextAsString();
// PARSE A BLOB
const uint8_t* blob;
uint32_t length = receivedOscMessage.nextAsBlob(&blob);
// PARSE MIDI
const uint8_t* midi;
receivedOscMessage.nextAsMidi(&midi);

```

### Code à intégrer dans *loop()*

#### Déclencher la réception des messages

Dans *loop()* nous devons déclencher la réception des messages OSC avec la méthode *onOscMessageReceived()* à laquelle nous passons le nom de la fonctione personnalisée créée précédemment:
```arduino
myMicroOsc.onOscMessageReceived( myOscMessageParser );
```
#### Envoyer des messages

Avant d'envoyer des messages, il faut limiter la vitesse d'envoi selon un intervalle de temps :
```arduino
// EVERY 50 MILLISECONDS :
if (millis() - myChronoStart >= 50) {  
    myChronoStart = millis();           // RESTART CHRONO

    // SEND OSC MESSAGES HERE
}
```

À **l'intérieur de la fonction que vous venez de créer**  vous pouvez envoyer des messages. Par exemple un entier ainsi :
```arduino
int myIntToSend = 100;
myMicroOsc.sendInt("/address", myIntToSend);
```

Voici les autres méthodes pour envoyer les autres types de données :
```arduino
// SEND AN INT(32)
myMicroOsc.sendInt(const char *address, int32_t i);
// SEND A FLOAT
myMicroOsc.sendFloat(const char *address, float f);
// SEND A STRING
myMicroOsc.endString(const char *address, const char *str);
// SEND A BLOB
myMicroOsc.sendBlob(const char *address, unsigned char *b, int32_t length);
// SEND DOUBLE
myMicroOsc.sendDouble(const char *address,double d);
// SEND MIDI
myMicroOsc.sendMidi(const char *address,unsigned char *midi);
// SEND INT64
myMicroOsc.sendInt64(const char *address, uint64_t h);
// SEND A MIXED TYPE VARIABLE LENGTH MESSAGE
myMicroOsc.sendMessage(const char *address, const char *format, ...);

```