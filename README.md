# C++-Reverse-Shell-2022
Reverse shell written in C++ using TCP protocol to make permanent connection and is 
fully undetectable not only on scan time but on runtime too.



Windows defender runtime bypass:

![sujal exe windows defender bypass](https://user-images.githubusercontent.com/105509101/169946282-6fe0ba7e-a826-4c24-9513-5fefca7a4036.gif)



antiscan.me results:

![image](https://user-images.githubusercontent.com/105509101/169944742-31cd2d0c-1cf6-43e5-99cf-9341f74a2949.png)


How to use:
- Open the TcpReverseShell.sln and navigate to TcpReverseShell.cpp
- Open a terminal in your linux and start netcat listener, for eg. nc –lvp 4444
- Replace "Your Static IP" and "Your Open Port" with your IP and Port respectively. 
- Build the solution
- The .exe will generate in this folder (location may vary) - C++ FUD Reverse Shell\TcpReverseShell-main\C++ Reverse Shell FUD 2022\x64
- Run your .exe file and voila - no detection, no bullshit just pure reverse shell connection to your netcat listener server.

