#!/bin/bash



rsync -av --progress ~/Templates/Repos/* ~/git/42Piscine --exclude .git
rsync -av --progress ~/.vimrc ~/git/.dotfiles/.vimrc
rsync -av --progress ~/.bashrc ~/git/.dotfiles/.bashrc

cd ~/git/42Piscine/

echo "[+] Pushing to 42Piscine"
echo "[+] Commit: "
read -p "Introduce commit: " coomit
git add .
git commit -m $coomit
git push

cd -

echo "[+] Pushing to .dotfiles"
echo "[+] Commit: "
read -p "Introduce commit: " coomit
cd ~/git/.dotfiles/

git add .
git commit -m $coomit
git push

cd -
