# Identifiants série ASCII

Il est souvent nécessaire d'envoyer plusieurs données par série ASCII. Dans ce cas, il faut précéder l'envoi de la donnée par un identifiant. À des fins de compatibilités avec l’OSC qui sera présenté plus tard, l’identifiant de la donnée sera préfixé du symbole */*. 

Par exemple, dans les extraits suivants, nous envoyons la donnée de lecture d’un bouton et d’un potentiomètre avec les identifiants */button* et */pot* respectivement :

```arduino
  Serial.print("/button");
  Serial.print(" ");
  Serial.println(maLectureBouton);
```

```arduino
  Serial.print("/pot");
  Serial.print(" ");
  Serial.println(maLecturePotentiometre);
```

Chaque envoi est structuré ainsi :
* Un premier `Serial.print("/identifiant")` qui envoie l'identifiant (préfixé de */*).
* Un deuxième `Serial.print(" ")` qui envoie un espace pour séparer l'identifiant et la valeur de la donnée.
* Un dernier `Serial.println(variable)` (il est important de noter le *ln* dans le nom de la fonction) qui envoie la valeur de la donnée.