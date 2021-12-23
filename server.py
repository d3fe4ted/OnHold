import hashlib, os

resource_file = "database.sql"

os.system("clear")

def encode(username, password):
    return "$%s::%s$" % (username, hashlib.sha1(password).hexdigest())


def add_user(username, password):
    if os.path.exists(resource_file):
        with open(resource_file) as f:
            if "$%s::" % username in f.read():
                raise Exception("User already exists")
    with open(resource_file, "w") as f:
        print >> f, encode(username, password)
    return username


def check_login(username, password):
    with open(resource_file) as f:
        if encode(username, password) in f.read():
            return username


def create_username():
    try:
        username = add_user(raw_input("User: "),
                            raw_input("Password: "))
        print "Added User %s" % username
    except Exception as e:
        print "Failed to add user %s! ... user already exists??" % username


def login():
    if check_login(raw_input("User: "), raw_input("Password: ")):
        print "Login Success"
        os.system("perl client.c")
    else:
        print "Nice try Skidiot, try again next time."


while True:
    {
        'c': create_username,
        'l': login
    }.get(
        raw_input(
            "\033[31m      +-----------------+\n      | \033[37m(C)reate User   \033[31m|\n      | \033[37m(L)ogin         \033[31m|\n      +-----------------+\n\033[32mlogin\033[37m@\033[31mhomeholder~ \033[37m").lower(),
        login)()
