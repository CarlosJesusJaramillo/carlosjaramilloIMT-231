#!/bin/bash
## Primero se llega a crear un nuevo archivo con el comando touch con el nuevo archivo.txt
touch archivo1.txt 
## Utilizamos el comando echo  para poder escribir y dejar un texto dentro del archivo que creamos
echo "Hola, este es un archivo de prueba" > archivo1.txt
## Creamos una copia de nuestro archivo original con el comando cp
cp archivo1.txt archivo_copia.txt
## Nos movemos en el nuevo archivo practica_shell
cd /home/carlos-jesus/practica_shell
## creamos un nuevo directorio con el nombre de backup
mkdir backup
## Nos movemos en el que realizaos la copia llamado archivo_copia.txt
cd /home/carlos-jesus/UCB2025/carlosjaramilloIMT-231/Tarea1 
## Con el siguiente comando movemos la copia en el nuevo archivo creado backup
mv archivo_copia.txt /home/carlos-jesus/practica_shell/backup/
## Nos volvemos a mover en el primer directorio  en el que creamos nuestro primer archivo
cd /home/carlos-jesus/UCB2025/carlosjaramilloIMT-231/Tarea1
## removemos el archivo que hemos creado inicialmente
rm archivo1.txt
## volvemos   al backup
cd /home/carlos-jesus/practica_shell/backup
## hacemos el listado del backup 
ls

