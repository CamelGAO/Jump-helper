# Jump-helper
助手 for 欢乐跳瓶和微信跳一跳

### 源码说明
整个程序是我在课余编写的，虽不复杂却也费了些心思，这里与大家分享。我还在学习，难免有不合适不规范之处，希望大拿们多多指教。工程由VS2017创建，并有编译好的Jump.exe可直接食用。</br>

### 使用说明
只支持安卓！通过这个工具，玩家可以用鼠标选择游戏截图上起点和终点来给安卓手机发送对应的跳跃命令。该工具测试结果良好，同时支持通过修改配置文件来更好地适配不同的手机。</br>

手机准备：开启USB调试，如果模拟点击是独立选项，请一并开启。</br>

PC准备：</br>
1、安装驱动。运行ADBDriverInstaller.exe安装。</br>
2、将下载或编译得到的Jump.exe与Data文件夹放在同一目录下。</br>
3、运行Jump.exe，鼠标中键点击界面获得当前手机截屏，一切正常说明准备完毕，否则检查前面的设置。</br>

按键：</br>
鼠标左键:设置点1。</br>
鼠标右键:设置点2。</br>
鼠标中键:获取截图，点1和点2均设置的情况下会在截图前触发跳跃并清空点1和点2。</br>

运行：</br>
1、运行Jump.exe。</br>
2、鼠标中键点击界面获得当前游戏截屏。</br>
3、鼠标左右键分别点击起点和终点（顺序相反也行），点击后可以分别看到对应十字。</br>
4、等待画面自动刷新，重复3~4。</br>

### 配置文件说明
配置文件是 Data 目录下的 config.xml，默认内容如下：
```
<Config>
    <ClientX>360</ClientX>
    <ClientY>640</ClientY>
    <BsaeX>1080</BsaeX>
    <BaseY>1920</BaseY>
    <Rate>1.55</Rate>
    <Delay>300</Delay>
    <AutoReload>true</AutoReload>
</Config>
```
说明：
ClientX和ClientY分别是程序窗口的宽和高，定义了图片显示区域。如果客户区长宽比例与手机屏幕截图长宽比不一致，截图将被伸缩来适应窗口，这只是视觉上的不协调，不会影响操作结果。

BsaeX、BaseY和Rate共同决定跳跃距离。Rate是在尺寸为BsaeX * BaseY（单位像素）的手机截图上跳跃间距与按压时间的系数。按压时间 = 间距 * Rate。 只要手机屏幕长宽比一致，这个值就是通用的。当前Rate值是欢乐跳瓶在1080 * 1920屏幕上的值，它也适用于720 * 1280的手机。 微信跳一跳在1080 * 1920屏幕上的Rate为1.4。

如果截屏中出现方块没有完全落下的情况，可以适当调大Delay时间，单位是毫秒。

将AutoReload设置为false后，前文运行说明的第四条要改为：等待画面自动刷新，重复2~4。即选完起点终点后，手动按鼠标中键触发跳跃（跳跃后依然自动截图）。
