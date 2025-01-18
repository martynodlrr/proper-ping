Small program so I don't have to re-enter the same command until I get a hit.

To compile:
´´´bash
gcc -o proper-ping proper-ping.c
´´´
and add to your list of binaries

´´´bash
mv proper-ping /bin/.
´´´

´´´bash
echo "alias google="proper-ping"" >> ~/.bashrc
´´´

.ico file if you want to add it to your apps and .desktop file if your on kde
