cat /etc/passwd | grep '#' -v | sed n\;g | rev | sort -r | grep '_' | cut  -d ":" -f 7 | head -n $FT_LINE2 | tail -n $FT_LINE1| tr "\n" "," | sed 's/,/, /g' | sed 's/..$/./'
