# project1 Git & GitHub
###### Rongchen(Kerry) Wang
After making a new branch called “new” and adding one comments (different) to both my new and master branch, I tried to merge the two branches in the working of my master branch.
```
git merge new
```
But an error appeared on my terminal:
> merge conflict in project01.cpp
> Automatic merge failed; fix conflicts and then commit the result.”

I was now onto solving the conflict. At first, I tried to pull from context in new branch with ```git pull origin new``` but it result in another error:
> error: Pulling is not possible because you have unmerged files.
> hint: Fix them up in the work tree, and then use 'git add/rm <file>'
> hint: as appropriate to mark resolution and make a commit.
I got a hint on “add” and “commit” from my terminal. But I wanted to try something else first.

I saw a rebase command, ```git rebase new``` on the Git cheatsheet Dr. Morrison-Smith provided with us. It sounds like a potential solution to solve the conflict, base one on another. I tried to rebase my master on my new branch. But I got an error again saying that I need merge and have unstaged changes. The word “unstaged changes” made me realize that maybe I do need to “add” again. However, another error appeared when I tried to merge after "add."
> fatal: You have not concluded your merge (MERGE_HEAD exists).
> Please, commit your changes before you merge.
I thought I might need to complete the “add-commit-push” process, so I tried to commit the change again in my master branch.
```
git commit project01.cpp -m "Trying again after add"
```
But I got another error:
> fatal: cannot do a partial commit during a merge.

Which part is not fully committed? I decided to go checkout my new branch. Yet I got a new error still asking me to commit:
> error: Your local changes to the following files would be overwritten by checkout:
> 	project01.cpp
> Please commit your changes or stash them before you switch branches.
I looked at the git cheatsheet again and found the ```git push <remote> -force``` command. 
The explanation says that this “forces the git push even if it results in a non-fast-forward merge”. 
So I think “-force” is what I need. So I did the following command.
 ```
 git commit project01.cpp -m "Trying again after add *" -force
 ```
It worked. But after I tried to change from the working of my master branch to checkout my new branch, terminal showed me the same error saying that I need to commit my changes before switch branches. So I tried to just do a normal commit without the “-force.” It worked this time and I pushed the change into my master branch. Then I tried to merge the new branch into my master branch. It finally worked and now in my master branch, I got this lines bellow, regarding the merge:

>  |<<<<<<< HEAD
               
>  |<<<<<<< HEAD
               
>  |   // a comment in the master branch 
 
>  | =======
 
>  |  // I added something here.
 
>  |>>>>>>> new
In Atom, the two part of changes are colored differently with one “use me” near each of them. The change I made in master branch is colored in purple background the the change in new branch colored blue.
