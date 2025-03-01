#!/bin/bash
## creamos tres directorios que han sido solicitados
mkdir documentos imagenes  scripts
## vamos a la carpeta de documentos :
cd /home/carlos-jesus/UCB2025/carlosjaramilloIMT-231/Tarea1/documentos 

##creamos los archivos desceados 

touch nota{1..5}.txt
## Movemos la nota3 a la carpeta backup
mv nota3.txt /home/carlos-jesus/practica_shell/backup/
## movemos la nota 4 a la carpeta backup
mv nota4.txt /home/carlos-jesus/practica_shell/backup/
##Volvemos a la carpeta en la que creamos los primeros directorios 
cd /home/carlos-jesus/UCB2025/carlosjaramilloIMT-231/Tarea1
## removemos el directorio de imagnenes creada de los otros direcorios: 
rm -r imagenes 




