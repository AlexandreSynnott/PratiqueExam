#!/bin/bash
for fichier in *; do 
	if [ -n "$fichier"] && [ -f "$fichier"]; then 
		echo "$fichier"
	fi
done
