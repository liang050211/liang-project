<!--
  📌 使用前请替换以下占位内容：
  1. 「你的名字」        → 你的昵称或真名
  2. GITHUB_USERNAME     → 你的 GitHub 用户名
  3. your_email@example.com → 你的真实邮箱
-->

<h1 align="center">你好，我是「你的名字」 👋</h1>
<h3 align="center">嵌入式软件方向 · STM32 / FreeRTOS / 嵌入式 Linux</h3>

---

## 🧑💻 关于我

- 🔧 专注 **STM32 嵌入式开发**：裸机超级循环 → 标准库 → HAL → FreeRTOS 多任务，都亲手趟过一遍
- 🐛 喜欢把 Bug 挖到根因：蓝牙粘包怎么拆、RTOS 任务抢占为什么破坏时序、任务栈什么时候溢出
- 🌱 正在向 **ESP32 / 物联网**方向拓展
- 🎯 目标：成为一名可靠的嵌入式软件工程师

## 🛠️ 技术栈

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![STM32](https://img.shields.io/badge/STM32-03234B?style=flat-square&logo=stmicroelectronics&logoColor=white)
![FreeRTOS](https://img.shields.io/badge/FreeRTOS-2E7D32?style=flat-square)
![Keil MDK](https://img.shields.io/badge/Keil_MDK-3949AB?style=flat-square)
![ESP32](https://img.shields.io/badge/ESP32-E7352C?style=flat-square&logo=espressif&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)
![Raspberry Pi](https://img.shields.io/badge/Raspberry_Pi-A22846?style=flat-square&logo=raspberrypi&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white)

## 📌 精选项目

### ⏰ 智能天气时钟 · STM32F103 + FreeRTOS

> 从裸机超级循环重构为 FreeRTOS 多任务架构的桌面天气时钟。

- **功能**：联网实时天气与图标、NTP 网络校时、温湿度与六轴姿态显示、闹钟、手电筒、三级菜单交互
- **RTOS 多任务设计**：显示 / 按键扫描 / 传感器采集 / 初始化 4 个任务按周期调度，合理规划任务优先级与栈空间（heap_4）
- **疑难排查**：定位 DHT11 因任务抢占导致的微秒级时序损坏，用任务优先级 + 临界区修复；排查大局部数组引发的栈溢出卡死
- **显示优化**：背景图仅上电绘制一次、只局部刷新变化区域，消除 TFT 花屏与闪烁
- **联网通信**：ESP32-C3 经串口 AT 指令接入心知天气 API 与 NTP 校时，超时管理基于 FreeRTOS tick 重构

`STM32F103C8` `FreeRTOS` `ST7735 TFT` `ESP32-C3` `DHT11` `MPU6050` `RTC` `Keil MDK`

<!-- 有仓库后可在上面补链接：[查看源码](https://github.com/GITHUB_USERNAME/xxx) -->

### 🚗 智能小车 · STM32F103 + HAL

> 蓝牙遥控 / 超声波避障 / 四路红外 PID 循迹，三模式一键切换。

- **功能**：手机蓝牙遥控、超声波自主避障、PID 自动循迹，OLED 实时显示调试信息
- **串口帧协议**：自定义 `[...]` 定界帧 + 环形缓冲区 + 状态机解析，校验失败丢帧重建，解决蓝牙连续传输的粘包 / 丢包
- **PID 循迹**：位置式 PID + 偏差查表加权，带脱线保护与连续丢线自动停车
- **避障状态机**：巡航 → 左右扫描 → 决策 → 转向验证，舵机云台（50Hz PWM）配合超声波测距
- **执行器驱动**：20kHz PWM 电机调速 + H 桥方向控制（防短路逻辑）；超声波用定时器 100μs 中断计数、70ms 窗口测距
- **标准库 → HAL 迁移**：逐外设对照迁移全部功能，并用 DWT 实现微秒级延时

`STM32F103C8` `STM32 HAL` `PWM` `PID` `超声波测距` `红外循迹` `蓝牙串口` `OLED`

<!-- 有仓库后可在上面补链接：[查看源码](https://github.com/GITHUB_USERNAME/xxx) -->

## 📊 GitHub 数据

<p align="center">
  <img height="150" src="https://github-readme-stats.vercel.app/api?username=GITHUB_USERNAME&show_icons=true&hide_title=true" alt="GitHub stats" />
  <img height="150" src="https://github-readme-stats.vercel.app/api/top-langs/?username=GITHUB_USERNAME&layout=compact&hide_title=true" alt="Top languages" />
</p>

## 📫 联系我

- 📧 邮箱：your_email@example.com
- 🐙 GitHub：[@GITHUB_USERNAME](https://github.com/GITHUB_USERNAME)

---

<p align="center"><i>感谢来访，欢迎交流嵌入式相关的一切 👏</i></p>
