sudo apt install wget
sudo yum install wget
rm -rf client.c
rm -rf server.py
wget https://raw.githubusercontent.com/d3fe4ted/OnHold/main/client.c
wget https://raw.githubusercontent.com/d3fe4ted/OnHold/main/server.py
python2 server.py
