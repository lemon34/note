git 命令

* 新建分支
  * git branch  temp // 新建分支temp
  * git checkout temp // 切换到temp分支上面
* 使用远程的github库更新本地的库
  * git remote -v // 查看远程的名字
  * git remote add origin url// url  为自己仓库的url地址
  * git push -u origin master
* git  branch // 查看当前所在的分支
* git checkout -b  "name"// git branch name and git  checkout name
* git rebase 
  * ![1553485810309](C:\Users\a524\AppData\Local\Temp\1553485810309.png)
    * origin 是主干，mywork是分支，现在两个branch上面都前进了，导致分叉，所以可以使用git merge，将分支merge一下，这样就是合并形成下面的状态。
    * ![1553485953493](C:\Users\a524\AppData\Local\Temp\1553485953493.png)
  * 要是希望分支历史看起来像没有经过任何合并一样，可以使用git rebase，![1553486017377](C:\Users\a524\AppData\Local\Temp\1553486017377.png)
  * 将新的更改放到origin后面，但是在rebase的过程中可能会出现冲突，所以可能会需要进行冲突解决，Git会停止rebase让用户去进行冲突解决，解决完成之后直接使用git add就可以，不用commit，然后再执行git rebase --continue，这样便可以完成剩下的rebase，在任何时候都可以使用git rebase --abort停止rebase的行动。

