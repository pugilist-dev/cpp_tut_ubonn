wc -l < data.dat
cat ./data.dat | grep d[o,a]lor | wc -l
wc -w < data.dat
tr ' ' '\n' < ./data.dat | grep mol* | wc -l