set CUR_DIR=%cd%
cd ..
git stash
git pull
git stash pop
cd %CUR_DIR%