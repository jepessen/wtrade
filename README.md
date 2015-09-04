# wtrade
Program for stock trading. It does not perform trading but it can retrieve info and perform operation in order to check best operations.

# Remotes
Following remotes are added as subtrees.

## WPlot

The repository can be found at https://github.com/jepessen/wplot.git

Added with

	git remote add -f wplot https://www.github.com/jepessen/wplot.git
	git subtree add --prefix subtrees/wplot wplot master --squash

It should be updated from master branch. The update command is

	git subtree pull --prefix=subtrees/wplot/ --squash wplot master
