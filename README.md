## helloworld.hellocpp
### box.h头文件
声明Box类
### box.cpp文件
Box类的实现
### main.cpp文件
调用cpp类
### vs2010 monokai配色
https://www.zhihu.com/question/40720896
## 2017.11.23开始使用git更新
### 初始化
在本地创建源代码文件夹，然后进入该文件夹:
1. git init初始化该文件夹
2. git remote add 自己起名（在本地表示远程仓库） 远程仓库地址（https://github.com/用户名/仓库名.git）
### 提交代码
进入到代码所在本地文件夹
git add .
git commit -m "提交说明"
git push origin branchname(origin表示远程代码仓库、branchname表示分支名，本仓库的分支为hellocpp)
### 下拉代码
进入到代码所在本地文件夹，然后
git pull origin branchname(origin表示远程代码仓库、branchname表示分支名) 
