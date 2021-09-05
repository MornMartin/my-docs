### 0. 什么是Git
* Git是分布式版本管理系统，可以将你对项目的每次修改都记录成一个提交（commit），并且支持以多分支（branch）方式来管理不同项目开发线路。

### 1. 什么是工作区、暂存区和版本库
* 工作区：对于纳入管理的文件，相较于已存档版本，已作出了修改的文件或新增的文件。
* 暂存区：将工作区修改文件使用`git add 文件路径`命令，可添加至暂存区，只有暂存区的文件修改才可被存档。
* 版本库：以分支的形式存档每次文件修改。

### 2. Git与SVN有啥区别
* Git是分布式版本管理工具，在断网的时候能使用除与远程库同步外的所有功能；在远程仓库不可用时，利用任何一个克隆仓库都可以对其进行恢复或重新部署，当然克隆仓库的分支可能不是全量的。
* SVN是集中式代码管理工具，断网功能不可用。

### 3. 怎样配置Git用户信息
* 配置用户名：`git config [--global] user.name "用户名"`
* 配置邮箱：`git config [--global] user.email "邮箱地址"`

### 4. 怎样克隆远程仓库
* clone: `git clone 仓库地址`
    > 可使用https地或ssh地址

### 5. 怎样绑定Git本地客户端与远程用户端
1. 生成ssh-key公钥：`ssh-key -o`
2. 查询ssh-key公钥：`cd ~/.ssh && vim id_rsa.pub`
3. 绑定公钥：以GitHub为例，settings->SSH and GPG keys->New SSH key 贴入查询到的公钥，本地git客户端即可获得你对远程仓库读写权限。

### 6. 怎样将远程分支同步至本地分支
* pull：`git pull 远程仓库名 远程分支名[:本地分支名]`
    >拉取远程分支合入当前(指定)本地分支
* fetch && merge: `git fetch 远程仓库名 远程分支名[:本地存储分支名] && git merge 本地存储分支名`
    >拉取远程分支存储之本地分支名，并将本地存储分支合入当前分支

### 7. 怎样将本地分支同步至远程分支
* push：`git push 远程仓库名 远程分支名[:本地分支名] [-f]`
    > 将当前(指定)分支推送至远程仓库指定分支；一般情况下，不存在会创建；若存在冲突无法快速合并会报错，需要使用`-f`参数执行覆盖。

### 8. 怎样创建提交
1. 添加暂存区：`git add {文件 | 目录 | .}` 
    >添加文件/目录/所有修改文件至暂存区
2. 创建提交：`git commit [-m message] [--amend]`
    > 创建提交并备注提交信息；`--amend`用于将修改与当前分支最新的commit压缩成一个commit

### 9. 怎么回退提交
* <span id="reset-commit">reset</span>：`git reset [--soft | --hard] [HEAD^ | commitID]`
    >将当前分支文件状态回退至上一提交版本(指定提交版本)`--soft`和`--hard`的区别是回退的修改内容是否需要放入暂存区。
* revert：`git revert [HEAD^ | commitID]`
    > 通过提交一个逆修改将当前分支文件状态回退至上一提交版本(指定提交版本)

### 10. 怎样复制提交
* cherry-pick：`git cherry-pick commitID`
    > 复制指定提交至当前分支

### 11. checkout用法
* 切换分支：`git checkout 分支名称`
* 回退修改：`git checkout {文件名 | 目录 | .}`
    > 回退文件/目录/所有文件在工作区的修改，**已添加至暂存区的修改将不会被回退**

### 12. reset用法
* 从暂存区中移除文件：`git reset {文件名 | 目录 | .}`
* 回去提交：[详见](#reset-commit)

### 13. branch用法
* 查看分支列表：`git branch`
* 创建分支：`git branch 分支名`
    > 从当前分支新建分支
* 删除分支：`git branch {-d | -D} 分支名`
    > 删除指定分支，`-D`相比于与`-d`可以删除未被合并的分支，存在提交丢失的可能

### 14. stash用法
* 临时存储：`git stash`
    > 将工作区与暂存区修改内容临时存储并清空
* 查看临时存储：`git stash list`
* 恢复临时存储：`git stash pop [stash@{num}]`
    > 释放（指定）临时存储修改至工作区
* 恢复临时存储：`git stash apply stash@{num}`
    > 复制（指定）临时存储修改至工作区
* 清空临时存储：`git stash clear`

### 15. log用法
* 查看当前分支提交历史：`git log`

### 16. reflog用法
* 查看操作记录: `git reflog`
    > 可查看如分支切换、提交等操作，并包含每次操作的HEAD信息，一般被用于使用reset命令进行回退操作

