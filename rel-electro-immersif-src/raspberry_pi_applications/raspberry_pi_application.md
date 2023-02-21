# Raspberry Pi Applications 

## Électronique

### Arduino Legacy IDE (1.8.X)

La version qui est disponible via le gestionnaire de paquet est désuète. 

* Télécharger et installer la plus récente version de la série Legacy IDE (1.8.X) sur le site suivant [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software) 

* Sélectionner **Linux ARM 32 bits** 

[https://downloads.arduino.cc/arduino-1.8.19-linux32.tar.xz](https://downloads.arduino.cc/arduino-1.8.19-linux32.tar.xz)

* Décompresser le fichier `tar.xz`

* Exécuter le fichier `install.sh`

* Lancer l'application via l'icône générée dans la barre de menu


## Programmation

### PureData

[PureData](http://msp.ucsd.edu/software.html)

La version qui est disponible via le gestionnaire de paquet est désuète. 

#### Compiler PureData depuis la source

* Lancer les commandes suivantes depuis un terminal 
```
sudo apt-get install autoconf libtool libasound2-dev build-essential autoconf automake libtool gettext git libasound2-dev libjack-jackd2-dev libfftw3-3 libfftw3-dev tcl tk 
mkdir ~/src
cd ~/src
git clone https://github.com/pure-data/pure-data
cd pure-data
./autogen.sh
./configure --enable-jack --enable-fftw
make -j4
sudo make install

```

### PlugData

[https://plugdata.org/](https://plugdata.org/)

non disponible via le gestionnaire de paquets

#### Ajouter plugdata au gestionnaire de Paquets
```
echo 'deb http://download.opensuse.org/repositories/home:/plugdata/Debian_11/ /' | sudo tee /etc/apt/sources.list.d/home:plugdata.list
curl -fsSL https://download.opensuse.org/repositories/home:plugdata/Debian_11/Release.key | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/home_plugdata.gpg > /dev/null
sudo apt update
sudo apt install plugdata
```

####

## Audio 

### Reaper 

DAW 

* Télécharger la version la plus récente pour l'architecture Linux armv7l sur le site [https://www.reaper.fm/download.php](https://www.reaper.fm/download.php)

* Décompresser 

* Executer install-reaper.sh depuis le terminal

* Lancer l'application via l'icône générée dans la barre de menu

### Cardinal

Version libre de VCV Rack

* Télécharger la version `armhf` la plus récente depuis https://github.com/DISTRHO/Cardinal/releases

* Décompresser le fichier `tar.gz`

* Exécuter `CardinalNative` pour lancer l'application

* Configurer les DAW vers le dossier de Cardinal pour indexer Cardinal comme effet (VST, VST3, LV2, CLAP)



