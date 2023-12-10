#!/bin/bash

rsync -av --progress ~/Templates/Repos/* ~/git/42Piscine --exclude .git

cd ~/git/42Piscine/

echo "[+] Pushing to 42Piscine"
echo "[+] Commit: "
read -p "Introduce commit: " coomit
git add .
git commit -m $coomit
git push

cd -

