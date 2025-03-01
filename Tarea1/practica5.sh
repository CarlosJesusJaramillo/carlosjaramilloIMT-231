#!/bin/bash
## Creamos el archivo deseado.txt
touch secreto.txt
##Escribimos dentro de este un mensaje
echo "Este mensaje es confidencial" > secreto.txt
## Cambiar los persimos para el propietario pueda leer y escribir
chmod 600 secreto.txt
ls -l secreto.txt
## Cambiamos como otra persona o intentar abrir con otro usuario
su usuario2 -c open secreto.txt
## Damos los nuevos permisos que se quieren dar
chmod 644 secreto.txt
##mostramos los permisos finales
ls -la 

