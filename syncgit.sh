#!/bin/bash

cd ~/git/42Piscine/

rsync -av --progress ~/Templates/Repos/* ~/git/42Piscine --exclude .git

git add .
echo "[+] Pushing to 42Piscine"
echo "[+] Commit: "
read -p "Introduce commit: " coomit
git commit -m $coomit
git push

cd -

