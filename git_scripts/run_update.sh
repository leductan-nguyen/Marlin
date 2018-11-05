cd ..
cur_branch=$(git branch | grep \* | cut -d ' ' -f2)
if [ "$cur_branch" != "Rel1200" ]
then
	git stash
	git checkout Rel1200
fi
git pull
if [ "$cur_branch" != "Rel1200" ]
then
	git stash pop
	git checkout $cur_branch
fi
cd -