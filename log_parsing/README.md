# **LOG PARSING :snake:**

## **Exercise About stdin**

This is a script that reads ```stdin``` line by line and computes metrics:
- Input format: <IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size> (if format do not match this, the line is skipped)
- After every 10 lines and/or a SIGINT Signal (Ctrl^C), we print the statistics: <br>
	- Total file size
	- Number of line by status code
