#!/bin/bash

echo "[+] Commit: "
read -p "Introduce commit: " coomit

cd  ~/Users/smoraes-/git/42Piscine
rsync -av --progress ../../Templates/Repos/* . --exclude .git

git add .
git commit -m $coomit
git push
