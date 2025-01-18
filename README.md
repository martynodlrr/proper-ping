Small program so I don't have to re-enter the same command until I get a hit.
.ico file if you want to add it to your apps

To compile:
´´´bash
gcc -o proper-ping proper-ping.c
´´´
and add to your list of binaries

´´´bash
echo "alias google="proper-ping"" >> ~/.bashrc
´´´
