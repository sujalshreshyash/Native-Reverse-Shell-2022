# C++-Reverse-Shell-2022
Reverse shell written in C++ using TCP protocol to make permanent connection and is 
fully undetectable not only on scan time but on runtime too.



- Windows defender runtime bypass:

![sujal exe windows defender bypass](https://user-images.githubusercontent.com/105509101/169946282-6fe0ba7e-a826-4c24-9513-5fefca7a4036.gif)



- antiscan.me results:

![image](https://user-images.githubusercontent.com/105509101/169944742-31cd2d0c-1cf6-43e5-99cf-9341f74a2949.png)

Requirements:
- C++ fully installed in Visual Studio Code 2022
- Static IP of the server/pc on which you'll run your listener. If you wanna use VPS, try Digitalocean.


How to use:
- Open the TcpReverseShell.sln and navigate to TcpReverseShell.cpp
- Open a terminal in your linux and start netcat listener, for eg. nc –lvp 4444
- Replace "Your Static IP" and "Your Open Port" with your IP and Port respectively. 
- Build the solution
- The .exe will generate in this folder (location may vary) - C++ FUD Reverse Shell\TcpReverseShell-main\C++ Reverse Shell FUD 2022\x64
- Run your .exe file and voila - no detection, no bullshit just pure reverse shell connection to your netcat listener server.

I don't think I should tell you this but:
Don't fuckin upload the .exe file here and there, all the file uploading websites have antivirus and bots running 24/7 which will fuck this .exe and this can't be made FUD again. Also, don't upload this .exe to any stupid malware scanning website for checking other than antiscan.me but I'll suggest that if it is bypassing defender on your pc, it's all good.


Contact:
- Discord - Sujal#7581
- Telegram - @sujalshreshyash
- Twitter - @sujalshreshaysh

