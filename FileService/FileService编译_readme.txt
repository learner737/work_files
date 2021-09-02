检查编译依赖
yum -y install cmake gcc gcc-c++ gdb
  
  
编译步骤:
	把AceSure文件夹拷贝到linux环境中
1.生成协议
  cd AceSure/Common/Protocol/ProtocolGenerator/Build/  : 进入文件夹
  
  ll   :    查看文件夹里面的内容（看有没有generate.sh)
  
  chmod +x generate.sh  给与执行权限
  
  ./generate.sh    执行协议
  
  
2.编译FileService
  AceSure/FileService
  
3.讲CMakeList.txt文件通过cmake生成为makefile文件编译
  mkdir AceSure/FileService/build
  cd AceSure/FileService/build
  cmake ../  # ../指代的是CMakeList.txt文件所在的路径
  
4.make


调试代码

先断开连接
  进入server文件夹 ： cd /usr/local/cdap/6.0/server
  断开连接		   ： cdapserverservice stop fileservice
进入ds_tools
  cd  ds_tools
把原来的可执行文件改名字（避免被覆盖掉了，这是第一次需要做的事情）
   mv FileService FileService.rpm
   
把可执行文件拷贝过来
    scp root@192.168.2.66:/home/pdp/AceSure/Common/Protocol/ProtocolGenerator/Build/bin/FileService ./
	代表把这个FileService拷贝到当前文件夹下（./)
把代码拷贝过来
    先创建一个一模一样的代码文件夹
	mkdir -r /home/pdp/AceSure/FileService
	然后进入到FileService
	cd /home/pdp/AceSure/FileService
	拷贝文件夹
	scp -r root@192.168.2.66:/home/pdp/AceSure/FileService/Src ./


进入 ds_tools文件夹
	cd /usr/local/cdap/6.0/server/ds_tools
再开一个终端窗口并找到它的tty值
    tty (拷贝得到的tty值）
把运行的结果（ouput)显示到另一个窗口（刚刚得到tty值的那个窗口）
     gdb -tui --tty=/dev/pts/s ./FileService(tui的意思是有一个带界面看代码的模式）
打断点
	 b   CFileServiceStorage::Start(在函数里打断点）
	 b   main : 24(在某个文件的多少行打断点）


服务器ip
192.168.2.73 ssh访问: root+passR00t

FileService的安装路径: /usr/local/cdap/6.0/server/ds_tools 	
                 日志: /usr/local/cdap/6.0/server/ds_tools/var
				 
				 
				 cdapserverservice start fileservice