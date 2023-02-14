# Interrupteur

![L'interrupteur](./interrupteur_resume.svg)


## Branchement avec la résistance de rappel interne 

Il existe plusieurs façon de brancher un interrupteur à un microcontrôleur. Le circuit avec une résistance de rappel interne est utilisée dans le schéma ci-bas. Dans le code, il faut activer le mode correspondant à la résistance internet avec la fonction `pinMode()` ainsi :
```arduino
pinMode( maBroche , INPUT_PULLUP);
```
Lorsque l'interrupteur n’est pas appuyé, il y a présence de 5V (HIGH) à la broche 5 : la résistance de rappel interne est branchée au 5V et maintient l’entrée à ce niveau par défaut.

Lorsque l'interrupteur est appuyé, il y a présence de 0V (LOW) à la broche 5 : la broche 5 est directement relié au GND (0V).

![Branchement d'un interrupteur avec la résistance de rappel interne](./interrupteur_branchement.svg)




