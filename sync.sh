#!/bin/bash

echo "[+] Commit: "
read -p "Introduce commit: " coomit


rsync -av --progress ~/Templates/Repos/* ~/git/42Piscine --exclude .git
rsync -av --progress ~/.vimrc ~/git/.dotfiles/.vimrc
rsync -av --progress ~/.bashrc ~/git/.dotfiles/.bashrc

cd ~/git/42Piscine/

git add .
git commit -m $coomit
git push

cd -
