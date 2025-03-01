#!/bin/bash
##creamos un archivo script 
touch scrip.sh
##  escribimos dentro del escrip
echo  "#!/bin/bash" > scrip.sh
echo "Este es un archivo de prueba" > scrip.sh
## Mostramos los permisos otorgados en este script
ls -l
##cambiamos los permisos concedidos al usuario
chmod 500 script.sh
## modificamos el archivo
nano scrip.sh
## modificamos los permisos y que pueda acceder a la lectura
chmod 700 script.sh

