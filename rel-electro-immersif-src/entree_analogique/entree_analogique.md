# Entrée analogique

![Broches pouvant effectuer une lecture analogique](./entrees_analogiques_nano.svg)


Pour effectuer la mesure analogique de la tension électrique présente à une broche, nous utilisons la paire de fonctions suivantes :
1) Configurer la broche `maBrocheAnalogique` en mode entrée avec `INPUT` :
```arduino
pinMode( maBrocheAnalogique , INPUT );
```
2) Effectuer la lecture de la broche `maBrocheAnalogique` avec `analogRead()` :
```arduino
int maLectureAnalogique = analogRead( maBrocheAnalogique );
```

La fonction `analogRead()` mesure une tension entre 0V et 5V avec une résolution de 1024 seuils. 
La valeur retournée par `analogRead()` est toujours entre 0 et 1023.
