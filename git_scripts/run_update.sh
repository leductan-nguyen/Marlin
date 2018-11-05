cd ..
cur_branch=$(git branch | grep \* | cut -d ' ' -f2)
git stash
if [ "$cur_branch" != "Rel1200" ]
then
	git checkout Rel1200
fi
git pull
if [ "$cur_branch" != "Rel1200" ]
then
	git checkout $cur_branch
fi
git stash pop
cd -