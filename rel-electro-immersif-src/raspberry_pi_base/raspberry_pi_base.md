# Raspberry Pi 

## Installer [Raspberry Pi OS](https://fr.wikipedia.org/wiki/Raspberry_Pi_OS) sur une carte micro SD

### Utiliser [Raspberry Pi Imager](https://www.raspberrypi.com/software/) 

* [Vidéo survolant Raspberry Pi Imager ](https://www.youtube.com/watch?v=ntaXWS8Lk34)

* [Documentation officielle pour bien démarrer](https://www.raspberrypi.com/documentation/computers/getting-started.html) 

### 32Bit vs 64Bit

Au temps d'écrire (janvier 2023), l'accélération matérielle du décodage caméra n'était pas encore active sur la mouture 64 bit. Le cas échéant, la distribution 32 bit est favorisée.   

## Raspi-config 

Une fois que le système sur le Raspberry Pi s'est initialisé, lancer un terminal et exécuter la commande suivante

Via [raspi-config](https://www.raspberrypi.com/documentation/computers/configuration.html#the-raspi-config-tool)

```
sudo raspi-config
```

### Hostname
tim-rpi-x ou x devient un chiffre d'une séquence

### Interface option

#### IP
https://www.raspberrypi.com/documentation/computers/remote-access.html#introduction-to-remote-access

#### SSH
https://www.raspberrypi.com/documentation/computers/remote-access.html#setting-up-an-ssh-server


#### VNC
https://www.raspberrypi.com/documentation/computers/remote-access.html#virtual-network-computing-vnc


## Partage de fichier réseau

### Samba
https://www.raspberrypi.com/documentation/computers/remote-access.html#samba-smbcifs

```
sudo apt-get update 
sudo apt-get install samba samba-common-bin
sudo smbpasswd -a tim
sudo service smbd restart
```
```
micro /etc/samba/smb.conf 
```

~line 176

```diff
- read only = yes
+ read only = no
```

## Affichage réseau SSH

### Avahi ssh

```
sudo su
curl https://raw.githubusercontent.com/lathiat/avahi/master/avahi-daemon/ssh.service > /etc/avahi/services/ssh.service
exit
sudo systemctl restart avahi-daemon.service 
```

## Clef SSH

Si besoin 

```
ssh-keygen -t rsa -b 2048 -C $HOSTNAME
```